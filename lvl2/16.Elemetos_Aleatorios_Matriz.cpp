/*
    Ejemplo Trabajo con Matrices
	    C++ 
    Autor: C0Y4

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int x [100];
	
	for(int i=0;i<99; i++){
		 x[i]= rand()%10;
		}
		
		for(int i=0;i<99; i++){
		 cout<<" MOSTRAR DATOS ALEATORIOS" <<endl; 
		 cout<<x[i]<<endl; 
		 
		}
	
	return 0;
}

