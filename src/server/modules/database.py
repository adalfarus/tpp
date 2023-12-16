from functools import wraps
from flask import g
from typing import Union, List, Tuple
import sqlite3
import datetime
import json
import uuid

def get_db(db_path: str, app):
    """Makes and returns a new database connection using the g object with the given flask app context"""
    with app.app_context():
        if 'db' not in g:
            g.db = sqlite3.connect(db_path)
            g.db.row_factory = sqlite3.Row
        return g.db

def init_db(db_path: str, app):
    def create_users_table(cursor):
        """Create the Users table for authentication."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS Users (
                id INTEGER PRIMARY KEY,
                username TEXT UNIQUE NOT NULL,
                email TEXT UNIQUE NOT NULL,
                password_hash TEXT NOT NULL,
                salt TEXT NOT NULL,
                account_id INTEGER,
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (account_id) REFERENCES Accounts(id)
            );
        """)
        
    def create_client_secrets_table(cursor):
        """Create the ClientSecrets table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS ClientSecrets (
                id INTEGER PRIMARY KEY,
                user_id INTEGER,
                token TEXT,
                weak_shared_secret TEXT,
                shared_secret TEXT,
                secure_shared_secret TEXT,
                last_accessed DATETIME DEFAULT CURRENT_TIMESTAMP,
                created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES Users(id)
            );
        """)
        cursor.execute("""
            CREATE INDEX IF NOT EXISTS idx_token ON ClientSecrets(token);
        """)
    
    def create_accounts_table(cursor):
        """Create the Accounts table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS Accounts (
                id INTEGER PRIMARY KEY,
                user_id INTEGER,
                account_type TEXT CHECK(account_type IN ('Student', 'Teacher', 'Employee')), -- Values: 'Student', 'Teacher', 'Employee'
                first_name TEXT,
                last_name TEXT,
                email TEXT,
                phone TEXT,
                address TEXT,
                birth_date DATETIME,
                gender TEXT,
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES Users(id)
            );
        """)
        cursor.execute("""
            CREATE INDEX IF NOT EXISTS idx_user_id ON Accounts(user_id);
        """)

    def create_student_details_table(cursor):
        """Create the StudentDetails table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS StudentDetails (
                account_id INTEGER,
                grade_level TEXT,
                school_type TEXT,
                school_name TEXT,
                subjects TEXT,
                cost_range TEXT,
                gender_preference TEXT,
                event_ids TEXT, -- JSON or comma-separated list of Event IDs
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (account_id) REFERENCES Accounts(id)
            );
        """)

    def create_teacher_details_table(cursor):
        """Create the TeacherDetails table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS TeacherDetails (
                account_id INTEGER,
                subjects TEXT,
                grade_levels TEXT,
                school_types TEXT,
                gender_preference TEXT,
                fee_range TEXT,
                registration_fee_paid BOOLEAN,
                last_payment_date DATETIME,
                event_ids TEXT, -- JSON or comma-separated list of Event IDs
                average_review REAL, -- Average rating
                available_times TEXT,
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (account_id) REFERENCES Accounts(id)
            );
        """)

    def create_employee_details_table(cursor):
        """Create the EmployeeDetails table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS EmployeeDetails (
                account_id INTEGER,
                rank TEXT,
                department TEXT,
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (account_id) REFERENCES Accounts(id)
            );
        """)

    def create_events_table(cursor):
        """Create the Events table.""" # Events are immutable
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS Events (
                id INTEGER PRIMARY KEY,
                teacher_id INTEGER,
                student_id INTEGER,
                event_type TEXT,
                event_details TEXT,
                event_date DATETIME,
                FOREIGN KEY (teacher_id) REFERENCES TeacherDetails(account_id),
                FOREIGN KEY (student_id) REFERENCES StudentDetails(account_id)
            );
        """) # Should reference teacher and student by account id

    def create_settings_table(cursor):
        """Create the Settings table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS Settings (
                account_id INTEGER,
                setting_geometry TEXT,
                setting_style TEXT CHECK(setting_style IN ('Classic', 'Normal')),
                last_modified DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (account_id) REFERENCES Accounts(id)
            );
        """)
    
    def create_jwt_storage_table(cursor):
        """Create the JWTStorage table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS JWTStorage (
                jti TEXT PRIMARY KEY,
                user_id INTEGER,
                revoked BOOLEAN,
                expires_at DATETIME,
                FOREIGN KEY (user_id) REFERENCES Users(id)
            );
        """) # Remove JWTs that are expired
    
    def create_notifications_table(cursor):
        """Create the Notifications table."""
        cursor.execute("""
            CREATE TABLE IF NOT EXISTS Notifications (
                id TEXT PRIMARY KEY,
                user_id INTEGER,
                title TEXT,
                message TEXT,
                type TEXT CHECK(type IN ('question', 'info', 'error', 'warning')),
                actions TEXT,  -- JSON array of actions like ["ok"], ["yes", "no"]
                seen BOOLEAN DEFAULT False,
                created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
                FOREIGN KEY (user_id) REFERENCES Users(id)
            );
        """)
    """Initialize the database and create tables."""
    try:
        db = get_db(db_path, app)
        cursor = db.cursor()

        # Create tables if they don't exist
        create_users_table(cursor)
        create_client_secrets_table(cursor)
        create_accounts_table(cursor)
        create_student_details_table(cursor)
        create_teacher_details_table(cursor)
        create_employee_details_table(cursor)
        create_events_table(cursor)
        create_settings_table(cursor)
        create_jwt_storage_table(cursor)
        create_notifications_table(cursor)
        db.commit()

        app.logger.info("Database initialized")
    except sqlite3.Error as e:
        app.logger.info(f"Database initialization failed: {e}")

def with_db_connection(f):
    """Middle man between get_db and the Database instance. 
    Removes a lot of boilerplate from the Database methods, 
    by automatically connecting to the database and passing it as an argument"""
    @wraps(f)
    def decorated_function(*args, **kwargs):
        instance = args[0]
        db_path = instance.db_path
        app = instance.app
        
        args = args[1:] # Remove the first argument (self)
        
        db = get_db(db_path, app)  # Ensure a fresh connection for each request
        db.row_factory = sqlite3.Row # Set row factory to return rows as dictionaries
        
        try:
            return f(instance, db, *args, **kwargs)
        except Exception as e:
            raise e
    return decorated_function

class Database:
    def __init__(self, db_path: str, app):
        """Create the attributes the Decorator will use."""
        self.db_path = db_path
        self.app = app

    def _to_dict(self, row: sqlite3.Row) -> Union[dict, None]:
        """Converts an sqlite3.Row object into a dict for easy access."""
        return dict(row) if row else None
    
    def _to_dicts(self, rows: Union[List[sqlite3.Row], Tuple[sqlite3.Row]]) -> Union[dict, None]:
        """Converts a list of sqlite3.Row objects into a list of dicts for easy access."""
        if isinstance(rows, list, tuple):
            return [dict(row) for row in rows] if rows else None
        return None
    
    @with_db_connection
    def get_account_info(self, db, account_id: int) -> dict:
        """Gets the account info of a given id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Accounts WHERE id = ?", (account_id,))
        return self._to_dict(cursor.fetchone())

    @with_db_connection
    def get_account_by_user_id(self, db, user_id: int) -> dict:
        """Gets account information by user_id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Accounts WHERE user_id = ?", (user_id,))
        return self._to_dict(cursor.fetchone())

    @with_db_connection
    def update_account_info(self, db, account_id: int, account_info: dict):
        """Updates the account info of a given id."""
        cursor = db.cursor()
        account_info['last_modified'] = datetime.datetime.now()
        columns = list(account_info.keys())
        values = list(account_info.values())
        values.append(account_id)
        query = f"UPDATE Accounts SET {', '.join([f'{col} = ?' for col in columns])} WHERE id = ?"
        cursor.execute(query, values)
        db.commit()
        
    @with_db_connection
    def get_all_accounts(self, db) -> List[dict]:
        """Gets all accounts in the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Accounts")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def create_user(self, db, username: str, email: str, password_hash: str, salt: str) -> int:
        """Creates a new user for authentication."""
        cursor = db.cursor()
        cursor.execute("INSERT INTO Users (username, email, password_hash, salt, last_modified) VALUES (?, ?, ?, ?, ?)",
                       (username, email, password_hash, salt, datetime.datetime.now()))
        db.commit()
        return cursor.lastrowid

    @with_db_connection
    def get_user_by_username(self, db, username: str) -> dict:
        """Gets a user by username."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Users WHERE username = ?", (username,))
        return self._to_dict(cursor.fetchone())

    @with_db_connection
    def get_user_by_id(self, db, user_id: int) -> dict:
        """Gets a user by id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Users WHERE id = ?", (user_id,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_users(self, db) -> List[dict]:
        """Gets all users in the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Users")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def create_client_secrets(self, db, user_id: int, token: str, 
                              weak_secret: str, shared_secret: str, 
                              secure_shared_secret: str):
        """Creates a client secrets row."""
        cursor = db.cursor()
        cursor.execute("""
            INSERT INTO ClientSecrets (user_id, token, weak_shared_secret, shared_secret, secure_shared_secret, last_accessed, created_at) 
            VALUES (?, ?, ?, ?, ?)
        """, (user_id, token, weak_secret, shared_secret, secure_shared_secret, datetime.datetime.now(), datetime.datetime.now()))
        db.commit()
        
    @with_db_connection
    def update_client_secrets_timestamp(self, db, token: str):
        """Update the last_accessed timestamp for a given client token."""
        cursor = db.cursor()
        cursor.execute("UPDATE ClientSecrets SET last_accessed = ? WHERE token = ?", (datetime.datetime.now(), token))
        db.commit()

    @with_db_connection
    def get_client_secrets_by_token(self, db, token: str) -> dict:
        """Gets a client secrets row by token"""
        self.update_client_secrets_timestamp(token)
        cursor = db.cursor()
        cursor.execute("SELECT * FROM ClientSecrets WHERE token = ?", (token,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_client_secrets(self, db) -> List[dict]:
        """Gets all client secrets from the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM ClientSecrets")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def create_account(self, db, user_id: int, account_type: str, first_name: str, last_name: str, 
                       email: str, phone: str, address: str, birth_date: datetime.datetime, gender: str, 
                       detail_info: dict) -> int:
        # Insert into Accounts table
        cursor = db.cursor()
        cursor.execute(f"INSERT INTO Accounts (user_id, account_type, first_name, last_name, email, phone, address, birth_date, gender, last_modified) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)", 
                       (user_id, account_type, first_name, last_name, email, phone, address, birth_date, gender, datetime.datetime.now()))
        account_id = cursor.lastrowid
        
        # Insert into specific details table
        detail_columns = list(detail_info.keys())
        detail_values = [account_id] + detail_info.values()
        if account_type.title() == 'Student':
            cursor.execute(f"INSERT INTO StudentDetails (account_id, {', '.join(detail_columns)}, last_modified) VALUES (?, {', '.join(['?' for _ in detail_columns])}, ?)", detail_values + [datetime.datetime.now()])
        elif account_type.title() == 'Teacher':
            cursor.execute(f"INSERT INTO TeacherDetails (account_id, {', '.join(detail_columns)}, last_modified) VALUES (?, {', '.join(['?' for _ in detail_columns])}, ?)", detail_values + [datetime.datetime.now()])
        elif account_type.title() == 'Employee':
            cursor.execute(f"INSERT INTO EmployeeDetails (account_id, {', '.join(detail_columns)}, last_modified) VALUES (?, {', '.join(['?' for _ in detail_columns])}, ?)", detail_values + [datetime.datetime.now()])
        else:
            pass # Runs into an error when checking account type in account table
        
        db.commit()
        return account_id

    @with_db_connection
    def update_student_details(self, db, account_id: int, grade_level: str, school_type: str, subjects: str, cost_range: str, gender_preference: str, event_ids: str):
        """Update a student details row by a given account id."""
        cursor = db.cursor()
        cursor.execute("UPDATE Accounts SET last_modified = ? WHERE id = ?", (datetime.datetime.now(), account_id))
        cursor.execute("""UPDATE StudentDetails SET grade_level = ?, school_type = ?, subjects = ?, cost_range = ?, gender_preference = ?, event_ids = ?, last_modified = ? 
                       WHERE account_id = ?""", 
                       (grade_level, school_type, subjects, cost_range, gender_preference, event_ids, datetime.datetime.now(), account_id))
        db.commit()

    # Additional methods for student, teacher, and employee details
    @with_db_connection
    def get_student_details(self, db, account_id: int) -> dict:
        """Gets the student details by account id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM StudentDetails WHERE account_id = ?", (account_id,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_student_details(self, db) -> List[dict]:
        """Gets all student details from the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM StudentDetails")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def update_teacher_details(self, db, account_id: int, subjects: str, grade_levels: str, school_types: str, gender_preference: str, fee_range: str, registration_fee_paid: bool, 
                               last_payment_date: datetime.datetime, event_ids: str, average_review: float, available_times: str):
        """Update a teacher details row by a given account id."""
        cursor = db.cursor()
        cursor.execute("UPDATE Accounts SET last_modified = ? WHERE id = ?", (datetime.datetime.now(), account_id))
        cursor.execute("""UPDATE TeacherDetails SET subjects = ?, grade_levels = ?, school_types = ?, gender_preference = ?, fee_range = ?, registration_fee_paid = ?, 
                       last_payment_date = ?, event_ids = ?, average_review = ?, available_times = ?, last_modified = ? WHERE account_id = ?""", 
                       (subjects, grade_levels, school_types, gender_preference, fee_range, registration_fee_paid, last_payment_date, event_ids, 
                        average_review, available_times, datetime.datetime.now(), account_id))
        db.commit()

    @with_db_connection
    def get_teacher_details(self, db, account_id: int) -> dict:
        """Gets teacher details by account id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM TeacherDetails WHERE account_id = ?", (account_id,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_teacher_details(self, db) -> List[dict]:
        """Gets all teacher details in the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM TeacherDetails")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def add_event_id(self, db, account_id: int, event_id: int, account_type: str):
        """Adds an event ID to the event_ids list of a teacher or student."""
        cursor = db.cursor()
        if account_type == 'Teacher':
            table_name = 'TeacherDetails'
        elif account_type == 'Student':
            table_name = 'StudentDetails'
        else:
            raise ValueError("Invalid account type")

        cursor.execute(f"SELECT event_ids FROM {table_name} WHERE account_id = ?", (account_id,))
        event_ids = cursor.fetchone()
        if event_ids:
            event_ids = json.loads(event_ids[0])
        else:
            event_ids = []

        if event_id not in event_ids:
            event_ids.append(event_id)
            updated_event_ids = json.dumps(event_ids)
            cursor.execute(f"UPDATE {table_name} SET event_ids = ? WHERE account_id = ?", 
                        (updated_event_ids, account_id))
            db.commit()
            
    @with_db_connection
    def remove_event_id(self, db, account_id: int, event_id: int, account_type: str):
        """Removes an event ID from the event_ids list of a teacher or student."""
        cursor = db.cursor()
        if account_type == 'Teacher':
            table_name = 'TeacherDetails'
        elif account_type == 'Student':
            table_name = 'StudentDetails'
        else:
            raise ValueError("Invalid account type")

        cursor.execute(f"SELECT event_ids FROM {table_name} WHERE account_id = ?", (account_id,))
        event_ids = cursor.fetchone()
        if event_ids:
            event_ids = json.loads(event_ids[0])
            if event_id in event_ids:
                event_ids.remove(event_id)
                updated_event_ids = json.dumps(event_ids)
                cursor.execute(f"UPDATE {table_name} SET event_ids = ? WHERE account_id = ?", 
                            (updated_event_ids, account_id))
                db.commit()

    @with_db_connection
    def update_employee_details(self, db, account_id: int, rank: str, department: str):
        """Update a employee details row by a given account id."""
        cursor = db.cursor()
        cursor.execute("UPDATE Accounts SET last_modified = ? WHERE id = ?", (datetime.datetime.now(), account_id))
        cursor.execute("UPDATE EmployeeDetails SET rank = ?, department = ?, last_modified = ? WHERE account_id = ?", 
                       (rank, department, datetime.datetime.now(), account_id))
        db.commit()

    @with_db_connection
    def get_employee_details(self, db, account_id: int) -> dict:
        """Gets employee details by account id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM EmployeeDetails WHERE account_id = ?", (account_id,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_employee_details(self, db) -> List[dict]:
        """Gets all employee details in the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM EmployeeDetails")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def get_event_info(self, db, event_id: int) -> dict:
        """Gets event info by id."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Events WHERE id = ?", (event_id,))
        return self._to_dict(cursor.fetchone())
    
    @with_db_connection
    def get_all_events(self, db) -> List[dict]:
        """Gets all events in the database."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Events")
        return self._to_dicts(cursor.fetchall())

    @with_db_connection
    def delete_event(self, db, event_id: int):
        """Deletes an event by id."""
        event = self.get_event_info(event_id)
        
        if event:
            student_id = event.get("student_id")
            self.remove_event_id(student_id, event_id, "Student")
            teacher_id = event.get("teacher_id")
            self.remove_event_id(teacher_id, event_id, "Teacher")
            
            cursor = db.cursor()
            cursor.execute("DELETE FROM Events WHERE id = ?", (event_id,))
            db.commit()

    @with_db_connection
    def create_event(self, db, teacher_id: int, student_id: int, event_type: str, event_details: str, event_date: str):
        """Creates a new event."""
        cursor = db.cursor()
        cursor.execute("""
            INSERT INTO Events (teacher_id, student_id, event_type, event_details, event_date) 
            VALUES (?, ?, ?, ?, ?)
        """, (teacher_id, student_id, event_type, event_details, datetime.datetime.strptime(event_date, "%Y-%m-%d")))
        db.commit()
        
        event_id = cursor.lastrowid
        self.add_event_id(teacher_id, event_id)
        self.add_event_id(student_id, event_id)
        return event_id

    @with_db_connection
    def update_event_info(self, db, event_id: int, event_info: dict):
        """Updates an event by deleting the old event and creating a new one."""
        self.delete_event(db, event_id)
        return self.create_event(db, **event_info)
        # Note: event_info should contain keys 'teacher_id', 'student_id', 'event_type', 'event_details', and 'event_date' with corresponding values.
        
    @with_db_connection
    def get_settings(self, db, account_id: int) -> dict:
        """Get settings for a specific account."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Settings WHERE account_id = ?", (account_id,))
        return self._to_dict(cursor.fetchone())

    @with_db_connection
    def update_settings(self, db, account_id: int, geometry: str, style: str):
        """Update settings for a specific account."""
        cursor = db.cursor()
        query = """
            UPDATE Settings 
            SET setting_geometry = ?, setting_style = ?, last_modified = ? 
            WHERE account_id = ?
        """
        cursor.execute(query, (geometry, style, datetime.datetime.now(), account_id))
        db.commit()

    @with_db_connection
    def create_settings(self, db, account_id: int, geometry: str, style: str):
        """Create new settings for an account."""
        cursor = db.cursor()
        query = """
            INSERT INTO Settings (account_id, setting_geometry, setting_style, last_modified) 
            VALUES (?, ?, ?, ?)
        """
        cursor.execute(query, (account_id, geometry, style, datetime.datetime.now()))
        db.commit()

    @with_db_connection
    def get_all_settings(self, db) -> List[dict]:
        """Get settings for all accounts."""
        cursor = db.cursor()
        cursor.execute("SELECT * FROM Settings")
        return self._to_dicts(cursor.fetchall())
        
    @with_db_connection
    def jti_revoked(self, db, jti: str) -> bool:
        """Checks if a given jti is revoked."""
        cursor = db.cursor()
        cursor.execute("SELECT revoked, expires_at FROM JWTStorage WHERE jti = ?", (jti,))
        row = cursor.fetchone()
        if row and row["expires_at"] > datetime.datetime.now():
            return row['revoked']
        return False
    
    @with_db_connection
    def insert_jti(self, db, jti: str, user_id: int, expires_at: datetime.datetime):
        """Inserts as given jti into the database."""
        cursor = db.cursor()
        cursor.execute("""
            INSERT INTO JWTStorage (jti, user_id, revoked, expires_at) 
            VALUES (?, ?, ?, ?)
        """, (jti, user_id, False, expires_at))
        db.commit()
        
    @with_db_connection
    def get_user_id_by_jdi(self, db, jti: str) -> int:
        """Get the associated user id by jti."""
        cursor = db.cursor()
        cursor.execute("SELECT user_id FROM JWTStorage WHERE jti = ?", (jti,))
        row = cursor.fetchone()
        return row["user_id"]
    
    @with_db_connection
    def revoke_jti(self, db, jti: str):
        """Revokes a given jti."""
        cursor = db.cursor()
        cursor.execute("""
            UPDATE JWTStorage 
            SET revoked = True 
            WHERE jti = ?
        """, (jti,))
        db.commit()
        
    @with_db_connection
    def remove_expired_tokens(self, db):
        """Removes all expired jti's from the database."""
        current_time = datetime.datetime.now()
        cursor = db.cursor()
        cursor.execute("DELETE FROM JWTStorage WHERE expires_at < ?", (current_time,))
        db.commit()
    
    @with_db_connection
    def create_notification(self, db, user_id: int, title: str, message: str, 
                            type: str, actions: list):
        """Creates a new notification."""
        cursor = db.cursor()
        notification_id = str(uuid.uuid4())
        cursor.execute("""
            INSERT INTO Notifications (id, user_id, title, message, type, actions) 
            VALUES (?, ?, ?, ?, ?, ?)
        """, (notification_id, user_id, title, message, type, json.dumps(actions)))
        db.commit()
        return notification_id

    @with_db_connection
    def get_unseen_notifications(self, db, user_id: int) -> List[dict]:
        """Gets all unseen notifications for a user."""
        cursor = db.cursor()
        cursor.execute("""
            SELECT * FROM Notifications 
            WHERE user_id = ? AND seen = False
        """, (user_id,))
        return self._to_dicts(cursor.fetchall())
    
    def insert_test_data(self):
        return
    