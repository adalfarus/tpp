from PySide6.QtWidgets import (QWidget, QMainWindow, QApplication, QVBoxLayout, QHBoxLayout, 
                               QToolButton, QStyle, QComboBox, QLineEdit, QLabel, QFrame, 
                               QPushButton, QDateEdit, QListWidget, QListWidgetItem, 
                               QTimeEdit, QScrollArea, QMessageBox, QStackedWidget, 
                               QSizePolicy)
from PySide6.QtCore import Qt, Signal, QUrl, QSize, QUrlQuery, QRegularExpression
from PySide6.QtGui import QIcon, QCursor, QRegularExpressionValidator, QIntValidator, QPixmap
from PySide6.QtWebEngineWidgets import QWebEngineView
import requests
import time
import sys
import re

def gui_init(logger):
    global log
    log = logger.log
    
#
# Section 0
# Own Classes
#
class ClickableLabel(QLabel):
    clicked = Signal()

    def __init__(self, text="", parent=None):
        super().__init__(text, parent)
        self.set_cursor_and_underline()

    def set_cursor_and_underline(self):
        # Set cursor to pointing hand
        self.setCursor(QCursor(Qt.PointingHandCursor))
        # Add an underscore to the text
        self.setText(f"<u>{self.text()}</u>")

    def mousePressEvent(self, event):
        if event.button() == Qt.LeftButton:
            self.clicked.emit()
    
#
# Section 1
# Login and Registration
#
class ThirdPartyRegistration(QWidget): # Unused
    doneStr = Signal(str) # send the token over signal
    def __init__(self, width, height, url, icon, parent=None):
        super().__init__(parent)
        
        self.third_party = url.split('.')[1].title()
        self.setWindowTitle(f"Third-Party Registration - {self.third_party}")
        self.setWindowIcon(QIcon(icon) if not isinstance(icon, QIcon) else icon)
        
        # Set up QWebEngineView
        self.web_view = QWebEngineView(self)
        self.web_view.setGeometry(0, 0, width, height)
        self.web_view.load(QUrl(url))
        
        # Set the size of the window+
        self.setFixedSize(QSize(width, height))
        
        # Handle url changes, as the callback route isn't implemented yet
        self.web_view.urlChanged.connect(self.handle_url_change)
        
    def handle_url_change(self, url):
        if (self.third_party in url.host() or "localhost" in url.host()) and url.path == "/auth/callback":
            # This means we are in the callback URL
            # We need to parse this URL to extract the code
            url_query = QUrlQuery(url.query())
            code = url_query.queryItemValue("code")
            if code:
                # Use the gotten code to generate an access token in a secure manner
                token = self.exchange_code_for_token(code)
            self.done.emit(token)
        else:
            pass #print(url.host(), url.path()) # Debug
        
    def exchange_code_for_token(self, code):
        client_id = "fa7d09a3d9b2ba081d7f"
        client_secret = "1f8d76440eab261e3da69f53c724fd8734486d1d"
        redirect_url = "https://www.localhost:5000/auth/callback"
        scope = "read:user user:email"
        
        # Prepare the request data
        data = {
            "client_id": client_id,
            "client_secret": client_secret,
            "code": code,
            "redirect_url": redirect_url
        }
        
        headers = {
            "Accept": "application/json"
        }
        
        # Make the request
        response = requests.post("https://github.com/login/oauth/access_token", data=data, headers=headers)
        response_data = response.json()
        
        # Extract the access token
        access_token = response_data.get("access_token")
        return access_token

class LoginWidget(QWidget):
    loginClicked = Signal()
    languageChanged = Signal(str) # Unused
    serverChanged = Signal() # Unused
    anonUserClicked = Signal()
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.initUI()
        self.connectSignals()
        
    def initUI(self):
        login_layout = QVBoxLayout()
        
        # Top layout
        top_layout = QHBoxLayout()
        self.language_icon = QToolButton(self)
        self.language_icon.setIcon(self.style().standardIcon(QStyle.SP_ComputerIcon))
        top_layout.addWidget(self.language_icon)
        
        top_layout.addStretch()
        
        self.server_select = QComboBox(self)
        self.server_select.addItem("Official Server", "https://api.tpp.com")
        self.server_select.addItem("Unofficial Server", "custom")
        top_layout.addWidget(self.server_select)
        
        self.custom_ip_input = QLineEdit(self)
        self.custom_ip_input.setPlaceholderText("Enter custom IP")
        self.custom_ip_input.hide()
        top_layout.addWidget(self.custom_ip_input)
        login_layout.addLayout(top_layout)
        
        login_layout.addSpacing(40)
        
        # Middle Layout for login
        mid_layout = QVBoxLayout()
        username_layout = QHBoxLayout() # Remove unnecessary layout?
        username_label = QLabel("Username: ")
        username_label.setFixedHeight(30) # This is intentional
        self.username_input = QLineEdit(self)
        self.username_input.setFixedHeight(30)
        
        if int(time.ctime()[-7:-5]) % 2 == 0:
            part1 = "hell"
        else:
            part1 = "heaven"
            
        if int(time.ctime()[-7:-5]) % 2 == 0:
            part2 = "forUnspeakableActsOfViolence"
        else:
            part2 = "beautifulActsOfBenevolence"
            
        self.username_input.setPlaceholderText(f"User2{part1}4{part2}")
        
        username_layout.addWidget(username_label)
        mid_layout.addLayout(username_layout)
        mid_layout.addWidget(self.username_input)
        
        login_layout.addSpacing(15)
        
        label_layout = QHBoxLayout()
        label_layout.setContentsMargins(0, 0, 0, 0)
        
        password_label = QLabel("Password: ")
        password_label.setFixedHeight(25)
        label_layout.addWidget(password_label)
        
        self.message_label = QLabel("") # Needs to be self as we have to show server messages here later on
        self.message_label.setFixedHeight(25)
        self.message_label.setAlignment(Qt.AlignmentFlag.AlignRight)
        label_layout.addWidget(self.message_label)
        
        self.password_input = QLineEdit(self)
        self.password_input.setFixedHeight(30)
        self.password_input.setPlaceholderText("No1Cares4Security")
        self.password_input.setEchoMode(QLineEdit.EchoMode.Password)
        forgot_password_layout = QHBoxLayout()
        self.forgot_password_label = ClickableLabel("Forgot Password?")
        self.forgot_password_label.setFixedHeight(25)
        forgot_password_layout.addWidget(self.forgot_password_label)
        forgot_password_layout.addStretch()
        
        login_layout.addSpacing(15)
        
        label_frame = QFrame(self)
        label_frame.setLayout(label_layout)
        mid_layout.addWidget(label_frame)
        mid_layout.addWidget(self.password_input)
        mid_layout.addLayout(forgot_password_layout)
        
        # Grouping Anon User and Login Buttons
        buttons_layout = QHBoxLayout()
        self.unknown_user_button = QPushButton("Use as Unknown User")
        buttons_layout.addWidget(self.unknown_user_button)
        
        self.login_button = QPushButton("Login")
        buttons_layout.addWidget(self.login_button)
        
        button_frame = QFrame(self)
        button_frame.setLayout(buttons_layout)
        button_frame.setFixedHeight(50)
        mid_layout.addWidget(button_frame)
        
        login_layout.addLayout(mid_layout)
        login_layout.addSpacing(15)
        
        # Bottom Layout
        bottom_layout = QVBoxLayout()
        register_text_layout = QHBoxLayout()
        register_text = QLabel("Don't have an account yet?")
        register_text.setFixedHeight(25)
        self.clickable_register_text = ClickableLabel("Register for free")
        self.clickable_register_text.setFixedHeight(25)
        register_text_layout.addStretch()
        register_text_layout.addWidget(register_text)
        register_text_layout.addWidget(self.clickable_register_text)
        register_text_layout.addStretch()
        
        register_text_frame = QFrame(self)
        register_text_frame.setLayout(register_text_layout)
        
        bottom_layout.addWidget(register_text_frame)
        
        login_layout.addLayout(bottom_layout)
        
        self.setLayout(login_layout)
        
    def connectSignals(self):
        self.server_select.currentTextChanged.connect(self.handle_server_change)
        self.login_button.clicked.connect(self.emitLoginClick)
        self.unknown_user_button.clicked.connect(self.anonUserClicked.emit)
        
    def handle_server_change(self, text):
        if text == "Unofficial Server":
            self.custom_ip_input.show()
        else:
            self.custom_ip_input.hide()
        
    def emitLoginClick(self):
        self.message_label.setText("Checking credentials ...")
        self.loginClicked.emit()
        
class RegisterWidget(QWidget):
    registerClicked = Signal()
    languageChanged = Signal(str) # Unused
    serverChanged = Signal() # Unused
    socialAuthDone = Signal() # Unused
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.initUI()
        self.connectSignals()
        
    def initUI(self):
        register_layout = QVBoxLayout()
        
        # Top layout
        top_layout = QHBoxLayout()
        self.language_icon = QToolButton(self)
        self.language_icon.setIcon(self.style().standardIcon(QStyle.SP_ComputerIcon))
        top_layout.addWidget(self.language_icon)
        
        top_layout.addStretch()
        
        self.server_select = QComboBox(self)
        self.server_select.addItem("Official Server", "https://api.tpp.com")
        self.server_select.addItem("Unofficial Server", "custom")
        top_layout.addWidget(self.server_select)
        
        #register_layout.addSpacing(20) # Idk
        
        self.custom_ip_input = QLineEdit(self)
        self.custom_ip_input.setPlaceholderText("Enter custom IP")
        self.custom_ip_input.hide()
        top_layout.addWidget(self.custom_ip_input)
        register_layout.addLayout(top_layout)
        
        # Middle Layout for registration
        mid_layout = QVBoxLayout()
        user_data_label_layout = QHBoxLayout()
        username_label = QLabel("Username: ")
        username_label.setFixedHeight(30) # This is intentional
        user_data_label_layout.addWidget(username_label)
        user_data_input_layout = QHBoxLayout()
        self.username_input = QLineEdit(self)
        self.username_input.setFixedHeight(30)
        user_data_input_layout.addWidget(self.username_input)

        self.username_input.setPlaceholderText(f"User8ntALoser")
        
        email_label = QLabel("Email: ")
        email_label.setFixedHeight(30) # This is intentional
        user_data_label_layout.addWidget(email_label)
        self.email_input = QLineEdit(self)
        self.email_input.setFixedHeight(30)
        user_data_input_layout.addWidget(self.email_input)

        self.email_input.setPlaceholderText(f"Email4Champs")
        
        mid_layout.addLayout(user_data_label_layout)
        mid_layout.addLayout(user_data_input_layout)
        
        register_layout.addSpacing(15)
        
        label_layout = QHBoxLayout()
        label_layout.setContentsMargins(0, 0, 0, 0)
        
        password_label = QLabel("Password: ")
        password_label.setFixedHeight(25)
        label_layout.addWidget(password_label)
        
        self.message_label = QLabel("") # Needs to be self as we have to show server messages here later on
        self.message_label.setFixedHeight(25)
        self.message_label.setAlignment(Qt.AlignmentFlag.AlignRight)
        label_layout.addWidget(self.message_label)
        
        self.password_input = QLineEdit(self)
        self.password_input.setFixedHeight(30)
        self.password_input.setPlaceholderText("Every1Cares4Security")
        self.password_input.setEchoMode(QLineEdit.EchoMode.Password)
        
        self.password_input_2 = QLineEdit(self)
        self.password_input_2.setFixedHeight(30)
        self.password_input_2.setPlaceholderText("PasswordConfirm4You2") # "Confirm Password" # "Repeat please"
        self.password_input_2.setEchoMode(QLineEdit.EchoMode.Password)
        
        self.password_message = QLabel("")
        self.password_message.setAlignment(Qt.AlignmentFlag.AlignLeft)
        
        register_layout.addSpacing(15)
        
        label_frame = QFrame(self)
        label_frame.setLayout(label_layout)
        mid_layout.addWidget(label_frame)
        mid_layout.addWidget(self.password_input)
        mid_layout.addWidget(self.password_input_2)
        mid_layout.addWidget(self.password_message)
        
        buttons_layout = QHBoxLayout()
        self.register_button = QPushButton("Register")
        buttons_layout.addWidget(self.register_button)
        
        button_frame = QFrame(self)
        button_frame.setLayout(buttons_layout)
        button_frame.setFixedHeight(50)
        mid_layout.addWidget(button_frame)
        
        register_layout.addLayout(mid_layout)
        register_layout.addSpacing(15)
        
        # Bottom Layout
        bottom_layout = QVBoxLayout()
        label = QLabel("or continue with")
        label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        bottom_layout.addWidget(label)
        
        register_button_layout = QHBoxLayout()
        
        self.google_register_button = QPushButton("Google")
        self.google_register_button.setIcon(QIcon("./resources/darkMode/google-logo.png"))
        self.google_register_button.setIconSize(QSize(21, 21))
        register_button_layout.addWidget(self.google_register_button)

        self.github_register_button = QPushButton("Github")
        self.github_register_button.setIcon(QIcon("./resources/darkMode/github-logo.png"))
        self.github_register_button.setIconSize(QSize(21, 21))
        register_button_layout.addWidget(self.github_register_button)

        self.facebook_register_button = QPushButton("Facebook")
        self.facebook_register_button.setIcon(QIcon("./resources/darkMode/facebook-logo-1.png"))
        self.facebook_register_button.setIconSize(QSize(21, 21))
        register_button_layout.addWidget(self.facebook_register_button)

        register_button_frame = QFrame(self)
        register_button_frame.setLayout(register_button_layout)

        bottom_layout.addWidget(register_button_frame)
        bottom_layout.addStretch()
        
        login_text_layout = QHBoxLayout()
        login_text = QLabel("Already have an account?")
        login_text.setFixedHeight(25)
        self.clickable_login_text = ClickableLabel("Log in")
        self.clickable_login_text.setFixedHeight(25)
        login_text_layout.addStretch()
        login_text_layout.addWidget(login_text)
        login_text_layout.addWidget(self.clickable_login_text)
        login_text_layout.addStretch()
        
        register_text_frame = QFrame(self)
        register_text_frame.setLayout(login_text_layout)
        
        bottom_layout.addWidget(register_text_frame)
        
        register_layout.addLayout(bottom_layout)
        
        self.setLayout(register_layout)
        
    def connectSignals(self):
        self.server_select.currentTextChanged.connect(self.handle_server_change)
        self.register_button.clicked.connect(self.emitRegisterClick)
        
        self.email_input.textChanged.connect(self.validate_email)
        self.password_input.textChanged.connect(self.check_password_match)
        self.password_input_2.textChanged.connect(self.check_password_match)
        
        self.google_register_button.clicked.connect(self.open_google_login)
        self.github_register_button.clicked.connect(self.open_github_login)
        self.facebook_register_button.clicked.connect(self.open_facebook_login)
        
    def handle_server_change(self, text):
        if text == "Unofficial Server":
            self.custom_ip_input.show()
        else:
            self.custom_ip_input.hide()
        
    def emitRegisterClick(self):
        self.message_label.setText("Checking credentials ...")
        self.registerClicked.emit()

    def open_google_login(self):
        self.third_party_login = ThirdPartyRegistration(800, 600, "https://www.google.com", self.google_register_button.icon())
        self.third_party_login.show()

    def github_done(self, token):
        access_token = token
        user_info_url = 'https://api.github.com/user'
        response = requests.get(user_info_url, headers={'Authorization': f'token {access_token}'})
        user_info = response.json()
        username = user_info.get('login')
        email = user_info.get('email')
        print(username, email)
        self.username_input.setText(username)
        self.socialAuthDone.emit((username, email))

    def open_github_login(self):
        CLIENT_ID = 'acae1509d1d4233356fd'
        CALLBACK_URL = 'https://www.contentcorridor.info/auth/callback'
        scope = ['user:login', 'user:email']
        state = 'SOME_RANDOM_STATE' # The 'state' is a random string to prevent CSRF which should be generated per session.
        # Make sure to use the correct GitHub OAuth URL, which is typically the authorization endpoint with query parameters
        github_url = f'https://www.github.com/login/oauth/authorize?client_id={CLIENT_ID}&redirect_uri={CALLBACK_URL}&scope={" ".join(scope)}&state={state}'
        # Ensure that 'self.github_register_button' is a valid button instance with an icon in your current class.
        github_icon = self.github_register_button.icon() if hasattr(self, 'github_register_button') else QIcon('./')
        # Create the ThirdPartyRegistration instance with the GitHub URL and icon
        self.third_party_login = ThirdPartyRegistration(800, 600, github_url, github_icon)
        self.third_party_login.doneStr.connect(self.github_done)
        self.third_party_login.show()

    def open_facebook_login(self):
        self.third_party_login = ThirdPartyRegistration(800, 600, "https://www.facebook.com", self.facebook_register_button.icon())
        self.third_party_login.show()
        
    def validate_email(self):
        email = self.email_input.text()
        if self.is_valid_email(email) or email == "":
            self.message_label.setText("")
        else:
            self.message_label.setText("Email is invalid")

    def check_password_match(self):
        password = self.password_input.text()
        confirm_password = self.password_input_2.text()
        if password == confirm_password:
            self.password_message.setText("")
        else:
            self.password_message.setText("Passwords do not match")

    def is_valid_email(self, email):
        pattern = re.compile(r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$")
        return re.match(pattern, email) is not None

class ExtraInfoWidget(QWidget):
    extraInfoSubmitted = Signal(dict)
    backToPrevious = Signal()
    
    def __init__(self, parent=None):
        super().__init__(parent)
        self.initUI()
        self.add_student_specific_fields()
    
    def initUI(self):
        main_layout = QVBoxLayout(self)

        # Scroll Area Setup
        self.scroll_area = QScrollArea(self)
        self.scroll_area.setWidgetResizable(True)
        main_layout.addWidget(self.scroll_area)

        # Content widget for the scroll area
        self.content_widget = QWidget()
        self.layout = QVBoxLayout(self.content_widget)

        # Standard details (common to all account types)
        self.account_type_select = QComboBox(self)
        self.account_type_select.addItems(["Student", "Teacher", "Employee"])
        self.layout.addWidget(self.account_type_select)

        self.first_name_input = QLineEdit(self)
        self.first_name_input.setPlaceholderText("First Name")
        self.layout.addWidget(self.first_name_input)

        self.last_name_input = QLineEdit(self)
        self.last_name_input.setPlaceholderText("Last Name")
        self.layout.addWidget(self.last_name_input)

        self.email_input = QLineEdit(self)
        self.email_input.setPlaceholderText("Email")
        email_validator = QRegularExpressionValidator(QRegularExpression(r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$"))
        self.email_input.setValidator(email_validator)
        self.layout.addWidget(self.email_input)

        #self.phone_input = QLineEdit(self)
        #self.phone_input.setPlaceholderText("Phone (e.g., +123-456-7890)")
        #self.phone_input.setInputMask("+999 999 9999;_") # "+999-999-9999;_"
        #self.layout.addWidget(self.phone_input)
        
        self.phone_input = QLineEdit(self)
        self.phone_input.setPlaceholderText("Phone (e.g., +1234567890)")
        phone_validator = QRegularExpressionValidator(QRegularExpression(r"\+\d{10,15}"))
        self.phone_input.setValidator(phone_validator)
        self.layout.addWidget(self.phone_input)

        self.address_input = QLineEdit(self)
        self.address_input.setPlaceholderText("Address")
        self.address_input.textChanged.connect(self.verify_address)
        self.layout.addWidget(self.address_input)

        self.birth_date_input = QDateEdit(self)
        self.birth_date_input.setDisplayFormat("yyyy.MM.dd")
        self.layout.addWidget(self.birth_date_input)

        self.gender_select = QComboBox(self)
        self.gender_select.addItems(["Male", "Female", "Other"])
        self.layout.addWidget(self.gender_select)

        # Specific details layout
        self.specific_details_layout = QVBoxLayout()
        self.layout.addLayout(self.specific_details_layout)

        self.submit_button = QPushButton("Submit", self)
        self.submit_button.clicked.connect(self.emitExtraInfoSubmitted)
        self.layout.addWidget(self.submit_button)

        self.back_button = QPushButton("Back", self)
        self.back_button.clicked.connect(self.backToPrevious.emit)
        self.layout.addWidget(self.back_button)

        # Update fields based on account type selection
        self.account_type_select.currentTextChanged.connect(self.update_specific_details)
        
        # Set the content widget
        self.scroll_area.setWidget(self.content_widget)

    def update_specific_details(self, account_type):
        # Clear existing specific fields
        while self.specific_details_layout.count():
            item = self.specific_details_layout.takeAt(0)
            widget = item.widget()
            if widget:
                widget.deleteLater()

        # Add fields based on account type
        if account_type == "Student":
            self.add_student_specific_fields()
        elif account_type == "Teacher":
            self.add_teacher_specific_fields()
        elif account_type == "Employee":
            self.add_employee_specific_fields()

    def add_student_specific_fields(self):
        self.grade_level_select = QComboBox(self)
        grade_levels = [
            "Kindergarten", "Grade 1", "Grade 2", "Grade 3", "Grade 4", 
            "Grade 5", "Grade 6", "Grade 7", "Grade 8", 
            "Grade 9", "Grade 10", "Grade 11", "Grade 12", 
            "College Freshman", "College Sophomore", "College Junior", "College Senior", 
            "Graduate Student"
        ]
        self.grade_level_select.addItems(grade_levels)
        self.specific_details_layout.addWidget(self.grade_level_select)

        self.school_type_select = QComboBox(self)
        self.school_type_select.addItems(["Public", "Private", "Charter", "Other"])
        self.specific_details_layout.addWidget(self.school_type_select)

        subjects_label = QLabel("Subjects")
        subjects_label.setFixedHeight(20)
        self.subjects_list_widget = QListWidget(self)
        self.subjects_list_widget.setFixedHeight(80)
        self.subjects_list_widget.setSelectionMode(QListWidget.MultiSelection)
        subjects = ["Math", "Science", "History", "English", "Art"]
        for subject in subjects:
            item = QListWidgetItem(subject)
            self.subjects_list_widget.addItem(item)
        self.specific_details_layout.addWidget(subjects_label)
        self.specific_details_layout.addWidget(self.subjects_list_widget)

        self.cost_range_layout = QHBoxLayout()
        self.cost_from_input = QLineEdit(self)
        self.cost_to_input = QLineEdit(self)
        int_val = QIntValidator()
        self.cost_from_input.setValidator(int_val)
        self.cost_to_input.setValidator(int_val)
        self.cost_range_label = QLabel("-")
        self.cost_range_layout.addWidget(self.cost_from_input)
        self.cost_range_layout.addWidget(self.cost_range_label)
        self.cost_range_layout.addWidget(self.cost_to_input)
        self.specific_details_layout.addLayout(self.cost_range_layout)

        self.gender_preference_select = QComboBox(self)
        self.gender_preference_select.addItems(["No Preference", "Male", "Female"])
        self.specific_details_layout.addWidget(self.gender_preference_select)

    def add_teacher_specific_fields(self):
        subjects_label = QLabel("Subjects")
        subjects_label.setFixedHeight(20)
        self.subjects_list_widget = QListWidget(self)
        self.subjects_list_widget.setFixedHeight(80)
        self.subjects_list_widget.setSelectionMode(QListWidget.MultiSelection)
        subjects = ["Math", "Science", "History", "English", "Art"]
        for subject in subjects:
            item = QListWidgetItem(subject)
            self.subjects_list_widget.addItem(item)
        self.specific_details_layout.addWidget(subjects_label)
        self.specific_details_layout.addWidget(self.subjects_list_widget)

        grade_levels_label = QLabel("Grade Levels")
        grade_levels_label.setFixedHeight(20)
        self.grade_levels_list_widget = QListWidget(self)
        self.grade_levels_list_widget.setFixedHeight(80)
        self.grade_levels_list_widget.setSelectionMode(QListWidget.MultiSelection)
        grade_levels = [
            "Kindergarten", "Grade 1", "Grade 2", "Grade 3", "Grade 4", 
            "Grade 5", "Grade 6", "Grade 7", "Grade 8", 
            "Grade 9", "Grade 10", "Grade 11", "Grade 12", 
            "College Freshman", "College Sophomore", "College Junior", "College Senior", 
            "Graduate Student"
        ]
        for subject in grade_levels:
            item = QListWidgetItem(subject)
            self.grade_levels_list_widget.addItem(item)
        self.specific_details_layout.addWidget(grade_levels_label)
        self.specific_details_layout.addWidget(self.grade_levels_list_widget)
        
        school_types_label = QLabel("School Types")
        school_types_label.setFixedHeight(20)
        self.school_types_list_widget = QListWidget(self)
        self.school_types_list_widget.setFixedHeight(80)
        self.school_types_list_widget.setSelectionMode(QListWidget.MultiSelection)
        school_types = ["Public", "Private", "Charter", "Other"]
        for subject in school_types:
            item = QListWidgetItem(subject)
            self.school_types_list_widget.addItem(item)
        self.specific_details_layout.addWidget(school_types_label)
        self.specific_details_layout.addWidget(self.school_types_list_widget)

        self.gender_preference_select = QComboBox(self)
        self.gender_preference_select.addItems(["No Preference", "Male", "Female"])
        self.specific_details_layout.addWidget(self.gender_preference_select)

        self.fee_range_layout = QHBoxLayout()
        self.fee_from_input = QLineEdit(self)
        self.fee_to_input = QLineEdit(self)
        int_val = QIntValidator()
        self.fee_from_input.setValidator(int_val)
        self.fee_to_input.setValidator(int_val)
        self.fee_range_label = QLabel("-")
        self.fee_range_layout.addWidget(self.fee_from_input)
        self.fee_range_layout.addWidget(self.fee_range_label)
        self.fee_range_layout.addWidget(self.fee_to_input)
        self.specific_details_layout.addLayout(self.fee_range_layout)

        self.available_times_layout = QHBoxLayout()
        self.time_from_input = QTimeEdit(self)
        self.time_to_input = QTimeEdit(self)
        self.available_times_label = QLabel("-")
        self.available_times_layout.addWidget(self.time_from_input)
        self.available_times_layout.addWidget(self.available_times_label)
        self.available_times_layout.addWidget(self.time_to_input)
        self.specific_details_layout.addLayout(self.available_times_layout)

    def add_employee_specific_fields(self):
        self.rank_input = QLineEdit(self)
        self.rank_input.setPlaceholderText("Rank")
        self.specific_details_layout.addWidget(self.rank_input)

        self.department_input = QLineEdit(self)
        self.department_input.setPlaceholderText("Department")
        self.specific_details_layout.addWidget(self.department_input)

    def emitExtraInfoSubmitted(self):
        if not self.validate_inputs():
            QMessageBox.information(self, "Info", "Please fill out all inputs before proceeding")
            return  # Stop the process if validation fails
        extra_info = {
            "account_type": self.account_type_select.currentText(),
            "first_name": self.first_name_input.text(),
            "last_name": self.last_name_input.text(),
            "email": self.email_input.text(),
            "phone": self.phone_input.text(),
            "address": self.address_input.text(),
            "birth_date": self.birth_date_input.date().toString("yyyy.MM.dd"),
            "gender": self.gender_select.currentText(),
            "specific_data": self.get_specific_data()
        }
        self.extraInfoSubmitted.emit(extra_info)
        
    # Placeholder function for address verification
    def verify_address(self):
        # Implement address verification logic here
        pass

    def validate_inputs(self):
        # Validate standard inputs
        if not all([self.first_name_input.text().strip(), self.last_name_input.text().strip(), 
                    self.email_input.text().strip(), self.phone_input.text().strip(), 
                    self.address_input.text().strip()]):
            return False

        # Validate specific inputs based on account type
        account_type = self.account_type_select.currentText()
        if account_type == "Student":
            return self.validate_student_inputs()
        elif account_type == "Teacher":
            return self.validate_teacher_inputs()
        elif account_type == "Employee":
            return self.validate_employee_inputs()
        return True
    
    def get_specific_data(self):
        account_type = self.account_type_select.currentText()
        if account_type == "Student":
            return self.collect_student_data()
        elif account_type == "Teacher":
            return self.collect_teacher_data()
        elif account_type == "Employee":
            return self.collect_employee_data()
        return {}

    def validate_student_inputs(self):
        # Example validation logic for student inputs add more later
        return bool(self.grade_level_select.currentText())

    def validate_teacher_inputs(self):
        # Example validation logic for teacher inputs add more later
        # Check if at least one subject is selected
        return any(item.isSelected() for item in self.subjects_list_widget)

    def validate_employee_inputs(self):
        # Example validation logic for employee inputs add more later
        return bool(self.rank_input.text().strip()) and bool(self.department_input.text().strip())

    def collect_student_data(self):
        # Collect and return student specific data
        selected_subjects = [self.subjects_list_widget.item(i).text() for i in range(self.subjects_list_widget.count()) 
                             if self.subjects_list_widget.item(i).isSelected()]
        return {
            "grade_level": self.grade_level_select.currentText(),
            "school_type": self.school_type_select.currentText(),
            "subjects": selected_subjects,
            "cost_range": f"{self.cost_from_input.text()}-{self.cost_to_input.text()}",
            "gender_preference": self.gender_preference_select.currentText()
        }

    def collect_teacher_data(self):
        # Collect and return teacher specific data
        selected_subjects = [self.subjects_list_widget.item(i).text() for i in range(self.subjects_list_widget.count()) 
                             if self.subjects_list_widget.item(i).isSelected()]
        selected_grade_levels = [self.grade_levels_list_widget.item(i).text() for i in range(self.grade_levels_list_widget.count()) 
                                 if self.grade_levels_list_widget.item(i).isSelected()]
        selected_school_types = [self.school_types_list_widget.item(i).text() for i in range(self.school_types_list_widget.count()) 
                                 if self.school_types_list_widget.item(i).isSelected()]
        return {
            "subjects": selected_subjects,
            "grade_levels": selected_grade_levels,
            "school_types": selected_school_types,
            "gender_preference": self.gender_preference_select.currentText(),
            "fee_range": f"{self.fee_from_input.text()}-{self.fee_to_input.text()}",
            "available_times": f"{self.time_from_input.time().toString('HH:mm')}-{self.time_to_input.time().toString('HH:mm')}"
        }

    def collect_employee_data(self):
        # Collect and return employee specific data
        return {
            "rank": self.rank_input.text().strip(),
            "department": self.department_input.text().strip()
        }

class OTPWidget(QWidget):
    otpSubmitted = Signal(str)
    backToPrevious = Signal()

    def __init__(self, parent=None):
        super().__init__(parent)
        self.initUI()

    def initUI(self):
        layout = QVBoxLayout()

        otp_label = QLabel("Enter OTP")
        otp_label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        layout.addWidget(otp_label)

        otp_input_layout = QHBoxLayout()
        self.otp_inputs = []
        for _ in range(10):
            otp_input = QLineEdit(self)
            otp_input.setMaxLength(1)
            otp_input.setFixedWidth(20)
            otp_input.textChanged.connect(lambda _, inp=otp_input: self.focus_next_input(inp))
            otp_input_layout.addWidget(otp_input)
            self.otp_inputs.append(otp_input)
            
        # Center the OTP inputs
        centered_otp_layout = QHBoxLayout()
        centered_otp_layout.addStretch()  # Add stretchable space on the left
        centered_otp_layout.addLayout(otp_input_layout)  # Add the OTP inputs
        centered_otp_layout.addStretch()  # Add stretchable space on the right
            
        layout.addLayout(centered_otp_layout)

        self.submit_button = QPushButton("Submit")
        self.submit_button.clicked.connect(self.emitOtpSubmitted)
        layout.addWidget(self.submit_button)

        self.back_button = QPushButton("Back")
        self.back_button.clicked.connect(self.backToPrevious.emit)
        layout.addWidget(self.back_button)

        self.setLayout(layout)

    def emitOtpSubmitted(self):
        otp = ''.join([otp_input.text() for otp_input in self.otp_inputs])
        self.otpSubmitted.emit(otp)
        
    def focus_next_input(self, current_input):
        current_index = self.otp_inputs.index(current_input)
        if current_index + 1 < len(self.otp_inputs):
            self.otp_inputs[current_index + 1].setFocus()
    
class ThirdPartyPasswordWidget(QWidget): # Won't be used anyways
    def __init__(self, parent):
        super().__init__(parent=parent)
        self.initUI()
        
    def initUI(self):
        layout = QVBoxLayout()
        self.password_input = QLineEdit(self)
        self.password_input.setPlaceholderText("Password")
        self.password_input.setEchoMode(QLineEdit.EchoMode.Password)
        layout.addWidget(self.password_input)
        
        self.password_confirm_input = QLineEdit(self)
        self.password_confirm_input.setPlaceholderText("Confirm Password")
        self.password_confirm_input.setEchoMode(QLineEdit.EchoMode.Password)
        layout.addWidget(self.password_confirm_input)
        
        # Submit button
        self.submit_button = QPushButton("Set Password", self)
        self.submit_button.clicked.connect(self.emitPasswordSet)
        layout.addWidget(self.submit_button)
        
        # Back button
        self.back_button = QPushButton("Back", self)
        layout.addWidget(self.back_button)
        
        self.setLayout(layout)
        
    def emitPasswordSet(self):
        if self.password_input.text() == self.password_confirm_input.text():
            self.passwordSet.emit(self.password_input.text())
        else:
            QMessageBox.information(self, "Info", "The passwords must match to continue")

class CompletionWidget(QWidget): # Doesn't need to get implemented
    def __init__(self, parent):
        super().__init__(parent=parent)
        self.initUI()
        
    def initUI(self):
        layout = QVBoxLayout()
        
        # Completion picture
        self.pictureLabel = QLabel()
        self.picture = QPixmap("./resources/completion_picture.png")
        self.pictureLabel.setPixmap(self.picture)
        self.pictureLabel.setMaximumSize(600, 400)
        layout.addWidget(self.pictureLabel)
        
        # Next button
        self.next_button = QPushButton("Next")
        layout.addWidget(self.next_button)
        
        self.setLayout(layout)

    def resizeEvent(self, event):
        super().resizeEvent(event)
        # Resize the picture on window resize while maintaining the aspect ratio
        scaledPixmap = self.picture.scaled(self.pictureLabel.maximumWidth(), self.pictureLabel.maximumHeight(), Qt.KeepAspectRatio, Qt.SmoothTransformation)
        self.pictureLabel.setPixmap(scaledPixmap)

class ForgotPasswordWidget(QWidget): # Doesn't need to get implemented
    submitClicked = Signal(str, str)
    
    def __init__(self, parent):
        super().__init__(parent=parent)
        self.initUI()

    def initUI(self):
        layout = QVBoxLayout()
        
        self.email_input = QLineEdit(self)
        self.email_input.setPlaceholderText("Email")
        
        self.username_input = QLineEdit(self)
        self.username_input.setPlaceholderText("Username")
        
        layout.addWidget(self.email_input)
        layout.addWidget(self.username_input)

        self.submit_button = QPushButton("Submit")
        self.back_button = QPushButton("Back")
        
        layout.addWidget(self.submit_button)
        layout.addWidget(self.back_button)
        
        self.setLayout(layout)

    def emit_submit(self):
        email = self.email_input.text()
        username = self.username_input.text()
        self.submitClicked.emit(email, username)
    
class LoginRegisterPage(QWidget):
    done = Signal()
    def __init__(self, parent=None):
        super().__init__(parent=parent)
        self.navigation_stack = [] # To keep track of where to go back to
        
        self.initUI()
        
        self.connectSignals()
        
        # Initially show the registration widget
        self.stackedWidget.setCurrentIndex(self.stackedWidget.indexOf(self.registerWidget))
        
    def initUI(self):
        self.layout = QVBoxLayout(self)
        self.layout.setContentsMargins(0, 0, 0, 0)
        self.layout.setSpacing(0)
        
        # Stacked widget for login and register forms
        self.stackedWidget = QStackedWidget(self)
        
        # Initialize the different widgets
        self.loginWidget = LoginWidget(self)
        self.registerWidget = RegisterWidget(self)
        self.otpWidget = OTPWidget(self)
        self.extraInfoWidget = ExtraInfoWidget(self)
        self.thirdPartyPasswordWidget = ThirdPartyPasswordWidget(self) # Unused
        self.completionWidget = CompletionWidget(self) # Unused
        self.forgotPasswordWidget = ForgotPasswordWidget(self) # Unused
        
        # Adding widgets to the stacked widget
        self.stackedWidget.addWidget(self.loginWidget)
        self.stackedWidget.addWidget(self.registerWidget)
        self.stackedWidget.addWidget(self.otpWidget)
        self.stackedWidget.addWidget(self.extraInfoWidget)
        self.stackedWidget.addWidget(self.thirdPartyPasswordWidget)
        self.stackedWidget.addWidget(self.completionWidget)
        self.stackedWidget.addWidget(self.forgotPasswordWidget)
        
        # Ensure widgets are centralized
        #self.stackedWidget.setSizePolicy(QSizePolicy.Policy.Fixed, QSizePolicy.Policy.Fixed)
        
        self.layout.addWidget(self.stackedWidget)
    
    def connectSignals(self):
        # Connect the labels for switching
        self.loginWidget.clickable_register_text.clicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.registerWidget)))
        self.registerWidget.clickable_login_text.clicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.loginWidget)))
        
        # Connect the buttons for the paths
        self.registerWidget.registerClicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.otpWidget)))
        self.otpWidget.otpSubmitted.connect(lambda: self.transition(self.stackedWidget.indexOf(self.extraInfoWidget)))
        self.extraInfoWidget.extraInfoSubmitted.connect(lambda: self.transition(self.stackedWidget.indexOf(self.completionWidget)))
        self.thirdPartyPasswordWidget.submit_button.clicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.otpWidget)))
        self.completionWidget.next_button.clicked.connect(self.done.emit)
        self.loginWidget.forgot_password_label.clicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.forgotPasswordWidget)))
        self.forgotPasswordWidget.submitClicked.connect(lambda: self.transition(self.stackedWidget.indexOf(self.completionWidget)))
        
        # Connect transition back
        widgets = [self.otpWidget, self.extraInfoWidget, self.thirdPartyPasswordWidget, self.forgotPasswordWidget]
        for widget in widgets:
            widget.back_button.clicked.connect(self.transitionBack)
        
    def transition(self, new_index):
        # Push the current index onto the stack before changing
        self.navigation_stack.append(self.stackedWidget.currentIndex())
        
        # Navigate to the new index
        self.stackedWidget.setCurrentIndex(new_index)
    
    def transitionBack(self):
        if self.navigation_stack:
            previous_index = self.navigation_stack.pop()
            self.stackedWidget.setCurrentIndex(previous_index)
            
    def resize_event(self, new_width):
        return None
    
#
# Section 2
# Calendar and dropdown
#
    
class TppGui(QMainWindow):
    changed = Signal()
    def __init__(self, parent=None):
        super().__init__(parent)
        self.changes = "Hello"
        self.changed.emit()
        
    def changes(self):
        return self.changes

def start(parent):
    app = QApplication(sys.argv)
    app.setStyle("Fusion")
    viewer = TppGui()
    viewer.show()
    sys.exit(app.exec())
    return viewer
