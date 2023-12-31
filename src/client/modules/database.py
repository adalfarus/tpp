import sqlite3
from contextlib import closing
from datetime import datetime, timedelta
import requests
import json
from aplustools.utils.genpass import GeneratePasswords # Doesn't work for python 3.9

from .crypt import hash_password, decrypt, encrypt

class DatabaseManager:
    def __init__(self, db_path):
        self.db_path = db_path
        self.create_tables()

    def create_tables(self):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            # Create CurrentUser, Users, ClientSecrets, Account, etc. tables
            # Current User
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS CurrentUser (
                    id INTEGER PRIMARY KEY,
                    user_id INTEGER NOT NULL,
                    username TEXT NOT NULL,
                    email TEXT,
                    current_jwt TEXT NOT NULL,
                    current_jwt_time DATETIME NOT NULL,
                    FOREIGN KEY(user_id) REFERENCES Users(id)
                )
            ''')
            conn.commit()
            
            # Current user table triggers
            cursor.execute('''
                CREATE TRIGGER IF NOT EXISTS prevent_multiple_rows
                BEFORE INSERT ON CurrentUser
                WHEN (SELECT COUNT(*) FROM CurrentUser) >= 1
                BEGIN
                    SELECT RAISE(FAIL, 'Only one row is allowed in this table.');
                END;
            ''')
            cursor.execute('''
                CREATE TRIGGER IF NOT EXISTS prevent_row_deletion
                BEFORE DELETE ON CurrentUser
                FOR EACH ROW
                WHEN (old.id = 0)
                BEGIN
                    SELECT RAISE(FAIL, 'Deletion of this row is not allowed.');
                END;
            ''')
            # Insert into CurrentUser Table
            if not self.get_current_user():
                cursor.execute('''
                    INSERT INTO CurrentUser (id, user_id, username, email, current_jwt, current_jwt_time)
                    VALUES (?, ?, ?, ?, ?, ?)
                ''', (0, 0, "", "", "", datetime.now() - timedelta(days=1)))
            
            # Users Table # In the future get email from server
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS Users (
                    id INTEGER PRIMARY KEY,
                    username TEXT UNIQUE NOT NULL,
                    email TEXT UNIQUE,
                    password_hash TEXT NOT NULL,
                    salt TEXT NOT NULL,
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP
                )
            ''')

            # Client Secrets Table
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS ClientSecrets (
                    id INTEGER PRIMARY KEY,
                    user_id INTEGER,
                    token TEXT,
                    weak_shared_secret TEXT,
                    shared_secret TEXT,
                    secure_shared_secret TEXT,
                    FOREIGN KEY(user_id) REFERENCES Users(id)
                )
            ''')

            # Account Table
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS Accounts (
                    id INTEGER PRIMARY KEY,
                    user_id INTEGER,
                    account_type TEXT CHECK(account_type IN ('Student', 'Teacher', 'Employee')),
                    first_name TEXT,
                    last_name TEXT,
                    email TEXT,
                    phone TEXT,
                    address TEXT,
                    birth_date DATE,
                    gender TEXT,
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                    FOREIGN KEY(user_id) REFERENCES Users(id)
                )
            ''')
            
            # Student Details
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS StudentDetails (
                    account_id INTEGER PRIMARY KEY,
                    grade_level TEXT,
                    school_type TEXT,
                    school_name TEXT,
                    subjects TEXT,
                    cost_range TEXT,
                    gender_preference TEXT,
                    event_ids TEXT,
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                    FOREIGN KEY(account_id) REFERENCES Accounts(id)
                )
            ''')
            
            # Teacher Details
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS TeacherDetails (
                    account_id INTEGER PRIMARY KEY,
                    subjects TEXT,
                    grade_levels TEXT,
                    school_types TEXT,
                    gender_preference TEXT,
                    fee_range TEXT,
                    event_ids TEXT,
                    available_times TEXT,
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                    FOREIGN KEY(account_id) REFERENCES Accounts(id)
                )
            ''')
            
            # Employee Details
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS EmployeeDetails (
                    account_id INTEGER PRIMARY KEY,
                    rank TEXT,
                    department TEXT,
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                    FOREIGN KEY(account_id) REFERENCES Accounts(id)
                )
            ''')
            
            # Settings
            cursor.execute('''
                CREATE TABLE IF NOT EXISTS Settings (
                    account_id INTEGER,
                    setting_geometry TEXT,
                    setting_style TEXT CHECK(setting_style IN ('Classic', 'Normal')),
                    setting_theme TEXT CHECK(setting_theme IN ('Light', 'Dark')),
                    last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                    FOREIGN KEY (account_id) REFERENCES Accounts(id)
                );
            ''')
            
            conn.commit()
            
            # Insert a special entry for the unknown user with NULL values
            unknown_password = GeneratePasswords.generate_ratio_based_password_v1(length=16, letters_ratio=0.4, numbers_ratio=0.3, punctuations_ratio=0.3, unicode_ratio=0)
            password_hash, salt = hash_password(unknown_password)
            
            # Unknown User Entry
            if not self.get_user(0):
                cursor.execute('''
                    INSERT INTO Users (id, username, email, password_hash, salt)
                    VALUES (?, ?, ?, ?, ?)
                ''', (0, "None", "None", password_hash, salt))
            
            # Create unknown user account
            cursor.execute('''
                INSERT INTO Accounts (user_id, account_type, first_name, last_name, email)
                VALUES (?, 'Student', ?, ?, ?)
            ''', (0, None, None, None))
            
            # Trigger to prevent deletion of the unknown user's account
            cursor.execute('''
                CREATE TRIGGER IF NOT EXISTS prevent_unknown_user_deletion
                BEFORE DELETE ON Users
                FOR EACH ROW
                WHEN (old.id = 0)
                BEGIN
                    SELECT RAISE(FAIL, 'Deletion of the unknown user is not allowed.');
                END;
            ''')
            
    def register_client(self, email):
        response = requests.get("https://127.0.0.1:5000/register_client", params={"email": email}, verify=False)
        return response.json().get('data', '').get('token', '')
    
    def register_client_2(self, token, wss):
        response = requests.get("https://127.0.0.1:5000/get_shared_secret", params={"token": token}, verify=False)
        ss = decrypt(wss, response.json().get('data', '').get('shared_secret', ''))
        response = requests.get("https://127.0.0.1:5000/get_secure_shared_secret", params={"token": token}, verify=False)
        sss = decrypt(ss, response.json().get('data', '').get('secure_shared_secret', ''))
        return (ss, sss)
            
    # User registration
    def register_user(self, username, email, password, token, weak_shared_secret, shared_secret, secure_shared_secret):
        prepared_user_data = {"username": username, 
                     "email": email, 
                     "encrypted_password": encrypt(secure_shared_secret, password)}
        encrypted_data = json.dumps(prepared_user_data)
        encrypted_data = encrypt(secure_shared_secret, encrypted_data)
        response = requests.post("https://127.0.0.1:5000/register", params={"token": token}, json={"encrypted_data": encrypted_data}, verify=False)
        if response.status_code == 200:
            with closing(sqlite3.connect(self.db_path)) as conn, conn:
                password_hash, salt = hash_password(password)
                cursor = conn.cursor()
                cursor.execute('''
                    INSERT INTO Users (username, email, password_hash, salt) 
                    VALUES (?, ?, ?, ?)
                ''', (username, email, password_hash, salt))  # , token, shared_secret, secure_shared_secret
                user_id = cursor.lastrowid

                cursor.execute('''
                    INSERT INTO ClientSecrets (user_id, token, weak_shared_secret, shared_secret, secure_shared_secret) 
                    VALUES (?, ?, ?, ?, ?)
                ''', (user_id, token, weak_shared_secret, shared_secret, secure_shared_secret))
                return user_id

    def login(self, token, secure_shared_secret, username, password):
        encrypted_username = encrypt(secure_shared_secret, username)
        encrypted_password = encrypt(secure_shared_secret, password)    
        login_data = {
            'encrypted_username': encrypted_username,
            'encrypted_password': encrypted_password
        }
        response = requests.post("https://127.0.0.1:5000/login", params={"token": token}, json=login_data, verify=False)
        return response.json().get("data").get("access_token")

    # ClientSecrets CRUD Operations
    def insert_client_secret(self, user_id, token, weak_shared_secret, shared_secret, secure_shared_secret):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('''
                INSERT INTO ClientSecrets (user_id, token, weak_shared_secret, shared_secret, secure_shared_secret) 
                VALUES (?, ?, ?, ?, ?)
            ''', (user_id, token, weak_shared_secret, shared_secret, secure_shared_secret))

    # User CRUD Operations
    def insert_user(self, username, email, password_hash, salt):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('''
                INSERT INTO Users (username, email, password_hash, salt) 
                VALUES (?, ?, ?, ?)
            ''', (username, email, password_hash, salt))
            return cursor.lastrowid

    def get_user(self, user_id):
        with closing(sqlite3.connect(self.db_path)) as conn:
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM Users WHERE id = ?', (user_id,))
            return cursor.fetchone()

    def update_user(self, user_id, **kwargs):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            columns = ', '.join([f"{k} = ?" for k in kwargs])
            values = list(kwargs.values()) + [user_id]
            cursor.execute(f'UPDATE Users SET {columns} WHERE id = ?', values)

    def delete_user(self, user_id):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('DELETE FROM Users WHERE id = ?', (user_id,))

    def get_user_by_username(self, username):
        with closing(sqlite3.connect(self.db_path)) as conn:
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM Users WHERE username = ?', (username,))
            return cursor.fetchone()

    def get_client_secret(self, user_id):
        with closing(sqlite3.connect(self.db_path)) as conn:
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM ClientSecrets WHERE user_id = ?', (user_id,))
            return cursor.fetchone()

    def update_client_secret(self, user_id, **kwargs):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            columns = ', '.join([f"{k} = ?" for k in kwargs])
            values = list(kwargs.values()) + [user_id]
            cursor.execute(f'UPDATE ClientSecrets SET {columns} WHERE user_id = ?', values)

    def delete_client_secret(self, user_id):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('DELETE FROM ClientSecrets WHERE user_id = ?', (user_id,))

    # Account creation
    def create_account(self, user_id, token, secure_shared_secret, jwt_token, account_data):
        data = json.dumps(account_data)
        encrypted_data = encrypt(secure_shared_secret, data)
        response = requests.post("https://127.0.0.1:5000/create_account", 
                                params={"token": token},
                                headers={"Authorization": f"Bearer {jwt_token}"},
                                json={"encrypted_data": encrypted_data}, verify=False)
        if response.status_code == 200:
            with closing(sqlite3.connect(self.db_path)) as conn, conn:
                cursor = conn.cursor()
                cursor.execute('''
                    INSERT INTO Accounts (user_id, account_type, first_name, last_name, email, phone, address, birth_date, gender, last_modified)
                    VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
                ''', (user_id, account_data["account_type"], account_data["first_name"], account_data["last_name"],
                    account_data["email"], account_data["phone"], account_data["address"], account_data["birth_date"],
                    account_data["gender"], datetime.utcnow()))

    # Low-level user registration
    def low_register_client(self, token, secure_shared_secret, user_data):
        encrypted_data = json.dumps(user_data)
        encrypted_data = encrypt(secure_shared_secret, encrypted_data)
        response = requests.post("https://127.0.0.1:5000/low_register", params={"token": token}, json={"encrypted_data": encrypted_data}, verify=False)
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('''
                INSERT INTO Users (username, email, password_hash, salt) 
                VALUES (?, ?, ?, ?)
            ''', (user_data["username"], user_data["email"], user_data["encrypted_password"], 'salt'))  # Replace 'salt' with actual salt
            return cursor.lastrowid
            
    def sync(self):
        pass
    
    def check_for_user_updates(self):
        pass
    
    def search(self):
        pass

    def get_student_by_user_id(self, user_id):
        with closing(sqlite3.connect(self.db_path)) as conn:
            cursor = conn.cursor()
            # Assuming there is a relation between Account and StudentDetails
            cursor.execute('''
                SELECT StudentDetails.* 
                FROM StudentDetails
                JOIN Accounts ON StudentDetails.account_id = Accounts.id
                WHERE Accounts.user_id = ?
            ''', (user_id,))
            student_details = cursor.fetchone()
            return student_details if student_details else None

    def find_matches_public(self, student_data):
        url = "http://127.0.0.1:5000/find_matches_public"  # Adjust the URL as needed

        # Post student data to the server route and get the response
        response = requests.post(url, json=student_data)
        if response.status_code != 200:
            raise Exception(f"Error in server response: {response.status_code}")

        result = response.json().get('results', [])

        # Populate the list element with results
        populated_list = []
        for row in result:
            # Assuming row contains necessary teacher data
            populated_list.append(row)

        return populated_list

    def update_current_user(self, user_id, username, email, current_jwt, current_jwt_time):
        with closing(sqlite3.connect(self.db_path)) as conn, conn:
            cursor = conn.cursor()
            cursor.execute('UPDATE CurrentUser SET user_id = ?, username = ?, email = ?, current_jwt = ?, current_jwt_time = ? WHERE id = ?', 
                           (user_id, username, email, current_jwt, current_jwt_time, 0))

    def get_current_user(self):
        with closing(sqlite3.connect(self.db_path)) as conn:
            cursor = conn.cursor()
            cursor.execute('SELECT * FROM CurrentUser WHERE id = ?', (0,))
            return cursor.fetchone()
        