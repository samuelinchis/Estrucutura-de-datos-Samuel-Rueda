#!/usr/bin/env python3
#Samuel Rueda Sanchez

#Desde este puto empieza el punto 1
mat = [[11, 23, 76, 34, 11],
       [14, 30, 92, 30, 101],
       [12, 45, 58, 92, 22],
       [74, 56, 49, 56, 100],
       [99, 5, 28, 47, 99]]

def verificarDiagonales(matriz):
    i = 0
    f = -1
    for element in matriz:
        if element[i] == element[f]:
            i += 1
            f -= 1
        else:
            return False
    return True
print(verificarDiagonales(mat))
#Final del punto 1


#inicio del punto numero 2
def esCapicua(main):
    reverso = -1
    for elemento in main:
        if elemento != main[reverso]:
            return False
        else:
            reverso -= 1
    return True
print(esCapicua([42,12,90,90,12,45]))
#fin del punto numero 2


#inicio del punto 3.a 
def diferenciaListas(listaA, listaB):
    DiferenLista = []
    for referencia in listaA:
        igualdad = 0
        for element in listaB:
            if element == referencia:
                igualdad += 1
                listaB.remove(element)
        if igualdad == 0:
            DiferenLista.append(referencia)
    return(DiferenLista)
print(diferenciaListas([40, 10, 22, 12, 33, 33, 33], [41, 22, 31, 15, 13, 12, 33, 19]))
#fin del punto 3.a


#inicio del punto 3.b
def puntoTresB():
    ejecucionees = int(input())
    for numeroejecuciones in range(ejecucionees):
        #para la primera lista
        listaA = [int(i) for i in input().split()]
        listaB = [int(i) for i in input().split()]
        listaA.pop(0)
        listaB.pop(0)
        conexion = diferenciaListas(listaA, listaB)
    return conexion
print(puntoTresB())
#falta conectar esta parte con la 3.a
#Fin del punto 3.b


#inicio del punto 4
def parteDos(valor):
    valorDigito = 0
    str(valor)
    for c in len(valor):
        valorDigito += int(valor[c])
        multiplo = 0
        for divi in range(2,valorDigito):
            if valorDigito % divi == 0:
                multiplo += 1
            if multiplo < 1:
                print("Numero primo los cuales generan otro numero"
                      "primo al sumar sus digitos\n",valorDigito)
def mostrarPrimos(numero):
    for primo in range(2,numero):
        contador0s = 0
        divisor = 2
        while divisor < primo:
            if primo % divisor == 0:
                contador0s += 1
            divisor += 1
        if contador0s < 1:
            print ("-->",primo,",")            
mostrarPrimos(100)        
#Falta conectar de la suma de digitos
#final del punto 4

#inicio del punto 5
disp = {0 : [(0, 1), (5, 4), (7, 5)],
        1 : [(6, 4), (7, 7)],
        2 : [(0, 2), (1, 2), (4, 9), (6, 1)],
        4 : [(2, 8), (3, 1), (5, 7)],
        6 : [(0, 3), (5, 6), (7, 2)],
        7 : [(0, 4), (1, 4), (2, 7)],
        8 : [(1, 9), (3, 8), (5, 7), (7, 6)]}
def sumarValoresMatriz(disp,parejas):
#fin del punto 5

