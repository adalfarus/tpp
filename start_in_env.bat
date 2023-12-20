@echo off
if not exist "src\client\env\" mkdir "src\client\env\"
py -m venv ./src/client/env
call src\server\create_env.bat

REM Shouldn't work for python 3.9 due to not being able to access the env of the server
call src\server\install_requ_into_env.bat
call src\server\run_in_env.bat

call src\client\env\Scripts\activate.bat
py -3.9 -m pip install -r ./src/client/dev-requirements.txt
py -3.9 fix-apt.py

REM Start the client
py ./src/client/main.py
