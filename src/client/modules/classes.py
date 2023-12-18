# Contains dataclasses
from PySide6.QtWidgets import QLayout, QLayoutItem
from PySide6.QtCore import QDate, Signal, QTime, QDateTime, Qt, QRect, QSize, QPoint, QObject
from PySide6.QtGui import QColor
from typing import List, Dict, Union, Tuple, Optional
import hashlib

def classes_init(logger):
    global log
    log = logger.log
    
class QMoment:
    def __init__(self, date: Union[QDate, str], time: Union[QTime, str]):
        if isinstance(date, str): # Date
            date = QDate.fromString(date, "yyyy.MM.dd")
        elif isinstance(date, QDate):
            pass # No modification needed
        else:
            raise TypeError(f"Cannot convert {date.__class__} to QDate.")
        
        if isinstance(time, str): # Time
            time = QTime.fromString(time, "HH:mm")
        elif isinstance(time, QTime):
            pass # No modification needed
        else:
            raise TypeError(f"Cannot convert {date.__class__} to QTime.")
        self.datetime = QDateTime(date, time)
        
    @staticmethod
    def from_datetime(datetime: QDateTime) -> 'QMoment':
        date = datetime.date()
        time = datetime.time()
        return QMoment(date, time)
    
    def toString(self) -> str:
        return self.datetime.toString("yyyy.MM.dd HH:mm:ss")
    
    @staticmethod
    def fromString(string: str) -> 'QMoment':
        datetime = QDateTime.fromString(string=string, format="yyyy.MM.dd HH:mm:ss")
        return QMoment.from_datetime(datetime)
    
    def get_next_moment(self, hours: int, minutes: int, seconds: int) -> 'QMoment':
        next_time = ((hours * 60) * 60) + (minutes * 60) + seconds
        next_datetime = self.datetime.addSecs(next_time)
        return QMoment.from_datetime(next_datetime)
    
    def get_date(self) -> QDate:
        return self.datetime.date()
    
    def set_date(self, new_date: Union[QDate, str]):
        if not isinstance(new_date, QDate) and not isinstance(new_date, str):
            raise TypeError(f"Cannot convert {new_date.__class__} to QDate.")
        elif isinstance(new_date, str):
            new_date = QDate.fromString(new_date, "yyyy.MM.dd")
        self.datetime.setDate(new_date)
        
    def get_time(self) -> QTime:
        return self.datetime.time()
    
    def set_time(self, new_time: Union[QTime, str]):
        if not isinstance(new_time, QTime) and not isinstance(new_time, str):
            raise TypeError(f"Cannot convert {new_time.__class__} to QTime.")
        elif isinstance(new_time, str):
            new_time = QTime.fromString(new_time, "HH:mm")
        self.datetime.setTime(new_time)
        
    def time_difference(self, other_moment: 'QMoment') -> Tuple[int, int, int, int]:
        seconds_difference = self.datetime.secsTo(other_moment.datetime)
        
        # Converting seconds into other units (not by me)
        days = seconds_difference // (60 * 60 * 24)
        hours = (seconds_difference % (60 * 60 * 24)) // (60 * 60)
        minutes = (seconds_difference % (60 * 60)) // 60
        seconds = seconds_difference % 60
        
        return (days, hours, minutes, seconds)
    
class Event:
    """Class for identifying with the main event and basic logic."""
    def __init__(self, title: str=None, desc: str=None, date: str=None, time: str=None, duration: str=None):
        self._title = title or "Default title"
        self._desc = desc or "Default description"

        date = date or "2000.12.30"

        # Convert date strings to QTime objects
        time = time or "24:00"
        duration = duration or "08:00"
        
        if len(duration) < 9:
            duration += ":00"
            
        self._start_moment = QMoment(date=date, time=time)
        self._end_moment = self._start_moment.get_next_moment(*self.get_duration(duration_str=duration))
        
        # Calculate hash based on other data, this is unique, even if a date and/or time is included in e.g. the title
        self.update_hash()
        
        self._selected = False
        self.color = QColor(0, 0, 0)
        
    def get_duration(self, duration_str: str) -> Tuple[int, int, int]:
        return tuple(int(x) for x in duration_str.split(":"))[:3]
    
    def update_hash(self): # It's okay to use the new getter here, as only the new setter rehashes
        hash_input = f"{self.title}{self.desc}{self._start_moment.toString()}{self._end_moment.toString()}"
        self.hash = hashlib.sha256(hash_input.encode()).hexdigest()
        
    @property
    def title(self):
        return self._title
    
    @title.setter
    def title(self, value):
        self._title = value
        self.update_hash()
        
    @property
    def desc(self):
        return self._desc
    
    @desc.setter
    def desc(self, value):
        self._desc = value
        self.update_hash()
        
    @property
    def date(self):
        return self._start_moment.get_date()

    @date.setter
    def date(self, value):
        self._start_moment.setDate(QDate.fromString(value, "yyyy.MM.dd"))
        self.update_hash()
        
    @property
    def end_date(self):
        return self._end_moment.get_date()

    @end_date.setter
    def end_date(self, value):
        self._end_moment.setDate(QDate.fromString(value, "yyyy.MM.dd"))
        self.update_hash()

    @property
    def duration(self):
        return self._start_moment.time_difference(self._end_moment)

    @duration.setter
    def duration(self, value: str):
        if len(value) != 9:
            value += ":00"
        self._start_moment.get_next_moment(*self.get_duration(value))
        self.update_hash()
        
    def get_date_coverage(self, date: Union[QDate, str]) -> Tuple[Optional[Tuple[QTime, bool]], Optional[Tuple[QTime, bool]]]:
        if not isinstance(date, QDate) and not isinstance(date, str):
            raise TypeError("Date must be a QDate or a string.")
        elif isinstance(date, str):
            date = QDate.fromString(date, "yyyy.MM.dd")
            
        # Check if the date falls within the event's duration
        if date < self._start_moment.get_date() or date > self._end_moment.get_date():
            log("Event doesn't cover this date.")
            return (None, None)
        
        start_time = QTime(0, 0) # Default to the start of the day, if the event doesn't start on the current date
        end_time = QTime(23, 59, 59) # Default to the end of the day, if the event doesn't end on the current_date
        past_look = False
        goes_on = False
        
        # If the event starts on this date, use its start time
        if date == self._start_moment.get_date():
            start_time = self._start_moment.get_time()
        else:
            past_look = True
            
        # If the event end on this date, use it's end time
        if date == self._end_moment.get_date():
            end_time = self._end_moment.get_time()
        else:
            goes_on = True
            
        if start_time == end_time == QTime.fromString("00:00", "HH:mm"): # If the event goes til the evening (to 00:00 on the current day, don't return it)
            return (None, None)
        
        return ((start_time, not past_look), (end_time, not goes_on))
    
    @property
    def start_time(self):
        return self._start_moment.get_time()

    @start_time.setter
    def start_time(self, value: str):
        return
    
    @property
    def end_time(self):
        return self._end_moment.get_time()

    @end_time.setter
    def end_time(self, value: str):
        return
    
    @property
    def selected(self):
        return self._selected
    
    @selected.setter
    def selected(self, value):
        self._selected = value
        # Emit signal to redraw event
        
    def __repr__(self) -> str:
        return (f"""
        Event(title={self.title}
            desc={self.desc}
            date={self.date.toString()}
            start_moment={self._start_moment.toString()}
            end_moment={self._end_moment.toString()}
            hash={self.hash[:12]}...)""")
        
    def __hash__(self) -> int: # For dict
        return hash(f"{self.title}{self.desc}{self._start_moment.toString()}{self._end_moment.toString()}")
    
    def __eq__(self, other) -> bool:
        if not isinstance(other, Event):
            return NotImplemented
        return ((self.hash) == (other.hash))
    
class Day(QObject):
    """Class for keeping track of the days."""
    events_changed = Signal()
    
    def __init__(self, date: QDate, events: Optional[List[Event]]=None, event_positions: Optional[Dict[Event, tuple]]=None):
        super(Day, self).__init__()
        self.date = date or QDate.currentDate()
        self.events = events or []
        self.event_positions = event_positions or {}
        
        self.is_past = self.date < QDate.currentDate()
        self.is_current_day = self.date == QDate.currentDate()
        self.is_weekday = not self.date.dayOfWeek() >= 6 # > 5
        
    def add_event(self, event: Event):
        if len(self.events) < 5:
            self.events.append(event)
            self.calculate_event_positions()
        else:
            log("Days can only support a maximum of 5 events")
            
    def remove_event(self, event: Event):
        if event in self.events:
            self.events.remove(event)
            self.calculate_event_positions()
            
    def replace_events(self, new_events: List[Event]):
        if len(new_events) <= 5:
            self.events = new_events
            self.calculate_event_positions()
        else:
            log("Days can only support a maximum of 5 events")

    def clear_events(self):
        self.events.clear()
        self.event_positions.clear()
        self.events_changed.emit() # Normally done by calculate_event_positions
        
    def calculate_event_positions(self, total_width: int=80):
        events_len = len(self.events)
        
        if not events_len:
            return
        
        daily_events = sorted(self.events, key=lambda e: e._start_moment.datetime)
        
        positions = {}
        startX = 0
        len_daily_events = len(daily_events)
        widths = [total_width // len_daily_events for _ in range(len_daily_events)]
        
        difference = total_width - sum(widths)
        
        for i in range(difference):
            widths[i % len_daily_events] += 1
            
        for i, event in enumerate(daily_events):
            width = widths[i]
            positions[event] = (startX, width)
            startX += width
            
        self.event_positions = positions
        self.events_changed.emit()
        
    def new_calculate_event_positions(self, total_width: int=80):
        return
        def lloc(message, no_wait=False):
            if self.date == QDate.fromString("2023.12.25", "yyyy.MM.dd"):
                log(message)
                if not no_wait: input()
        events_len = len(self.events)
        
        if not events_len:
            return
        
        daily_events = sorted(self.events, key=lambda e: e._start_moment.datetime)
        
        positions = {}
        events_len = len(set([event.hash for event in self.events]))
        #lloc(events_len)
        #lloc(self.events)
        while len(positions) != events_len:
            #log(len(positions), events_len, len(self.events))
            overlapping_events = []
            for event in daily_events:
                lst = [e for e in daily_events 
                                            if (e.end_time >= event.start_time or 
                                                    e.start_time <= event.end_time)] + [event]
                #log(event.hash)
                srt_lst = sorted(lst, key=lambda e: hash(e))
                if srt_lst not in overlapping_events: # Calculate the width and startX
                    overlapping_events.append(srt_lst)
                    width = total_width // len(lst)
                    startX = 0
                    for event in lst:
                        if event in positions and sum(positions[event]) >= total_width // 2:
                            pass # 
                        elif event in positions and sum(positions) <= total_width // 2:
                            pass
                        else:
                            positions[event] = (startX, width)
                            startX += width

        self.event_positions = positions

class QFlowLayout(QLayout): # Not by me
    """
    A custom flow layout class that arranges child widgets horizontally and wraps as needed.
    """

    def __init__(self, parent=None, margin=0, hSpacing=6, vSpacing=6):
        super().__init__(parent)
        self.setContentsMargins(margin, margin, margin, margin)
        self.hSpacing = hSpacing
        self.vSpacing = vSpacing
        self.items = []

    def addItem(self, item):
        self.items.append(item)

    def horizontalSpacing(self) -> int:
        return self.hSpacing

    def verticalSpacing(self) -> int:
        return self.vSpacing

    def count(self) -> int:
        return len(self.items)

    def itemAt(self, index) -> QLayoutItem:
        if 0 <= index < len(self.items):
            return self.items[index]
        return None

    def takeAt(self, index) -> QLayoutItem:
        if 0 <= index < len(self.items):
            return self.items.pop(index)
        return None

    def expandingDirections(self) -> Qt.Orientations:
        return Qt.Horizontal | Qt.Vertical

    def hasHeightForWidth(self) -> bool:
        return True

    def heightForWidth(self, width: int) -> int:
        return self.doLayout(QRect(0, 0, width, 0), testOnly=True)

    def setGeometry(self, rect: QRect):
        super().setGeometry(rect)
        self.doLayout(rect, testOnly=False)

    def sizeHint(self) -> QSize:
        return self.calculateSize()

    def minimumSize(self) -> QSize:
        return self.calculateSize()

    def calculateSize(self) -> QSize:
        size = QSize()
        for item in self.items:
            size = size.expandedTo(item.minimumSize())
        size += QSize(2 * self.contentsMargins().top(), 2 * self.contentsMargins().top())
        return size

    def doLayout(self, rect: QRect, testOnly: bool) -> int:
        x, y, lineHeight = rect.x(), rect.y(), 0

        for item in self.items:
            wid = item.widget()
            spaceX, spaceY = self.horizontalSpacing(), self.verticalSpacing()
            nextX = x + item.sizeHint().width() + spaceX
            if nextX - spaceX > rect.right() and lineHeight > 0:
                x = rect.x()
                y += lineHeight + spaceY
                nextX = x + item.sizeHint().width() + spaceX
                lineHeight = 0

            if not testOnly:
                item.setGeometry(QRect(QPoint(x, y), item.sizeHint()))

            x = nextX
            lineHeight = max(lineHeight, item.sizeHint().height())

        return y + lineHeight - rect.y()
