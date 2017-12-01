from random import randint

# Quick Sort (Python): Este es uno de los algoritmos de ordenamiento más eficientes
# que existe [suele utilizarse con grandes conjuntos de datos, y su eficiencia tanto en
# casos promedio como en el peor caso es de Θ(n ∗ Log(n))], el cual consiste en una
# estrategia de Divide y Vencerás debido a que siempre parte el arreglo en pequeños
# sub-arreglos, y este proceso se repite de manera recursiva. Particularmente, en este
# algoritmo se usa la noción de pivote para definir la construcción de los sub-arreglos, en
# donde los valores más pequeños que el pivote van al primer sub-arreglo, y los mayores
# van al segundo sub-arreglo (ver Algorithm 5). Tradicionalmente, se selecciona el primer
# elemento del arreglo como el pivote, y de igual manera se seleciona en los sub-arreglos
# mientras se está haciendo la recursividad; valga aclarar que el pivote, luego de hacer el
# proceso de partición, ya se encuentra en el lugar que tendrá finalmente en el conjunto
# ordenado.


def Quicksort(A):
    pivot = len(A) // 2  # seleccionamos la mitad o el pivote
    menor, igual, mayor = [], [], []  #inicilalizamos los datos

    for i in range(len(A)):  # ciclo para recorrer array
        if (A[i] < A[pivot]):
            menor.append(A[i]) #llamamos los datos
        elif (A[i] > A[pivot]):
            mayor.append(A[i]) #Llamamos los datos
        else:
            igual.append(A[i])

    if len(menor) > 1:
        menor = Quicksort(menor)  # lo utilizamos para que busca menores
    if len(mayor) > 1:  # organize
        mayor = Quicksort(mayor)
    return menor + igual + mayor  # lo utilizamos para que busque mayores


def main():

    ingresarDatos = (input("ingrese datos separados por comas(,)\n"))  # pedimos los datos

    DatosSinComa = ingresarDatos.split("," or ".")  # los usamos para que no utilize las comas o los puntos

    print ("arreglo normal")
    print (DatosSinComa)

    print ("arreglo organizado")
    print(Quicksort(DatosSinComa)) #imprimimos los datos orgnanozados sin comas


main()