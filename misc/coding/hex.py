from Crypto.Util.number import long_to_bytes,bytes_to_long 
flag="flag{123}" 
print (bytes_to_long(flag))
print (long_to_bytes(bytes_to_long(flag)))
