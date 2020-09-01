/*
    Ejemplo Trabajo con Variables - C++ 
    Autor: C0Y4

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

const  float aaa=10.1;
	 
int main(int argc, char *argv[]) {

	bool variable = true; 
	float numero=3.50;
	double num = 12.45;
	char* letra = "Jose Perez"; 
	int valor = 10;


	cout<<"arreglo dinamico de caracteres: "<<letra<<endl;
	cout<<"variable tipo booleana: "<<variable<<endl;
	cout<<"Variable tipo double: "<<num<<endl;
	cout<<"Variable tipo entero: "<<valor<<endl;
	cout<<"variable Constante: "<<aaa<<endl;

	cin.get();

	return 0;
}

