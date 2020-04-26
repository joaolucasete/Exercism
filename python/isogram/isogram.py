import re
import time
from string import ascii_lowercase

def is_isogram_codando(string):
    string = re.sub("[^a-z]","",string.lower())
    return len(string) == len(set(string))

def is_isogram_nium(string):
  string = [i for i in string.lower() if i in ascii_lowercase]
  return len(string) == len(set(string))

inicio = time.time()
print(f"Resultado: {is_isogram_codando('thumbscrew-japingly')}")
fim = time.time()
print(f"Tempo codando: {fim - inicio}")

del inicio, fim

inicio = time.time()
print(f"Resultado: {is_isogram_nium('thumbscrew-japingly')}")
fim = time.time()
print(f"Tempo Nium: {fim - inicio}")