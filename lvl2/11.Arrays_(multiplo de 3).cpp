
/*
    Ejemplo Ejercicio Vector
    C++ 
    Autor: C0Y4

*/

/* Genera un vector llamado MUL donde sus elementos 
	sean los multiplos de 3 desde 3 hasta n 
	inclusive y el valor n se ingresa como primer dato */

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int mul[100];
	int n;
	int c=0;
	
	cout<<"ingresar el valor de n " <<endl; 
	cin>>n; 
	
	for(int i=3;i<n;i=i+3){
	 
		mul[c]=i;
		cout<< "MULTIPLOS : "<<mul[c]<<endl;
		c++;
		}
		
	return 0;
}

