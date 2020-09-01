
/*
    Ejemplo Ejercicio Vector
    C++ 
    Autor: C0Y4

*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[10];  // vector de enteros de 0 elementos.
	int n=5; 

	for(int i=0;i<n;i++){ // Cargamos 5 elementos
	
		cout<<"dato: "; 
		cin>>vector[i];
		cout<<"dato es: "<<vector[i]<<endl;

	}

	getch ();
	
	return 0;
}


