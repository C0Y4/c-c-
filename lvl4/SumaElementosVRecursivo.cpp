#include <iostream>
using namespace std;

/*Escriba una Funcion Recursiva llamada Suma que retorne la suma de los elementos de una lista de enteros L */
int suma (int v[], int a );

int main(int argc, char *argv[]) {

	int v[5] = {10, 3 ,5 ,6 ,7 };
	
	cout<<suma(v,5)<<endl;
	cout<< 10+3+5+6+7; 
	
	
	return 0;
}
int suma (int v[], int a ){
	
	if ( a == 1 ){
		return v[a-1];		
	}
	else{ int s;
	return s= suma(v,a-1)+v[a-1];		
	
	}
	
}
