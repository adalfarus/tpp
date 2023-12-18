from PySide6.QtWidgets import (QWidget, QMainWindow, QApplication, QVBoxLayout, QHBoxLayout, 
                               QToolButton, QStyle, QComboBox, QLineEdit, QLabel, QFrame, 
                               QPushButton, QDateEdit, QListWidget, QListWidgetItem, 
                               QTimeEdit, QScrollArea, QMessageBox, QStackedWidget, 
                               QMenu, QWidgetAction, QGraphicsDropShadowEffect)
from PySide6.QtCore import Qt, Signal, QUrl, QSize, QUrlQuery, QRegularExpression, QPoint, QRect, QTime, QDate, QPropertyAnimation, QTimer
from PySide6.QtGui import QIcon, QCursor, QRegularExpressionValidator, QIntValidator, QPixmap, QPainter, QColor, QPen, QMouseEvent, QAction
from PySide6.QtWebEngineWidgets import QWebEngineView
from math import floor
import requests
import time
import sys
import re

from aplustools.io import environment as env

from .classes import Day, Event, QFlowLayout
from .themes import Normal, Classic, ThemeColor

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
class ProfileWidget(QWidget):
    profileClicked = Signal()
    settingsClicked = Signal()
    logoutClicked = Signal()
    
    def __init__(self, parent=None, image_path="", image_size=40, border_width=2, padding=4):
        super().__init__(parent)
        self.image_size = image_size
        self.border_width = border_width
        self.padding = padding
        self.total_size = self.image_size + 2 * (self.border_width + self.padding)
        
        self.initUI(image_path)
        self.connectSignals()
        
    def initUI(self, image_path):
        self.layout = QVBoxLayout()
        self.layout.setContentsMargins(0, 0, 0, 0)
        
        # Profile picture
        self.profilePic = QLabel(self)
        self.setup_profile_pic(image_path)
        self.layout.addWidget(self.profilePic)
        self.profilePic.mousePressEvent = self.show_dropdown
        
        # Dropdown menu
        self.dropdownMenu = QMenu(self)
        
        label = QLabel("Username")
        label.setStyleSheet("padding: 3px; font-weight: bold; background-color: black;")
        
        # Create a QWidgetAction and set the custom widget
        labelAction = QWidgetAction(self.dropdownMenu)
        labelAction.setDefaultWidget(label)
        
        self.dropdownMenu.addAction(labelAction)
        self.profile_action = self.dropdownMenu.addAction("Profile")
        self.settings_action = self.dropdownMenu.addAction("Settings")
        self.logout_action = self.dropdownMenu.addAction("Logout")
        
    def setup_profile_pic(self, image_path):
        # Load and scale the pixmap
        pixmap = QPixmap(image_path)
        pixmap = pixmap.scaled(self.image_size, self.image_size, Qt.AspectRatioMode.KeepAspectRatio, Qt.TransformationMode.SmoothTransformation)
        
        # Create a rounded pixmap
        rounded_pixmap = QPixmap(pixmap.size())
        rounded_pixmap.fill(Qt.GlobalColor.transparent)
        
        painter = QPainter(rounded_pixmap)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing)
        painter.setBrush(Qt.GlobalColor.white)
        painter.drawRoundedRect(0, 0, pixmap.width(), pixmap.height(), self.image_size // 2, self.image_size // 2)
        painter.setCompositionMode(QPainter.CompositionMode.CompositionMode_SourceIn)
        painter.drawPixmap(0, 0, pixmap)
        painter.end()
        
        # Set the rounded pixmap to the label with border and padding
        self.profilePic.setPixmap(rounded_pixmap)
        self.profilePic.setStyleSheet(f"""
            QLabel {{
                border: {self.border_width}px solid blue;
                border-radius: {self.total_size // 2}px;
                padding: {self.padding}px;
            }}
        """)
        self.profilePic.setFixedSize(self.total_size, self.total_size)
        
    def show_dropdown(self, event):
        pos = self.profilePic.mapToGlobal(QPoint(0, self.profilePic.height()))
        self.dropdownMenu.exec(pos)
    
    def connectSignals(self):
        # Connect actions to respective methods
        self.profile_action.triggered.connect(self.profileClicked.emit)
        self.settings_action.triggered.connect(self.settingsClicked.emit)
        self.logout_action.triggered.connect(self.logoutClicked.emit)
    
class CalendarCell(QWidget):
    dayClicked = Signal(object) # Signal for when the little top of the day is clicked
    
    def __init__(self, day: Day, parent=None):
        super().__init__(parent=parent)
        self.day = day
        self.setFixedSize(80, 90)
        self.setToolTip(f"{day.date.toString(Qt.DateFormat.ISODate)} - {len(day.events)} events")
        
        self.needRedrawBackground = True
        self.needRedrawText = True
        self.needRedrawEvents = True
        
        self.needRecalculateDateLines = True
        self.line_ys = []
        self.point_ys = []
        
        self.day.events_changed.connect(self.toggle_need_redraw_events)
        
    def toggle_need_redraw_events(self):
        self.needRedrawEvents = not self.needRedrawEvents
        
    def isVisibleInViewport(self):
        parent = self.parent()
        while parent and not isinstance(parent, QScrollArea):
            parent = parent.parent()
            
        if not parent:
            log("Not in a scroll area")
            return False
        
        # Translate the cell's position to the coordinate system of the scroll area's viewport
        viewportPos = self.mapTo(parent.viewport(), self.rect().topLeft())
        cellRectInViewport = QRect(viewportPos, self.size())
        
        visible = parent.viewport().rect().intersects(cellRectInViewport)
        if not visible:
            pass # log(f"Cell at {viewportPos} with size {self.size()} is not visible in viewport") # Debug
        return visible
    
    def paintEvent(self, event):
        with QPainter(self) as painter:
            rect = self.rect()
            if self.isVisibleInViewport():
                self.needRedrawBackground = True
                self.needRedrawEvents = True
                self.needRedrawText = True
            if self.needRedrawBackground:
                self.draw_background(painter, rect)
                self.needRedrawBackground = False
            if self.needRedrawText:
                self.draw_date_info(painter, rect)
                self.needRedrawText = False
            if self.needRedrawEvents:
                self.draw_events(painter)
                self.needRedrawEvents = False
                
    def draw_background(self, painter, rect):
        # Draw the top part with dark grey background
        top_rect = QRect(0, 0, rect.width(), 20)
        if self.day.is_current_day: # 44, 143, 61
            selected_top_color = QColor(200, 200, 200) # White
        elif not self.day.is_past:
            selected_top_color = QColor(70, 70, 70) # Dark grey color
        else:
            selected_top_color = QColor(28, 28, 28) # Darker grey color
            
        if self.day.is_weekday:
            if not self.day.is_past:
                selected_color = QColor(78, 83, 92)
            else:
                selected_color = QColor(31, 32, 36)
        else:
            if not self.day.is_past:
                selected_color = QColor(0, 58, 145) # 0, 89, 255
            else:
                selected_color = QColor(1, 45, 128)#.darker()
        painter.fillRect(top_rect, selected_top_color)
        painter.fillRect(rect.adjusted(0, 20, 0, 0), selected_color)
        
        line_intervals = ["10:00:00", "16:00:00"]
        time_intervals = ["06:00:00", "12:00:00", "18:00:00"] # Timestamps
        
        if self.needRecalculateDateLines:
            self.needRecalculateDateLines = False
            self.line_ys.clear()
            for line in line_intervals:
                line_y = self.time_to_position(line) + 18 # Adjust for the top part
                self.line_ys.append(line_y)
                
            self.point_ys.clear()
            for time in time_intervals:
                y_pos = self.time_to_position(time)
                self.point_ys.append(y_pos)
        self.line_ys, self.point_ys = [47, 64], [17, 35, 52]
                
        for line_y in self.line_ys:
            painter.setPen(QPen(Qt.GlobalColor.black, 1, Qt.PenStyle.DashLine))
            painter.drawLine(0, line_y, rect.width(), line_y)
                
        for i, y_pos in enumerate(self.point_ys):
            time = time_intervals[i]
            painter.drawText(5, y_pos + 25, time)
            
    def draw_events(self, painter):
        if not self.day.events:
            return
        
        for event in self.day.events:
            current_pusher, current_width = self.day.event_positions[event]
            
            start_bundle, end_bundle = event.get_date_coverage(self.day.date)
            if not start_bundle or not end_bundle:
                continue
            
            start_time, starts_today = start_bundle
            end_time, ends_today = end_bundle
            is_selected = event.selected
            
            start_p, end_p = self.time_to_position(start_time), self.time_to_position(end_time)
            
            start_pos = start_p if starts_today else start_p# - 20 # Somehow fix
            end_pos = end_p if ends_today else end_p + 20
            
            event_height = end_pos - start_pos
            
            # Get the color of the event
            color = event.color
            
            # Set a color for the event box
            if not is_selected:
                painter.setBrush(color)
                painter.setPen(QPen(color.darker(), 2))
            else:
                painter.setBrush(color.lighter())
                painter.setPen(QPen(color.darker(), 3))
                
            # Draw the event box
            painter.drawRect(current_pusher, 20 + start_pos, current_width, event_height)
            
    def time_to_position(self, time):
        # Convert a QTime object to a vertical position in this cell
        if isinstance(time, str):
            time = QTime.fromString(time, "HH:mm:ss")
        total_minutes = time.hour() * 60 + time.minute()
        return int((total_minutes / 1440) * (self.height() - 20))  # Adjust for the top part
    
    def draw_date_info(self, painter, rect):
        is_past = self.day.date < QDate.currentDate()
        
        # Draw date and month in the top part
        date_text = self.day.date.toString("MMM d")
        painter.setPen(Qt.white) if not is_past else painter.setPen(QColor(46, 46, 46))
        painter.drawText(rect.adjusted(0, 2, -5, -40), Qt.AlignmentFlag.AlignRight, date_text)  # Somehow -40 and not -80 ??? -> Fixed clipping issue

        # Draw weekday abbreviation
        day_text = self.day.date.toString("ddd")
        painter.drawText(rect.adjusted(5, 2, 0, -40), Qt.AlignmentFlag.AlignLeft, day_text)  # Somehow -40 and not -80 ??? -> Fixed clipping issue

    def mousePressEvent(self, event: QMouseEvent):
        if event.y() < 20:
            self.dayClicked.emit(self.day)  # Emit signal for top part click
        else:
            for event in self.day.events: event.selected = True
            self.showEventSelectionPopup()  # Show popup for event selection
            
    def createCircleIcon(self, color): # Unused
        pixmap = QPixmap(16, 16)
        pixmap.fill(Qt.transparent)
        painter = QPainter(pixmap)
        painter.setBrush(QColor(color))
        painter.setPen(QColor(color))
        painter.drawEllipse(0, 0, 16, 16)
        painter.end()
        return QIcon(pixmap)

    def showEventSelectionPopup(self): # Doesn't work
        menu = QMenu(self)
        for event in self.day.events:
            icon = self.createCircleIcon("blue") # Replace "blue" with the color of the event
            action = QAction(icon, event.title, self)
            action.triggered.connect(lambda: self.handleEventSelection(event))
            menu.addAction(action)
        menu.exec(self.mapToGlobal(QPoint(0, 20)))  # Positioning the menu right below the cell
        
    def showEventSelectionPopup(self): # Need to add an attribute to Event class to look in drawEvent if it should draw the event highlighted or not
        # Code to create and display the popup for selecting an event
        msgBox = QMessageBox()
        msgBox.setText(f"{self.day.date.toString()} - {len(self.day.events)}" + ''.join([f"""\nEvent {self.day.events[i].title} {self.day.events[i].date.toString()} {self.day.events[i].start_time.toString()}-{self.day.events[i].end_date.toString()} {self.day.events[i].end_time.toString()}""" for i in range(len(self.day.events))]))
        msgBox.exec_()
        for event in self.day.events: event.selected = False

    def handleEventSelection(self, event): # Unused
        print("Selected Event:", event.title)
    
class CalendarWidget(QScrollArea):
    day_clicked = Signal(object)
    def __init__(self, parent=None, base_date=QDate.currentDate(), events=list(), month_range=(-1, 1)):
        super().__init__(parent)
        self.base_date = base_date
        self.events = events
        self.days = {}
        
        self.month_range = month_range

        # Inner widget and layout for the scroll area
        self.innerWidget = QWidget()
        self.flowLayout = QFlowLayout(self.innerWidget)
        self.setWidget(self.innerWidget)
        self.setWidgetResizable(True)

        # Adjust month range; maybe replace this part with reload_calendar?
        start_date = self.calculate_date_from_float(base_date, month_range[0])
        end_date = self.calculate_date_from_float(base_date, month_range[1])

        self.load_months(start_date, end_date)
        self.create_events()
        self.organize_calendar()

    def reload_calendar(self, new_base_date=None):
        #self.clear_layout() # load_months -> organize calendar already does this
        self.days.clear()
        self.base_date = new_base_date or self.base_date
        start_date = self.calculate_date_from_float(self.base_date, self.month_range[0])
        end_date = self.calculate_date_from_float(self.base_date, self.month_range[1])
        self.load_months(start_date=start_date, end_date=end_date)
        self.create_events()
        self.organize_calendar()

    def calculate_date_from_float(self, base_date, months_float):
        full_months = floor(months_float)
        remaining_days = int((months_float - full_months) * 30)  # Approximate days in a month

        calculated_date = base_date.addMonths(full_months)
        calculated_date = calculated_date.addDays(remaining_days)
        return calculated_date

    def load_months(self, start_date, end_date):
        current_date = start_date
        while current_date <= end_date:
            if current_date not in self.days:
                self.days[current_date] = Day(current_date)
            current_date = current_date.addDays(1)

    def create_events(self):
        for event in self.events:
            start = event.date
            end = event.end_date
            try:
                while start <= end:
                    #if event. Fix this -> calculate date ends here?
                    if event.end_time != QTime.fromString("00:00", "HH:mm"):
                        day = self.days[start]
                        if day.date == QDate.fromString("2023.12.25", "yyyy.MM.dd"):
                            pass # log(len(day.events)) # Debug
                        if len(day.events) < 5:
                            day.events.append(event)
                        else:
                            log("Day already has maximum amount of events (5)!")
                    start = start.addDays(1)
            except KeyError:
                print("Error", event)
        [day.calculate_event_positions() for day in self.days.values()]
        self.reload_events()

    def reload_events(self):
        from PySide6.QtGui import QColor
        # Define a list of distinct colors for the events
        colors = [
            QColor(255, 0, 0, 50),  # Red, semi-transparent
            QColor(0, 255, 0, 50),  # Green, semi-transparent
            QColor(0, 0, 255, 50),  # Blue, semi-transparent
            QColor(255, 255, 0, 50), # Yellow, semi-transparent
            QColor(255, 0, 255, 50),  # Magenta, semi-transparent
            QColor(0, 255, 255, 50)  # ???, semi-transparent
        ]
        for i, event in enumerate(self.events):
            event.color = colors[i % len(colors)]

    def organize_calendar(self):
        self.clear_layout()
        
        # Determine the first day of the week for the first day of the month
        first_day = min(self.days.keys())
        first_day_num = first_day.dayOfWeek()
        #first_saturday = first_day_num == 6 # It should now start at monday, and this was never used
        
        # Fill in empty cells until the first day of the month
        #spots = (first_day_num + 1) % 7
        # 1, 2, 3, 4, 5, 6, 7
        #                ^
        # +5 +4 +3 +2 +1 0 -1
        # -1 -2 -3 -4 -5 -6 -7
        # Wrap around logic (what we want as output)
        # 2, 3, 4, 5, 6, 0, 1
        # map()
        spots = (6 + first_day_num) % 7
        for i in range(spots):
            empty_cell = QWidget()
            empty_cell.setFixedSize(80, 90)  # Match the size of the CalendarCell
            self.flowLayout.addWidget(empty_cell)
        
        for date, day in sorted(self.days.items()):
            cell = CalendarCell(day, self)
            cell.dayClicked.connect(self.day_clicked.emit)
            self.flowLayout.addWidget(cell)

    def clear_layout(self):
        while self.flowLayout.count():
            item = self.flowLayout.takeAt(0)
            widget = item.widget()
            if widget is not None:
                widget.deleteLater()
    
class CalendarPage(QWidget):
    def __init__(self, db, parent=None):
        super().__init__(parent=parent)
        self.db = db
        
        self.initUI()
        
    def initUI(self):
        # Main Layout
        self.mainLayout = QVBoxLayout()
        
        # Spacing to prevent calendar from being covered by dropdown
        self.mainLayout.addSpacing(80)
        
        self.setupCalendar()
        self.setupDropdownMenu()
        self.setupMenuButton()
        self.setupAnimation()
        
        # Finalize layout
        self.setLayout(self.mainLayout)
        
        self.dropdown_animation.valueChanged.connect(self.update_button_position)
        self.toggle_menu()  # Somehow needs this to set dropdown_menus position right
        
    def setupCalendar(self):
        # Calendar widget setup
        events = [Event("Hello World", "No desc", "2023.12.12", "08:00", "39:00:99999"), 
                  Event("Gs", "NOOOOOOOOOOOOOOO", "2023.12.15", "00:00", "999:00"), 
                  Event("Gs2", "never", "2023.12.25", "00:00", "12:00"), 
                  Event("Gs3", "neverrr", "2023.12.25", "00:12", "12:00"), 
                  Event("Gs4", "neverrrrrrrr", "2023.12.25", "12:00", "12:00"), 
                  Event("Gs5", "NEVER", "2023.12.25", "08:12", "02:00"), 
                  Event("Gs6", "AAAAAAAAAAAHHHHHHHHHHHHHHHHHH", "2023.12.25", "08:12", "03:00")] # db.get events
        self.calendarWidget = CalendarWidget(self, events=events, month_range=(-0.5, 2), base_date=QDate.fromString("2023.11.30", "yyyy.MM.dd"))
        self.mainLayout.addWidget(self.calendarWidget)
        
    def setupDropdownMenu(self):
        # Dropdown Menu setup
        self.dropdown_menu = QFrame(self)
        self.styleDropdownMenu()
        self.dropdown_layout = QVBoxLayout(self.dropdown_menu)
        self.dropdown_menu.setLayout(self.dropdown_layout)
        self.dropdown_layout.addStretch()

        # Add widgets to dropdown
        self.addWidgetsToDropdown()
        
    def styleDropdownMenu(self):
        self.dropdown_menu.setFrameShape(QFrame.StyledPanel)
        self.dropdown_menu.setAutoFillBackground(True)
        self.dropdown_menu.setStyleSheet("""
            QFrame {
                background-color: #f0f0f0;
                border-radius: 15px;
            }
        """)
        self.addShadowEffect(self.dropdown_menu)
        
    def addShadowEffect(self, widget):
        shadow = QGraphicsDropShadowEffect(self)
        shadow.setBlurRadius(15)
        shadow.setColor(QColor(0, 0, 0, 150))
        shadow.setOffset(5, 5)
        widget.setGraphicsEffect(shadow)
        
    def addWidgetsToDropdown(self):
        # Profile Widget (assuming ProfileWidget is defined elsewhere)
        self.profileWidget = ProfileWidget(self, "resources/old_icon.png", image_size=50, border_width=2, padding=4)
        self.profileWidget.setParent(self.dropdown_menu)
        self.dropdown_layout.addWidget(self.profileWidget)
        
    def setupMenuButton(self):
        self.menu_button = QPushButton("Toggle Menu", self)
        self.menu_button.setGeometry(0, 0, self.width(), 40)
        self.menu_button.clicked.connect(self.toggle_menu)
        self.update_button_position()

    def setupAnimation(self):
        self.dropdown_animation = QPropertyAnimation(self.dropdown_menu, b"geometry")
        self.dropdown_animation.setDuration(500)

    def toggle_menu(self):
        height = self.height()
        if self.dropdown_menu.y() < 0:
            start_value = QRect(0, -height + self.menu_button.height(), self.width(), height)
            end_value = QRect(0, 0, self.width(), height - self.menu_button.height())
        else:
            start_value = QRect(0, 0, self.width(), height - self.menu_button.height())
            end_value = QRect(0, -height + self.menu_button.height(), self.width(), height)

        self.dropdown_animation.setStartValue(start_value)
        self.dropdown_animation.setEndValue(end_value)
        self.dropdown_animation.start()

    def update_button_position(self, value=None):
        if not value:
            dropdown = self.dropdown_menu.y() + self.dropdown_menu.height()
            self.menu_button.move(0, dropdown)
        else:
            dropdown = value.y() + self.dropdown_menu.height()
            self.menu_button.move(0, dropdown)

    def resize_event(self, new_width):
        # Adjust the button's width when the main window is resized
        self.menu_button.setFixedWidth(new_width)
        # Adjust the dropdown's width and position
        self.dropdown_menu.setFixedWidth(new_width)
        if self.dropdown_menu.y() > 40:
            self.dropdown_menu.move(0, 40)
    
class CalendarDayPage(QWidget):
    pass
    
class TppGui(QMainWindow):
    timer_exc = Signal()
    
    @staticmethod
    def setup(db):
        log("Setup working")
        app = QApplication(sys.argv)
        app.setStyle("Fusion")
        gui = TppGui(db=db)
        return (app, gui)
    
    @staticmethod
    def start(app, gui):
        gui.show()
        app.exec()
        return (app, gui)
    
    def __init__(self, db, parent=None):
        super().__init__(parent)
        if not db:
            return
        else:
            self.db = db
        self.setGeometry(*(100, 60, 634, 402))
        self.setWindowTitle("Tutoring Placement Program")
        self.setWindowTitle("TPP | V0.1.0")
        self.setWindowIcon(QIcon("dalle2bgr.png"))
        
        self.setup_gui()
        self.connect_signals()
        
        self.system = env.System()
        self.theme = ""
        self.update_theme()
        
        self.timer = QTimer(self)
        self.timer.start(500)
        self.timer.timeout.connect(self.timer_tick)
        
    def setup_gui(self):
        self.stacked_widget = QStackedWidget()
        
        # Set the main widget as the stacked widget
        self.setCentralWidget(self.stacked_widget)
        
        # Initialize the pages
        self.login_register_page = LoginRegisterPage()
        self.calendar_page = CalendarPage(self.db)
        #self.calendar_day_page = CalendarDayPage()
        
        # Add the pages to the stack
        self.stacked_widget.addWidget(self.login_register_page)
        self.stacked_widget.addWidget(self.calendar_page)
        #self.stacked_widget.addWidget(self.calendar_day_page)
        
        # Logic to switch the pages based on a db state
        if 0:#self.db.get.logged_in():
            self.stacked_widget.setCurrentIndex(1)
        else:
            self.stacked_widget.setCurrentIndex(0)
            
    def connect_signals(self):
        self.login_register_page.loginWidget.anonUserClicked.connect(self.switch_sides)
        
    def resizeEvent(self, event):
        widget = self.stacked_widget.currentWidget()
        widget.resize_event(self.width())
        super().resizeEvent(event)
        
    def closeEvent(self, event):
        reply = QMessageBox.question(self, 'Question',
            "Are you sure to quit?", QMessageBox.Yes, QMessageBox.No)
        if reply == QMessageBox.Yes:
            event.accept()
        else:
            event.ignore()
            
    def switch_sides(self):
        if self.stacked_widget.currentIndex() == 0:
            self.stacked_widget.setCurrentIndex(1)
        else:
            self.stacked_widget.setCurrentIndex(0)
            
    def update_content(self): # Automatically update the calendar, when the day changes
        date = QDate.currentDate() # Maybe not do that as it takes a lot of computing power?
        if self.stacked_widget.widget(1).calendarWidget.base_date != date:
            self.stacked_widget.widget(1).calendarWidget.reload_calendar(date)
            
    def update_theme(self):
        if self.system.get_windows_theme().lower() != self.theme:
            self.theme = self.system.get_windows_theme().lower()
            is_win_11 = int(self.system.get_major_os_version()) == 11
            if self.theme == "light":
                if is_win_11:
                    theme = Normal(ThemeColor.LIGHT)
                    self.setPalette(theme.get_palette())
                else:
                    theme = Classic(ThemeColor.LIGHT)
                    self.setStyleSheet(theme.get_style_sheet())
            elif self.theme == "dark":
                if is_win_11:
                    theme = Normal(ThemeColor.DARK)
                    self.setPalette(theme.get_palette())
                else:
                    theme = Classic(ThemeColor.DARK)
                    self.setStyleSheet(theme.get_style_sheet())
                    
    def timer_tick(self):
        self.update_content()
        self.update_theme()

def start(parent):
    app = QApplication(sys.argv)
    app.setStyle("Fusion")
    viewer = TppGui()
    viewer.show()
    sys.exit(app.exec())
    return viewer
