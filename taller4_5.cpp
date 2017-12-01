#include <vector>
#include <string>
#include <sstream>
#include <iostream>

/*Lineal Search (C++): Este es un algoritmo bastante simple para realizar búsquedas
en un conjunto de datos. En este tipo de búsqueda, se hace una exploración secuencial
de todos los elementos comparando uno por uno con el valor que se desea buscar. Si se
llega a encontrar el elemento, se retorna la ubicación (índice) en donde se encuentra */

 using namespace std;

// con el numero seleccionado se va a buscar su posicion
 int LinealSearch (int A[],int tamanio, int cambio){  
 
 	for(int i = 0 ; i < tamanio ; i++){     
	              
 		if(cambio == A [i]){
 			
		 return i ;
		 
		 }}
	return -1;
 }
 
 // vamos a imprimir el arreglo
  int Organizar(int A[], int tamanio){
  	
  	for(int i = 0 ; i < tamanio ; i++){
  		
 		cout <<"["<<A[i]<<"]";
		 }}
 
 int main (){  
 	
 	int AregloTam; //la utilizamos para dar y asignar el tamaño a el arreglo
 	int AregloBus; //la utilizamos para asignar que numero deseamos encontrar
 	
 	// ingresamos los datos del arreglo
 	string str;
    vector<int> vect;
    
    cout <<"tamaño del arreglo: " << endl;
 	cin >> AregloTam;
 	
    int a[AregloTam];
    
    cout << "ingrese datos separados por comas(,) \n";
    cin >> str;
    
    stringstream ss(str);
    int i;

// con esto vamos a ingnorar todas las comas
    while (ss >> i){
    	
        vect.push_back(i);
        
        if (ss.peek() == ',')
            ss.ignore();
    }
    
    //llenamos el arreglo con los datos sin las comas
    for (int i=0; i< vect.size(); i++){
    	a[i] = vect.at(i);
    	
	}
       
	cout<<"\n";   
	// imprimimos el arreglo 
 	Organizar(a,AregloTam);
 	
 	//preguntamos que numero desea encontar y lo guardamos
 	cout <<"\n\nNumero que desea encontrar" << endl;
 	cin >> AregloBus;

	// guardamos los datos para luego compararlos
	int final = LinealSearch(a,AregloTam,AregloBus);
		
	
	// imprimimos una u otra opcion segun el resultado
 	if(final > 0){
 		cout << "\n\nSu numero se encuentra en la posicion " << final+1 << endl;
	 }
	 else{
	 	cout << "El numero " << AregloBus <<" no se encontro. "<< endl;
	 }
 }
