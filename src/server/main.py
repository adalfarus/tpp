#!/usr/bin/env python
from flask import Flask, request, jsonify, render_template, send_from_directory, g, redirect
from flask_jwt_extended import JWTManager, create_access_token, jwt_required, get_jwt_identity, get_jwt, decode_token
from aplustools.io import environment as env
from typing import Dict
import datetime
import sqlite3
import secrets
import uuid
import json
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

# Initialize the database
init_db('application.db', app)
db = Database('application.db', app)

# Local Storage
client_secrets: Dict[str, list] = {} # Dictionary to store client tokens and their corresponding secrets
file_indices: Dict[int, list] = {19246192: ['./', 'application.db']} # Dictionary to store file paths

#
# Section 1
# Standardized ways of doing stuff functions
#
def response(message: str, status: int=200, error: bool=False, data: dict=None) -> str:
    payload = {'status': 'error' if error else 'success', 'message': message}
    if data is not None: # Move encryption to here and make another function for receiving responses and testing the standard stuff like tokens.
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

@app.route('/auth/callback')
def auth_callback():
    code = request.args.get("code")
    print(f"Received auth code {code}")
    return redirect('/auth')

@app.route('/auth')
def auth():
    return render_template('auth_done.html')

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
@app.route('/low_register', methods=['GET', 'POST'])
def low_register():
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
            
            user = db.get_user_by_username(username)
            user_id = user.get("id")
            
            print("SAAAAAAAAAAAAAAAAALT", user.get("salt"), password)
            hashed_password, _ = hash_password(password, user.get("salt"))
            
            if hashed_password != user.get("password_hash"):
                return response("Username and password do not match", 400, True)
            
            try:
                # Store client data in the database
                db.create_client_secrets(user_id, token, *client_secrets.get(token, [None, None, None]))
                client_secrets[token] = "USED"
                return response("Low-Registered client", 200)
            except Exception as e:
                return response(f"Unknown error {e}", 400, True)
        else:
            return response("Invalid token", 400, True)
    else:
        return render_template('site_not_found.html')

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

# JWT protected registration route
@app.route('/create_account', methods=['GET', 'POST'])
@jwt_required()
def create_account():
    if request.method == "POST":
        # Retrieve the token from the client request
        token = request.args.get('token')
        current_user_identity = get_jwt_identity()
        
        client_secret_data = db.get_client_secrets_by_token(token)
        
        user_id = client_secret_data.get("user_id")
        
        user = db.get_user_by_id(user_id)
        if not user["username"] == current_user_identity:
            return response("Token identities do not match", 400, True)
        secure_shared_secret = client_secret_data.get("secure_shared_secret")
        encrypted_data = request.json.get("encrypted_data")
        
        decrypted_data = decrypt(secure_shared_secret, encrypted_data)
        
        data = json.loads(decrypted_data)
        
        data["birth_date"] = datetime.datetime.strptime(data["birth_date"], "%Y.%m.%d").date()
        
        try:
            db.create_account(user_id, **data)
        except sqlite3.IntegrityError as e:
            # Check for unique constraint failure
            if "UNIQUE constraint failed: Accounts.user_id" in str(e):
                return response("Account already exists", 400, True)
            elif "UNIQUE constraint failed: StudentDetails.account_id" in str(e):
                return response("Student Details already exists", 400, True)
            elif "UNIQUE constraint failed: TeacherDetails.account_id" in str(e):
                return response("Teacher Details already exists", 400, True)
            elif "UNIQUE constraint failed: EmployeeDetails.account_id" in str(e):
                return response("Employee Details already exists", 400, True)
            else:
                # Handle other integrity errors
                return response(f"Database error: {str(e)}", 500, True)
        
        return response("Created account", 200)
    else:
        return render_template('site_not_found.html')

#
# Small section 4.5 unprotected routes
#
def teacher_points(id): # calculating tp
    td = db.get_teacher_details(id)
    if not td["students"]: # if teacher has no students yet
        td["tp"] = 0
    else:
        td["tp"] = td["average_review"] / td["students"]

@app.route('/find_matches_public', methods=['GET', 'POST'])
def find_matches_public(): # For the try_it_out site
    if request.method == "POST":
        data = request.json
        # Implement matching logic
        sData = json.loads(data) #student data
        tData = db.get_all_teacher_details() #list of teachers with data
        result = []
        for rowT in tData: # going through all teachers
            rowT = db.get_account_info(rowT["account_id"]) + rowT
            if rowT["gender"] == sData["gender"] or not sData["gender"] and rowT["status"] == sData["status"] or sData["status"] == "other" #checking if conditions are true
            and any([x in rowT["subjects"] for x in sData["subjects"]]) and sData["class"] in rowT["class"] 
            and range([int(x) for x in sData["cost_range"].split("-")]).stop >= range([int(x) for x in rowT["fee_range"].split("-")]).start
            and range([int(x) for x in rowT["fee_range"].split("-")]).stop >= range([int(x) for x in sData["cost_range"].split("-")]).start:
                pos = 0
                if not len(result): # checking if teachers are in list and adding if not
                    result.append([rowT,rowT["tp"]])
                else:
                    while rowT["tp"] < result[pos][1] and pos != len(result)-1: # sorting teacher in list by tp
                        pos += 1
                    result.insert([pos][rowT,rowT["tp"]])
        return response("Searched", 200, False, {"results": result})
    else:
        return render_template('site_not_found.html')

#
# Section 5
# JWT protected routes
# 
@jwt.token_in_blocklist_loader # Automatically check if token has been blocked or revoked
def check_if_token_is_revoked(jwt_header, jwt_payload: dict):
    jti = jwt_payload["jti"]
    return db.jti_revoked(jti)

@app.route('/revoke_token')
@jwt_required()
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
# "Web socket" routes
#
@app.route('/sync', methods=['GET', 'POST'])
def sync():
    if request.method == "POST":
        token = request.args.get('token')
        current_user_identity = get_jwt_identity()
        
        client_secrets = db.get_client_secrets_by_token(token)
        
        user_id = client_secrets.get("user_id")
        
        user = db.get_user_by_id(user_id)
        if not user["username"] == current_user_identity:
            return response("Token identities do not match", 400, True)
        secure_shared_secret = client_secrets.get("secure_shared_secret")
        encrypted_data = response.json
        decrypted_data = decrypt(secure_shared_secret, encrypted_data)
        data = json.loads(decrypted_data)
        
        account_last_modified, account_hash = data["account"]
        details_last_modified, details_hash = data["details"]
        settings_last_modified, settings_hash = data["settings"]
        
        response_data: Dict[str, dict] = {}
        
        # Look if all are the same as the current data, if not return the ones that don't match
        account = db.get_account_by_user_id(user_id)
        if account_last_modified != account.get("last_modified") or account_hash != account_hash: # Didn't implement local account_hashing yet
            response_data["account"] = account
        
        account_type = account.get("account_type")
        account_id = account.get("id")
        if account_type == "Student":
            details = db.get_student_details(account_id)
        elif account_type == "Teacher":
            details = db.get_all_teacher_details(account_id)
        elif account_type == "Employee":
            details = db.get_all_employee_details(account_id)
        else:
            pass # Not possible due to check in database
            
        if details_last_modified != details.get("last_modified") or details_hash != details_hash:
            response_data["details"] = details
            
        settings = db.get_settings(account_id)
        if settings_last_modified != settings.get("last_modified") or settings_hash != settings_hash:
            response_data["settings"] = settings
        
        return response("Sync successful", 200, False, response_data)
    else:
        return render_template('site_not_found.html')

@app.route('/check_for_user_updates', methods=['GET', 'POST'])
@jwt_required()
def check_for_user_updates():
    if request.method == "POST":
        token = request.args.get('token')
        current_user_identity = get_jwt_identity()
        
        client_secrets = db.get_client_secrets_by_token(token)
        
        user_id = client_secrets.get("user_id")
        
        user = db.get_user_by_id(user_id)
        if not user["username"] == current_user_identity:
            return response("Token identities do not match", 400, True)
        secure_shared_secret = client_secrets.get("secure_shared_secret")

        # Check for new notifications
        notifications = db.get_unseen_notifications(user_id)
        return response("Checked", 200, False, {"notifications": notifications})
    else:
        return render_template('site_not_found.html')

#
# Section 7
# "Real time" functions
#
def notify_client(user_id, notification_data):
    notification_id = db.create_notification(
        user_id, 
        notification_data["title"], 
        notification_data["message"], 
        notification_data["type"], 
        notification_data.get("actions", ["ok"])
    )
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
    app.run(debug=True, ssl_context='adhoc')
