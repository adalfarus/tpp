import requests
import base64
import hashlib
from cryptography.fernet import Fernet
import json

def pad_key(key):
    sha256 = hashlib.sha256()
    sha256.update(key.encode())
    return base64.urlsafe_b64encode(sha256.digest())

def encrypt(key, plain):
    #if utf8len(key) != 32:
    key = pad_key(key)
    cipher_suite = Fernet(key)
    encrypted_plain = cipher_suite.encrypt(plain.encode())
    return encrypted_plain.decode()

def decrypt(key, encrypt):
    key = pad_key(key)
    cipher_suite = Fernet(key)
    decrypted_plain = cipher_suite.decrypt(encrypt.encode())
    return decrypted_plain.decode()

# Request a token from the server for client registration
def register_client(base_url, email):
    response = requests.get(f"{base_url}/register_client", params={"email": email}, verify=False)
    return response.json()

# Request the shared secret using the token
def get_shared_secret(base_url, token):
    response = requests.get(f"{base_url}/get_shared_secret", params={"token": token}, verify=False)
    return response.json()

# Request the secure shared secret using the token
def get_secure_shared_secret(base_url, token):
    response = requests.get(f"{base_url}/get_secure_shared_secret", params={"token": token}, verify=False)
    return response.json()

def register_user(base_url, token, secure_shared_secret, user_data):
    encrypted_data = json.dumps(user_data)
    encrypted_data = encrypt(secure_shared_secret, encrypted_data)
    response = requests.post(f"{base_url}/register", params={"token": token}, json={"encrypted_data": encrypted_data}, verify=False)
    return response.json()

def login_user(base_url, token, secure_shared_secret, username, password):
    encrypted_username = encrypt(secure_shared_secret, username)
    encrypted_password = encrypt(secure_shared_secret, password)

    login_data = {
        'encrypted_username': encrypted_username,
        'encrypted_password': encrypted_password
    }
    print(login_data)

    response = requests.post(f"{base_url}/login", params={"token": token}, json=login_data, verify=False)
    return response.json()

def create_account(base_url, token, secure_shared_secret, jwt_token, account_data):
    data = json.dumps(account_data)
    encrypted_data = encrypt(secure_shared_secret, data)

    response = requests.post(f"{base_url}/create_account", 
                             params={"token": token},
                             headers={"Authorization": f"Bearer {jwt_token}"},
                             json={"encrypted_data": encrypted_data}, verify=False)
    return response.json()

def low_register_client(base_url, token, secure_shared_secret, user_data):
    encrypted_data = json.dumps(user_data)
    encrypted_data = encrypt(secure_shared_secret, encrypted_data)
    response = requests.post(f"{base_url}/low_register", params={"token": token}, json={"encrypted_data": encrypted_data}, verify=False)
    return response.json()

base_url = 'https://127.0.0.1:5000'
# Sample user data
user_data = {
    "username": "test_users?2",
    "email": "test_users?2@example.com",
    "password": "password123"
}

# Register client and get token
registration_info = register_client(base_url, user_data["email"])
registration_data = registration_info.get('data', '')
token = registration_data.get('token', '')
print("Token received:", token)

wss = input("Please input the received WSS: ")

# Get shared secret
shared_secret_info = get_shared_secret(base_url, token)
shared_secret_data = shared_secret_info.get('data', '')
shared_secret = shared_secret_data.get('shared_secret', '')
decrypted_shared_secret = decrypt(wss, shared_secret)
print("Shared Secret:", decrypted_shared_secret)

# Get secure shared secret
secure_shared_secret_info = get_secure_shared_secret(base_url, token)
secure_shared_secret_data = secure_shared_secret_info.get('data', '')
secure_shared_secret = secure_shared_secret_data.get('secure_shared_secret', '')
decrypted_secure_shared_secret = decrypt(decrypted_shared_secret, secure_shared_secret)
print("Secure Shared Secret:", decrypted_secure_shared_secret)

print("\n")

prepared_user_data = user_data
prepared_user_data["encrypted_password"] = encrypt(decrypted_secure_shared_secret, user_data["password"])

print("Beginning registration ...")
# Encrypt and send user data for registration
registration_response = register_user(base_url, token, decrypted_secure_shared_secret, user_data)
print("Registration Response:", registration_response)

# Low register client
#low_reg_resp = low_register_client(base_url, token, decrypted_secure_shared_secret, prepared_user_data)
#print(low_reg_resp)

# Use the login function in your test client
print("\nAttempting login ...")
login_response = login_user(base_url, token, decrypted_secure_shared_secret, user_data["username"], user_data["password"])
print("Login Response:", login_response)

jwt_token = login_response.get('data').get('access_token')

# Sample account data
account_data = {
    "account_type": "Student",  # Could be 'Teacher' or 'Employee'
    "first_name": "John",
    "last_name": "Doe",
    "email": "johndoe@example.com",
    "phone": "1234567890",
    "address": "123 Main St",
    "birth_date": "2000.01.01",  # Format: "YYYY.MM.DD"
    "gender": "Male",
    "detail_info": {
        "grade_level": 6, 
        "school_type": "cool", 
        "school_name": "Goethe", 
        "subjects": json.dumps(["Math", "English"]), 
        "cost_range": "101-222", 
        "gender_preference": None
    }
}

print("\nCreating account ...")
create_account_response = create_account(base_url, token, decrypted_secure_shared_secret, jwt_token, account_data)
print("Create Account Response:", create_account_response)
