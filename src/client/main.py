from aplustools.io.loggers import LogType, TypeLogger
from aplustools.utils.mappers import reverse_map
from aplustools.data.database import DBManager
from aplustools.io import environment as env
from typing import Optional, List
from pathlib import Path
import threading
import cProfile
import pstats
import time
import json
import sys
import re
import os

from modules.classes import classes_init
from modules.gui import gui_init, TppGui
from modules.themes import themes_init

env.set_working_dir_to_main_script_location()
__cwd__ = os.getcwd()
__program_name__ = "Tutoring Placement Program"
__version__ = "0.1.0.0"
__os__ = "Windows"
__os_version__ = "any"
__major_os_version__ = ["10", "11"]
__py_version__ = (3, 11)


class Settings:
    def __init__(self, new, db, overwrite_settings: Optional[dict]=None):
        self.new = new
        self.db = db
        self.settings = {
            "test": "True"
        }
        if overwrite_settings:
            self.settings.update(overwrite_settings)
        if self.new == True: self.setup_database(self.settings)
        self.fetch_data()

    def boolean(self, to_boolean: str) -> bool:
        return to_boolean.lower() == "true"
        
    def str_to_list(self, s: str) -> List[str]:
        return s.split(", ")

    def list_to_str(self, lst: List[str]) -> str:
        return ', '.join(lst)

    def get(self, key: str):
        value = self.settings.get(key)
        if key in ["test"]:
            return self.boolean(value)
        return value

    def set(self, key: str, value):
        if key in ["test"]:
            value = str(value)
        self.settings[key] = value
        self.update_data()
        
    def get_test(self):
        return self.get("provider")

    def set_test(self, value):
        self.set("provider", value)

    def setup_database(self, settings):
        # Define tables and their columns
        tables = {
            "settings": ["key TEXT", "value TEXT"]
        }
        # Code to set up the database, initialize password hashes, etc.
        for table_name, columns in tables.items():
            self.db.create_table(table_name, columns)
        for i in self.settings:
            self.db.update_info(i, "settings", ["key", "value"])
        
    def fetch_data(self):
        fetched_data = self.db.get_info("settings", ["key", "value"])
        for item in fetched_data:
            key, value = item
            self.settings[key] = value

    def update_data(self):
        for key, value in self.settings.items():
            self.db.update_info((key, value), "settings", ["key", "value"])

class MainApp:
    def __init__(self):
        log("Running ...", LogType.DEBUG)
        #self.gui = start(None) # Find a way to run gui as instance, instead of main
        #self.gui.changed.connect(self.check_changes)
        db_path = ".\\data.db"
        self.new = not os.path.isfile(db_path)
        self.db = DBManager(db_path)
        self.start_gui()
        #self.settings = Settings(self.new, self.db, {"test": "False"})
        #self.settings.set_test(True)
        #log(self.settings.get_test())
        
    def start_gui(self):
        app, gui = TppGui.setup("Stuff")
        gui.show()
        # Now we start profiling the execution of the app
        cProfile.runctx('app.exec()', globals(), locals(), filename='profile_output')
        return
        
    def setup_local_db(self):
        db_path = ".\\data.db"
        settings = Settings(db_path, {"test": "False"})
        #self.settings_data = settings.get_settings_data()
        #self.settings.set_test(True) # Old
        #log(self.settings.get_test())
        
    def setup_global_db(self):
        pass
    

profiler = cProfile.Profile()
profiler.enable()

def order_logs(logs_dir):
    if not logs_dir.is_dir(): os.mkdir(logs_dir)
    elif any([x == "latest.log" for x in os.listdir(logs_dir)]):
        name = logs_dir / "latest.log"
        with open(name, "r") as f: line = f.readline()
        try: date = re.search(r"[\[\(](\d{4}-\d{2}-\d{2})", line).group(1)
        except AttributeError: os.remove(name); return
        new_name = logs_dir / f"{date}.log"
        if not os.path.exists(new_name) and not os.path.exists(logs_dir / f"{date}-1.log"):
            os.rename(name, new_name)
        elif os.path.exists(new_name) and not os.path.exists(logs_dir / f"{date}-1.log"):
            os.rename(new_name, logs_dir / f"{date}-1.log")
            os.rename(name, logs_dir / f"{date}-2.log")
        else:
            def extract_num(name):
                match = re.search(r'(\d+)\.log$', name)
                return int(match.group(1)) if match else None
            names = [x for x in os.listdir(logs_dir) if date in x]
            new_number = max(extract_num(name) for name in names) + 1
            os.rename(name, logs_dir / f"{date}-{new_number}.log")

if __name__ == "__main__":
    sy, exit = env.System(), 0 # Check if environment is suitable
    if sy.get_os() != __os__: exit = 1
    if sy.get_os_version() != __os_version__ and __os_version__ != "any": exit = 1
    if not sy.get_major_os_version() in __major_os_version__: exit = 1
    if sys.version_info[:2] != __py_version__: exit = 1
    if exit: sys.exit(0)
    logs_dir = Path(os.path.abspath(".\\logs\\"))
    order_logs(logs_dir) # Making sure the logs are all in order
    with TypeLogger(logs_dir / "latest.log") as logger:
        reverse_map((gui_init, classes_init, themes_init), logger)
        global log
        log = logger.log
        MainApp()

profiler.disable()

# Save profile results to a file
profiler.dump_stats('profile_results.prof')

# Load profile results from file
p = pstats.Stats('profile_results.prof')

# Strip directory names from file paths in the profile output
p.strip_dirs()

# Sort the profile results by cumulative time spent in functions
p.sort_stats('cumulative')

# Print the top 10 functions that took the most time
p.print_stats(10)

# Alternatively, you can filter the results to include only functions
# that took more than a certain amount of time, for example, 0.1 seconds:
p.fcn_list = [key for key, value in p.stats.items() if value[3] > 0.1]  # value[3] is the cumulative time
p.print_stats()
