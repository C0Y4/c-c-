/*
    Ejemplo Trabajo con Matrices
	    C++ 
    Autor: C0Y4

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	cout<<" TRABAJO CON MATRICES" <<endl;
	cout<<" ----------------------------"<<endl; 
	cout<<endl; 
	
	int mat[10][10];
	int i, j; 
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
	cout<<" Datos" <<endl; 
	cin>> mat[i][j]; 
	cout<<endl; 
	
	cout<<" DATOS DE LA FILA Y  DATOS DE LA COLUMNA:  "<<mat[i][j]<<endl; 
	cout<<endl;
	cout<<"------------------------"<<endl; 
		
	}
	}
	
	return 0;
}

