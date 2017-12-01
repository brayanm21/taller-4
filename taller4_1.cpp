# include <iostream>
# include <stdlib.h>
# include <stdio.h>
#include <vector>
#include <string>
#include <sstream>

/* Bubble Sort (C++): Este es uno de los algoritmos más simples de ordenamiento.
Este algoritmo se basa en la comparación de elementos, particularmente entre
parejas adyacentes, y si la pareja a comparar no está ordenada, simplemente se intercambian;
el algoritmo concluye cuando al hacer todo el recorrido, y hacer todas
las comparaciones entre vecinos adyacentes, no se requieren realizar más intercambios
(ver Algorithm 1). Este algoritmo no es recomendable para arreglos con gran cantidad
de datos, ya que ta */

using namespace std;


// organizamos el arreglo en bublesort
	void bublesort(int A[],int n){
		int swap;
		for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])  
            {
                swap=A[j]; 
                A[j]=A[i]; 
                A[i]=A[j];  
                A[i]=swap; 
                
            }
       }cout<<"["<<A[i]<<"]";
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
    int  temp; 
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
	bublesort(arreglo,n);
	
	
	}
