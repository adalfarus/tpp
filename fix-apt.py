import requests
from pathlib import Path
path = Path('\\'.join(requests.__file__.split("\\")[:-2]))
apt_path = path / "aplustools"
genpass_path = apt_path / "utils/genpass.py"
print(genpass_path)
with open(genpass_path, "w"):
    pass
print("Done!")
