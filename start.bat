@echo off
py -3.9 -m pip install -r ./src/client/dev-requirements.txt
py -3.9 -m pip install -r ./src/server/dev-requirements.txt
py -3.9 fix-apt.py

REM Start the server
start cmd /k py -3.9 ./src/server/main.py

REM Start the client
start cmd /k py -3.9 ./src/client/main.py
