@echo off
nic_compile --src=./src/ --out=./build/ --inLibs=PySide6 --enablePlugins=pyside6 --p=2 --extraArgs=select-dll,urllib3-module,hmac-module,email-module
pause
