#!/usr/bin/env python
from flask import Flask, request, jsonify, render_template, send_from_directory, g
from flask_jwt_extended import JWTManager, create_access_token, jwt_required, get_jwt_identity, get_jwt, decode_token
from flask_socketio import SocketIO, emit, join_room, leave_room
from aplustools.io import environment as env
from typing import Dict
import datetime
import sqlite3
import secrets
import uuid
import json
import ssl
import sys
import re
import os

from modules.database import init_db, Database
from modules.crypt import encrypt, decrypt, hash_password

# Set environment variables
env.set_working_dir_to_main_script_location()
__cwd__ = os.getcwd()
__program_name__ = "TPP Server"
__version__ = "0.1.0.0"
__os__ = "Windows"
__os_version__ = "any"
__major_os_version__ = ["10", "11"]
__py_version__ = [(3, 9), (3, 10), (3, 11)]

# Check if environment is suitable
sy, exit = env.System(), 0
if sy.get_os() != __os__: exit = 1
if sy.get_os_version() != __os_version__ and __os_version__ != "any": exit = 1
if not sy.get_major_os_version() in __major_os_version__: exit = 1
if sys.version_info[:2] not in __py_version__: exit = 1
if exit: sys.exit(0)

# Start the app
app = Flask(__name__)

app.config['JWT_SECRET_KEY'] = 'your_secret_key'
app.config["JWT_ACCESS_TOKEN_EXPIRES"] = datetime.timedelta(hours=24)
jwt = JWTManager(app)
socketio = SocketIO(app, manage_session=True)

# Initialize the database
init_db('application.db', app)
db = Database('application.db', app)

# Local Storage
user_sessions: Dict[str, str] = {} # Store all currently logged in users
client_secrets: Dict[str, list] = {} # Dictionary to store client tokens and their corresponding secrets
file_indices: Dict[int, list] = {19246192: ['./', 'application.db']} # Dictionary to store file paths

#
# Section 1
# Standardized ways of doing stuff functions
#
def response(message: str, status: int=200, error: bool=False, data: dict=None) -> str:
    payload = {'status': 'error' if error else 'success', 'message': message}
    if data is not None:
        payload['data'] = data
    return jsonify(payload), status

def create_jwt(username: str) -> str:
    access_token = create_access_token(identity=username)
    
    decoded_token = decode_token(access_token)
    jti = decoded_token["jti"]
    expires_at = datetime.datetime.fromtimestamp(decoded_token["exp"])
    
    user = db.get_user_by_username(username)
    
    db.insert_jti(jti, user["id"], expires_at)
    
    return access_token

#
# Section 2
# Front-End web routes (Only GET)
#
@app.route('/', methods=['GET'])
def index():
    try_it_out_selected = request.args.get('try_it_out', default=False, type=bool)
    jwt_token = request.args.get('jwt_token', default='', type=str) # Unused
    if try_it_out_selected:
        return render_template('try_it_out.html')
    return render_template('index.html')

@app.route('/download-file/<int:file_index>')
def download_file(file_index):
    if file_index in file_indices:
        file_path = file_indices[file_index]
        return send_from_directory(directory=file_path[0], path=file_path[1])
    return render_template('file_not_found.html')

#
# Section 3
# Client registration routes (Only POST)
#
def is_email_valid(email): # https://www.javatpoint.com/how-to-validated-email-address-in-python-with-regular-expression
    regex = re.compile(r'([A-Za-z0-9]+[.-_])*[A-Za-z0-9]+@[A-Za-z0-9-]+(\.[A-Z|a-z]{2,})+')
    if re.fullmatch(regex, email):
        return True
    else:
        return False

@app.route('/register_client')
def register_client():
    # Get the email for OTP (WSS)
    email = request.args.get('email', default='', type=str)
    if not email or not is_email_valid(email): # Send error response if no email was given or the email is mal-formatted
        return response("Invalid email", 400, True)
    
    # Generate a unique token for the client
    token = secrets.token_urlsafe()

    if not token in client_secrets: # Add better checks for token uniqueness
        # Generate a weak shared secret for this client
        weak_shared_secret = secrets.token_hex(5).upper()
        # Store the token and weak secret in the dictionary
        client_secrets[token] = [weak_shared_secret]
        # Generate verification code and send it to email
        print(f"Sending WSS {weak_shared_secret} to email {email}")
        
        # Return the token to the client
        return response("Created WSS", 200, False, {"token": token})
    else:
        return response("Generated already used token", 400, True)

@app.route('/get_shared_secret')
def get_shared_secret():
    # Retrieve the token from the client request
    token = request.args.get('token')
    # Retrieve the weak shared secret associated with this token
    weak_shared_secret = client_secrets.get(token, [None])[0] # Is a list of secrets
    
    if weak_shared_secret:
        shared_secret = secrets.token_hex(16)  # Generate a 32-character hex string
        client_secrets[token].append(shared_secret)
        encrypted_shared_secret = encrypt(weak_shared_secret, shared_secret)
        return response("Created SS", 200, False, {"shared_secret": encrypted_shared_secret})
    else:
        return response("Invalid token", 400, True)

@app.route('/get_secure_shared_secret')
def get_secure_shared_secret():
    # Retrieve the token from the client request
    token = request.args.get('token')
    # Retrieve the shared secret associated with this token
    shared_secret = client_secrets.get(token, [None, None])[1]
    
    if shared_secret:
        # Encrypt the real secret with the shared secret
        real_secret = secrets.token_hex(32)
        client_secrets[token].append(real_secret)
        encrypted_real_secret = encrypt(shared_secret, real_secret)
        return response("Created SSS", 200, False, {"secure_shared_secret": encrypted_real_secret})
    else:
        return response("Invalid token", 400, True)

#
# Section 4
# User registration routes (Only POST)
#
@app.route('/register', methods=['GET', 'POST'])
def register(): # Handle registration logic
    if request.method == "POST":
        # Retrieve the token from the client request
        token = request.args.get('token')
        # Retrieve the secure shared secret associated with this token
        secure_shared_secret = client_secrets.get(token, [None, None, None])[2]
        
        if secure_shared_secret:
            encrypted_data = request.json.get('encrypted_data')
            decrypted_data = decrypt(secure_shared_secret, encrypted_data)
            
            user_data = json.loads(decrypted_data)
            username = user_data.get('username')
            email = user_data.get('email')
            encrypted_password = user_data.get('encrypted_password')
            password = decrypt(secure_shared_secret, encrypted_password)
            
            # Hash the password before storing it
            hashed_password, salt = hash_password(password)
            
            try:
                # Store user data in the database
                user_id = db.create_user(username, email, hashed_password, salt)
                db.create_client_secrets(user_id, token, *client_secrets.get(token, [None, None, None]))
                client_secrets[token] = "USED"
                return response("Registered user", 200)
            except sqlite3.IntegrityError as e:
                # Check for unique constraint failure
                if "UNIQUE constraint failed: Users.username" in str(e):
                    return response("Username already exists", 400, True)
                elif "UNIQUE constraint failed: Users.email" in str(e):
                    return response("Email already exists", 400, True)
                else:
                    # Handle other integrity errors
                    return response(f"Database error: {str(e)}", 500, True)
        else:
            return response("Invalid token", 400, True)
    else:
        return render_template('site_not_found.html')

@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == "POST":
        # Retrieve the token from the client request
        token = request.args.get('token')

        # Retrieve client secrets using the token
        client_secret_data = db.get_client_secrets_by_token(token)
        if not client_secret_data:
            return response("Invalid token", 400, True)

        user_id = client_secret_data["user_id"]
        user = db.get_user_by_id(user_id)

        secure_shared_secret = client_secret_data["secure_shared_secret"]
        
        # Get encrypted credentials from request
        encrypted_username = request.json.get('encrypted_username')
        encrypted_password = request.json.get('encrypted_password')
        
        username = decrypt(secure_shared_secret, encrypted_username)
        password = decrypt(secure_shared_secret, encrypted_password)
        
        salt = user['salt']
        
        hashed_password, _ = hash_password(password, salt)
        
        if hashed_password != user["password_hash"]:
            return response("Invalid password", 400, True)
        
        # Generate JWT token
        access_token = create_jwt(username)
        #encrypted_access_token = encrypt(secure_shared_secret, access_token)
        return response("Logged in", 200, False, {"access_token": access_token})#jsonify(access_token=access_token), 200
    else:
        return render_template('site_not_found.html')

#
# Small section 4.5 unprotected routes
#
@app.route('/find_matches_public', methods=['GET', 'POST'])
def find_matches_public(): # For the try_it_out site
    if request.method == "POST":
        data = request.json
        # Implement matching logic
        # ...
        return "Not implemented yet"
    else:
        return render_template('site_not_found.html')

#
# Section 5
# JWT protected routes
# 
@jwt.token_in_blocklist_loader # Automatically check if token has been blocked or revoked
def check_if_token_is_revoked(jwt_header, jwt_payload: dict):
    jti = jwt_payload["jti"]
    return db.jti_in_blocklist(jti)

@app.route('/revoke_token')
@jwt_required
def revoke_token(): # JWT token
    # Retrieve the token from the client request
    token = request.args.get('token')
    
    user_id = db.get_client_secrets_by_token(token)["user_id"]
    
    jti = get_jwt()["jti"]
    
    if user_id != db.get_user_id_by_jdi(jti):
        response("Invalid token", 400, True)
    
    db.revoke_jti(jti)
    
    return response("JWT revoked", 200)

@app.route('/find_matches', methods=['GET', 'POST'])
@jwt_required()
def find_matches():
    if request.method == "POST":
        current_user_identity = get_jwt_identity()
        # Use current_user_identity to fetch user-specific data from the database
        user_data = db.get_user_by_username(current_user_identity)
        
        search_data = request.json
        # Implement matching logic
        # ...
        return "Not implemented yet"
    else:
        return render_template('site_not_found.html')

@app.route('/select_event', methods=['GET', 'POST'])
@jwt_required()
def select_event():
    if request.method == "POST":
        current_user_identity = get_jwt_identity()
        # Use current_user_identity to fetch user-specific data from the database
        user_data = db.get_user_data(current_user_identity)
        
        data = request.json
        # Implement matching logic
        # ...
        return "Not implemented yet"
    else:
        return render_template('site_not_found.html')

#
# Section 6
# Web sockets
#
@socketio.on('connect')
def handle_connect():
    # Retriever tokens from the query parameters
    print("HERE")
    token = request.args.get('token')
    jwt_token = request.args.get('jwt_token')
    print(token, jwt_token)
    if token and jwt_token:
        try:
            client_secrets = db.get_client_secrets_by_token(token)
            if not client_secrets:
                raise ValueError("Invalid client token")
            
            # Decode and verify the JWT
            decoded_jwt = decode_token(jwt_token)
            jwt_identity = decoded_jwt['identity']
            
            # Check if identities match
            if db.get_user_by_id(client_secrets["user_id"])["username"] == jwt_identity:
                user_sessions[jwt_identity] = request.sid
                join_room(jwt_identity) # Join a room specific to the user
                print(f'User {jwt_identity} connected with SID {request.sid}')
            else:
                raise ValueError("Token identities do not match")
        except Exception as e:
            print(f"Error with tokens {e}")
            return False # Disconnect
    else:
        print(1)
        return False # Disconnect
    
@socketio.on('disconnect')
def handle_disconnect():
    for user_identity, sid in user_sessions.items():
        if sid == request.sid:
            leave_room(user_identity)
            del user_sessions[user_identity]
            print(f"User {user_identity} disconnected")
            break

@socketio.on('notification_response')
def handle_notification_response(data):
    notification_id = data['id']
    user_response = data['response']

    # Process the response
    # For example, update the database or trigger another action based on the response
    #process_notification_response(notification_id, user_response)

#
# Section 7
# Real time functions
#
def server_side_sync(user_id, updated_data):
    identity = db.get_user_by_id(user_id)["username"]
    # Notify the specific user about the update
    socketio.emit("data_update", {"data": updated_data}, room=identity)
    
def notify_client(user_id, notification_data):
    # notification data should contain title, message and what type (question, info, error or warning)
    # question yes | no ; info ok ; error ok ; warning ignore | continue | cancel
    
    notification_id = str(uuid.uuid4())
    
    notification_data = {
        "title": "New Message",
        "message": "You have received a new message.",
        "type": "info",  # Could be "question", "info", "error", "warning"
        "actions": ["ok"],  # Could be ["yes", "no"], ["ignore", "continue", "cancel"]
    }
    
    identity = db.get_user_by_id(user_id)["username"]
    
    notification_data['id'] = notification_id
    socketio.emit("notification", {"data": notification_data}, room=identity)
    return notification_id

#
# Section 8
# Error handlers
#
@app.errorhandler(404)
def not_found(error):
    return render_template('site_not_found.html')
    #return response('Not found', status=404, error=True)

@app.errorhandler(400)
def bad_request(error):
    return response('Bad request', status=400, error=True)

@app.errorhandler(500)
def internal_error(error):
    return response('Internal server error', status=500, error=True)

if __name__ == "__main__":
    os.system("title " + f"{__program_name__} {__version__[:5]} for py{'.'.join([str(x) for x in __py_version__[0]])}-{'.'.join([str(x) for x in __py_version__[-1]])}")
    app.logger.info("Starting server ...")
    #ssl_context = ssl.create_default_context(ssl.Purpose.CLIENT_AUTH)
    #ssl_context.load_cert_chain('cert/localhost.pem', 'cert/localhost-key.pem')
    socketio.run(app, debug=True)#, ssl_context=ssl_context) # 'adhoc'
