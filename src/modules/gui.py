from PySide6.QtWidgets import (QWidget, QMainWindow, QApplication)
from PySide6.QtCore import Qt, Signal
from PySide6.QtGui import QIcon
import sys

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
