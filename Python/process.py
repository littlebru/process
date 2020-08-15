# Python code to create child process
import os from datetime
import datetime


# Criando uma cópia do processo
n = os.fork()

# Validação se o processo é p-filho ou p-pai (No caso é p-pai)

if n >0:
    print("Parent process id is :", os.getpid())

# Se n for menor que 0 é o p-filho (No caso é p-filho)

else: print("Child process id is :", os.getpid())

print(datetime.now())   #imprime a data atual
