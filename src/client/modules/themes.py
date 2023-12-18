from PySide6.QtGui import QPalette, QColor
from PySide6.QtCore import Qt
from enum import Enum
import sys

def themes_init(logger):
    global log
    log = logger.log

class ThemeColor(Enum):
    LIGHT = 0
    DARK = 1
    RED = 2
    GREEN = 3
    BLUE = 4

class Theme:
    def __init__(self, color: ThemeColor):
        self.style_sheet = ""
        self.style_sheet_colors = {}
        
        self.palette = None
        
        self.color = color
        self.update_color()
        
    @property
    def theme_color(self):
        return self.color
    
    @theme_color.setter
    def theme_color(self, value):
        self.update_color(value)
        
    def update_color(self, new_color=None):
        color = new_color or self.color
        if color == ThemeColor.LIGHT:
            self.set_style_sheet("")
            self.set_palette(None)
        elif color == ThemeColor.DARK:
            self.set_style_sheet("")
            self.set_palette(None)
        else: log(f"Theme Color {color} isn't supported by {self.__class__}. Please choose a different one."); sys.exit(1)
        self.color = color
        
    def get_style_sheet(self):
        return self.style_sheet
    
    def set_style_sheet(self, new_ss):
        self.style_sheet = new_ss
    
    def get_palette(self):
        return self.palette
    
    def set_palette(self, new_palette):
        self.palette = new_palette

class Normal(Theme):
    def __init__(self, color: ThemeColor):
        super().__init__(color)
        
    def update_color(self, new_color=None):
        color = new_color or self.color
        if color == ThemeColor.LIGHT:
            # Updated CSS for a cleaner white style
            # Updated CSS with corrected hover effect
            self.set_style_sheet("""
            QPushButton {
                background-color: white;
                color: black;
                border: 1px solid #ccc;
                border-radius: 10px;
                padding: 10px;
            }
            QPushButton:hover {
                border-color: black;
            }            
            QGroupBox {
                border: 1px solid #ccc;
                border-radius: 10px;
                padding: 10px;
                margin-top: 1em;
            }
            QLabel {
                color: black;
                font-size: 20px;             
            }
            QFrame#openFrame {
                background-color: white;
                border: 2px solid #ccc;
                border-radius: 20px;
            }
            QToolButton {
                border: none;
                background-color: #ccc;
                border-radius: 10px;
                margin: 5px;
                padding: 5px;
            }
            QToolButton:hover {
                background-color: #bbb;
            }            
            QFrame {
                border: 2px solid #ccc;
                border-radius: 20px;
                background-color: white;
            }

            QLineEdit {
                font-size: 20px;
                border: 2px solid #ccc;
                border-radius: 20px;
                background-color: white;          
            }

            QComboBox {
                font-size: 20px;
                background: transparent;
            }
            QComboBox QListView {
                border-radius: 20px;
            }
            QComboBox QListView::item {
                font-size: 20px;
            }
            
            QTabWidget::pane {
                border: 1px solid #ccc;
                background-color: #ccc;             
                border-radius: 20px;
                border-top-left-radius: 0px;             
            }
            QTabBar::tab {
                border: 1px solid #ccc;                 
                border-top-left-radius: 7px;
                border-top-right-radius: 7px;
                min-width: 8ex;
                padding: 5px;             
            }
            QTabBar::tab:selected {
                background-color: #ccc;
            }
                             
            QScrollArea {
                border: transparent;
                border-radius: 20px;
                background: #f0f0f0;
            }            
            QScrollArea QWidget {
                border-radius: 20px;
            }                 
            QScrollArea QScrollBar:vertical {
                border: none;
                background: #f0f0f0;
                width: 15px;
                border-top-right-radius: 10px;
                border-bottom-right-radius: 10px;
                margin: 12px 0 12px 0;
            }
            QScrollArea QScrollBar::handle:vertical {
                background: #aaa;
                min-height: 20px;
                border-radius: 7px;                  
            }
            QScrollArea QScrollBar::add-line:vertical, QScrollArea QScrollBar::sub-line:vertical {
                border: none;
                background: none;
            }
            QScrollArea QScrollBar::add-page:vertical, QScrollArea QScrollBar::sub-page_vertical {
                background: none;
            }

            QScrollArea QScrollBar:horizontal {
                border: 2px solid #ccc;
                background: #f0f0f0;
                height: 15px;
                margin: 0 15px 0 15px;
            }
            QScrollArea QScrollBar::handle:horizontal {
                background: #aaa;
                min-width: 20px;
            }
            QScrollArea QScrollBar::add-line:horizontal, QScrollArea QScrollBar::sub-line:horizontal {
                border: none;
                background: none;
            }                 
        """)
            palette = QPalette()
            palette.setColor(QPalette.ColorRole.Window, QColor(230, 230, 230))
            palette.setColor(QPalette.ColorRole.WindowText, Qt.GlobalColor.black)
            palette.setColor(QPalette.ColorRole.Base, QColor(245, 245, 245))
            palette.setColor(QPalette.ColorRole.AlternateBase, QColor(235, 235, 235))
            palette.setColor(QPalette.ColorRole.ToolTipBase, Qt.GlobalColor.white)
            palette.setColor(QPalette.ColorRole.ToolTipText, Qt.GlobalColor.black)
            palette.setColor(QPalette.ColorRole.Text, Qt.GlobalColor.black)
            palette.setColor(QPalette.ColorRole.Button, QColor(220, 220, 220))
            palette.setColor(QPalette.ColorRole.ButtonText, Qt.GlobalColor.black)
            palette.setColor(QPalette.ColorRole.BrightText, Qt.GlobalColor.blue)
            palette.setColor(QPalette.ColorRole.Link, QColor(42, 130, 218))
            palette.setColor(QPalette.ColorRole.Highlight, QColor(42, 130, 218))
            palette.setColor(QPalette.ColorRole.HighlightedText, Qt.GlobalColor.white) # Use dark?
            self.set_palette(palette)
        elif color == ThemeColor.DARK:
            # Updated CSS with corrected hover effect
            # Changes to white style: white->black, black->white, #ccc->#424242, #bbb->#262626, #aaa -> #878787 and #f0f0f0 -> #a3a2a2
            self.set_style_sheet("""
            QWidget {
                background-color: #2e2e2e;
                color: #f0f0f0;
            }
            QPushButton {
                background-color: #424242;
                border: 1px solid #5e5e5e;
                border-radius: 10px;
                padding: 10px;
            }
            QPushButton:hover {
                border-color: #ffffff;
            }
            QGroupBox {
                border: 1px solid #5e5e5e;
                border-radius: 10px;
                padding: 10px;
                margin-top: 1em;
            }
            QLabel {
                color: white;
                font-size: 20px;             
            }
            QFrame#openFrame {
                background-color: black;
                border: 2px solid #5e5e5e;
                border-radius: 20px;
            }
            QToolButton {
                border: none;
                background-color: #424242;
                border-radius: 10px;
                margin: 5px;
                padding: 5px;
            }
            QToolButton:hover {
                background-color: #262626;
            }
            QFrame {
                border: 2px solid #424242;
                border-radius: 20px;
                background-color: black;
            }
            QLineEdit {
                font-size: 20px;
                border: 2px solid #5e5e5e;
                border-radius: 20px;
                background-color: black;                
            }
            QComboBox {
                font-size: 20px;
                background: #424242;
            }
            QComboBox QListView {
                border-radius: 20px;               
                background-color: #2e2e2e;
                background: transparent;
            }                      
            QComboBox QListView::item {
                background-color: transparent;           
            }
            
            QTabWidget::pane {
                border: 1px solid #5e5e5e;
                background-color: #5e5e5e;             
                border-radius: 20px;
                border-top-left-radius: 0px;             
            }
            QTabBar::tab {
                border: 1px solid #5e5e5e;                 
                border-top-left-radius: 7px;
                border-top-right-radius: 7px;
                min-width: 8ex;
                padding: 5px;             
            }
            QTabBar::tab:selected {
                background-color: #424242;
            }
                             
            QScrollArea {
                border: none;
                border-radius: 20px;
                background: #2e2e2e;
            }            
            QScrollArea QWidget {
                border-radius: 20px;
            }                 
            QScrollArea QScrollBar:vertical {
                border: none;
                background: #2e2e2e;
                width: 15px;
                border-top-right-radius: 10px;
                border-bottom-right-radius: 10px;
                margin: 12px 0 12px 0;
            }
            QScrollArea QScrollBar::handle:vertical {
                background: #444444; /*?1e1e1e*/
                min-height: 20px;
                border-radius: 7px;                  
            }
            QScrollArea QScrollBar::add-line:vertical, QScrollArea QScrollBar::sub-line:vertical {
                border: none;
                background: none;
            }
            QScrollArea QScrollBar::add-page:vertical, QScrollArea QScrollBar::sub-page-vertical {
                border: none;
                background: none;
            }

            QScrollArea QScrollBar:horizontal {
                border: 2px solid #ccc;
                background: #a3a2a2;
                height: 15px;
                margin: 0 15px 0 15px;
            }
            QScrollArea QScrollBar::handle:horizontal {
                background: #878787;
                min-width: 20px;
            }
            QScrollArea QScrollBar::add-line:horizontal, QScrollArea QScrollBar::sub-line:horizontal {
                border: none;
                background: none;
            }                 
        """)
            palette = QPalette()
            palette.setColor(QPalette.ColorRole.Window, QColor(53, 53, 53))
            palette.setColor(QPalette.ColorRole.WindowText, Qt.GlobalColor.white)
            palette.setColor(QPalette.ColorRole.Base, QColor(25, 25, 25))
            palette.setColor(QPalette.ColorRole.AlternateBase, QColor(53, 53, 53))
            palette.setColor(QPalette.ColorRole.ToolTipBase, Qt.GlobalColor.black)
            palette.setColor(QPalette.ColorRole.ToolTipText, Qt.GlobalColor.white)
            palette.setColor(QPalette.ColorRole.Text, Qt.GlobalColor.white)
            palette.setColor(QPalette.ColorRole.Button, QColor(53, 53, 53))
            palette.setColor(QPalette.ColorRole.ButtonText, Qt.GlobalColor.white)
            palette.setColor(QPalette.ColorRole.BrightText, Qt.GlobalColor.red)
            palette.setColor(QPalette.ColorRole.Link, QColor(42, 130, 218))
            palette.setColor(QPalette.ColorRole.Highlight, QColor(42, 130, 218))
            palette.setColor(QPalette.ColorRole.HighlightedText, Qt.GlobalColor.black)
            self.set_palette(palette)
        else: log(f"Theme Color {color} isn't supported by {self.__class__}. Please choose a different one."); sys.exit(1)
        self.color = color
        
class Classic(Theme):
    def __init__(self, color: ThemeColor):
        super().__init__(color)
        
    def update_color(self, new_color=None):
        color = new_color or self.color
        if color == ThemeColor.LIGHT:
            self.set_style_sheet("""
            QWidget {
                color: rgb(0, 0, 0);
                background-color: #f0f0f0;           
            }
            QWidget:disabled {
                color: rgb(127, 127, 127);
                background-color: #e0e0e0;
            }               
            QWidget#transparentImage {
                background: transparent;
            }
            QWidget#sideMenu {
                background: rgb(232, 230, 230); /*#e8e6e6#ededed*/
            }
            QCheckBox{
                /*background-color: #e0e0e0;*/
                border-radius: 5px;           
            }
            QRadioButton{
                /*background-color: #e0e0e0;*/
                border-radius: 5px;           
            }
            QLabel {
                border-radius: 5px;
                padding: 5px;
                background-color: #d6d6d6; /*Before #d0d0d0, made it 6 lighter*/
            }
            ImageLabel {
                padding: 0;
                background-color: transparent;
            }
            QPushButton {
                border: 1px solid #808080;
                border-radius: 5px;
                padding: 5px;
                background-color: #e0e0e0;
            }
            QPushButton:hover {
                background-color: #c0c0c0;
            }
            /*QCheckBox::indicator:hover {
                background-color: rgba(192, 192, 192, 50);
            }*/
            QScrollArea QWidget {
                background-color: transparent;
            }
            QScrollArea QScrollBar:vertical {
                border: none;
                background: #f0f0f0;
                width: 15px;
                border-top-right-radius: 10px;
                border-bottom-right-radius: 10px;
            }
            QScrollArea QScrollBar::handle:vertical {
                background: #aaa;
                min-height: 20px;
                border-radius: 7px;
            }
            QScrollArea QScrollBar::add-line:vertical, QScrollArea QScrollBar::sub-line:vertical {
                border: none;
                background: none;
            }
            QScrollArea QScrollBar::add-page:vertical, QScrollArea QScrollBar::sub-page:vertical {
                background: none;
            }

            QScrollArea QScrollBar:horizontal {
                border: none;
                background: #f0f0f0;
                height: 15px;
                border-bottom-left-radius: 10px;
                border-bottom-right-radius: 10px;
            }
            QScrollArea QScrollBar::handle:horizontal {
                background: #aaa;
                min-height: 20px;
                border-radius: 7px;
            }
            QScrollArea QScrollBar::add-line:horizontal, QScrollArea QScrollBar::sub-line:horizontal {
                border: none;
                background: none;
            }
            QScrollArea QScrollBar::add-page:horizontal, QScrollArea QScrollBar::sub-page:horizontal {
                background: none;
            }
            
            QScrollArea QScrollBar::corner {
                background: #f0f0f0;
                border: none;
            }
        """)
            self.set_palette(None)
        elif color == ThemeColor.DARK:
            self.set_style_sheet("""
            QWidget {
                color: rgb(255, 255, 255);
                background-color: #333333;
            }
            QWidget:disabled {
                color: rgb(127, 127, 127);
                background-color: #444444;
            }
            QWidget#transparentImage {
                background: transparent;
            }
            QWidget#sideMenu {
                background: #383838; /*Lighter color for the side menu background (#393939)*/
            }
            QCheckBox{
                /*background-color: #444444;*/
                border-radius: 5px;           
            }
            QRadioButton{
                /*background-color: #444444;*/
                border-radius: 5px;           
            }
            QLabel {
                border-radius: 5px;
                padding: 5px;
                background-color: #4f4f4f; /*Before #555555, made it 6 darker*/
            }
            ImageLabel {
                padding: 0;
                background-color: transparent;
            }
            QPushButton {
                border: 1px solid #aaaaaa;
                border-radius: 5px;
                padding: 5px;
                background-color: #444444;
            }
            QPushButton:hover {
                background-color: #555555;
            }
            /*QCheckBox::indicator:hover {
                background-color: rgba(85, 85, 85, 50);
            }*/
            QScrollArea QWidget {
                background-color: transparent;
            }
            QScrollArea QScrollBar:vertical {
                border: none;
                background: #444444;
                width: 15px;
                border-top-right-radius: 10px;
                border-bottom-right-radius: 10px;
            }
            QScrollArea QScrollBar::handle:vertical {
                background: #666666;
                min-height: 20px;
                border-radius: 7px;
            }
            QScrollArea QScrollBar::add-line:vertical, QScrollArea QScrollBar::sub-line:vertical,
            QScrollArea QScrollBar::add-page:vertical, QScrollArea QScrollBar::sub-page:vertical {
                border: none;
                background: none;
            }
                           
            QScrollArea QScrollBar:horizontal {
                border: none;
                background: #444444;
                height: 15px;
                border-bottom-left-radius: 10px;
                border-bottom-right-radius: 10px;
            }
            QScrollArea QScrollBar::handle:horizontal {
                background: #666666;
                min-height: 20px;
                border-radius: 7px;
            }
            QScrollArea QScrollBar::add-line:horizontal, QScrollArea QScrollBar::sub-line:horizontal,
            QScrollArea QScrollBar::add-page:horizontal, QScrollArea QScrollBar::sub-page:horizontal {
                border: none;
                background: none;
            }
            QScrollArea QScrollBar::corner {
                background: #333333;
                border: none;
            }
        """)
            self.set_palette(None)
        else: log(f"Theme Color {color} isn't supported by {self.__class__}. Please choose a different one."); sys.exit(1)
        self.color = color
