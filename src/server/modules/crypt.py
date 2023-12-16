from cryptography.fernet import Fernet
from typing import Tuple, Optional
import hashlib
import base64
import bcrypt

def pad_key(key: str) -> str:
    """Function to pad the key to 32 bytes

    Args:
        key (str): Key to be padded

    Returns:
        str: The padded key
    """    
    sha256 = hashlib.sha256()
    sha256.update(key.encode())
    return base64.urlsafe_b64encode(sha256.digest())

def encrypt(key: str, plain: str) -> str:
    """Encrypt a given plain string with a given key using Fernet

    Args:
        key (str): The key for encryption
        plain (str): The plain string to be encrypted

    Returns:
        str: The encrypted plain string
    """
    key = pad_key(key)
    cipher_suite = Fernet(key)
    encrypted_plain = cipher_suite.encrypt(plain.encode())
    return encrypted_plain.decode()

def decrypt(key: str, cipher: str) -> str:
    """Decrypt a given cipher string with a given key using Fernet

    Args:
        key (str): The key for decryption
        cipher (str): The cipher string to be decrypted

    Returns:
        str: The decrypted cipher string
    """    
    key = pad_key(key)
    cipher_suite = Fernet(key)
    decrypted_cipher = cipher_suite.decrypt(cipher.encode())
    return decrypted_cipher.decode()

def hash_password(password: str, salt: Optional[str]=None) -> Tuple[str, str]:
    """Hash a given password with an optional salt using bcrypt

    Args:
        password (str): The password to be hashed
        salt (Optional[str], optional): Salt to be used in the hashing password, get's generated new if None is passed. Defaults to None.

    Returns:
        Tuple[str, str]: (The hashed password, the salt that was passed or generated if None)
    """    
    salt = salt or bcrypt.gensalt()
    return bcrypt.hashpw(password.encode('utf-8'), salt), salt
