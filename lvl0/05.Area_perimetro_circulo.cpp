
// Escriba un programa en c++ que calcule el area y el perimentro de un circulo cuyo radio se ingresa como primer dato. 
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {

	float radio; 
	float circuferencia; 
	float area; 

	cout<<"ingrese radio"<<endl;
	cin>>radio; 
	
	circuferencia=radio*2; 
	area=3.14*(pow(radio,2));
	cout<< "Su circuferencia es : "<<circuferencia<<endl;
	cout<<"Su area es de : "<< area<<endl;
		
	return 0;
}

