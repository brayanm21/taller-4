# include <iostream>
# include <stdlib.h>
# include <stdio.h>
#include <vector>
#include <string>
#include <sstream>

/* Insertion Sort (C++): Este es un algoritmo de ordenamiento basado en comparaciones
en cada posición del arreglo. Este algoritmo funciona bajo una estrategia de
programación dinámica, en donde se trabaja el arreglo como varios sub-arreglos, los
cuales crecen en tamaño cada vez que están ordenados; de esta forma, cada vez que
se agregue un elemento a la lista, este solo debe ser ubicado una vez, debido a que el
segmento de forma local está ordenado (ver Algorithm 2). Este algoritmo no se recomienda
para grandes cantidades de datos a ordenar, ya que su orden de crecimiento
está dado por T(n2). */

using namespace std;


// organizamos el arreglo en insertion sort
	void InsertionSort(int A[],int n)
{
// variables para usar
    int i,index,x; 

    for(i=0;i<=n-1;i++) 
    {
// hacemos que el auxiliar sea igual a la posicion de el arreglo
        x=A[i]; 
        index=i-1;   
        
// va hacia la derecha meintras aun existan posiciones y x sea menor que los de su izquierda
        while((index>=0) && (x<A[index])) 
        {                                 
            A[index+1]=A[index];
            index=index-1;
        }
        A[index+1]=x; // ponemos al auxiliar en su sitio

    }



}
// utilizamos para imprimir el arreglo original	
void imprimir(int A[],int n){
		
	for(int i =0; i<n; i++){
		cout<<"["<< A[i]<<"]";
	}
	}
	
int main()
{
// ingresamos los datos del arreglo	
string str;
    vector<int> vect;
    int contador;
    int i, j , temp; 
    int n;
    cout<<"tamaño del arreglo: ";cin>>n; 
	int arreglo[n]; 
	
    cout << "ingrese datos separados por comas(,) \n";
    cin >> str;
    stringstream ss(str);
    
    

//ignoramos los datos que esten separados por comas
    while (ss >> i){
        vect.push_back(i);
        if (ss.peek() == ','){
		
            ss.ignore();}
	
    }

	
// llenamos el arreglo con los datos sin comas	
    for (i=0; i< vect.size(); i++){
    	arreglo[i] = vect.at(i);
    	 
	}
// imprimimos arreglo original
	cout<<"su arreglo es :";
	
	imprimir(arreglo,n);
	
	cout<<"\n";
	
//imprimos arreglo organizado por buble
	cout<<"la organizacion correcta es";
	InsertionSort(arreglo,n);
	imprimir(arreglo,n);
	
	}
