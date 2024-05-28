def collatz(numero):
    if numero%2:
        return(3*numero+1)
    else:
        return(numero/2)
maximo = 0
import sys
print(sys.version)
for i in range(3,100001):
    n = i
    terminos = 0
    while(collatz(n) != 1):
        n = collatz(n)
        terminos += 1
    if terminos > maximo:
        maximo = terminos
        resultado = i
        print(i)
