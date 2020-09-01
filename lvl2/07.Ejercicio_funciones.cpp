
/*
    Ejemplo Ejercicio Funciones - C++ 
    Autor: C0Y4

*/

#include <iostream>

using namespace std;

void numm(int x, int y, int z, int&p);
	
int main(int argc, char *argv[]) {
	
	int A,B,C;
	int mayor = 0; 
	
	cout<<"Cargar Valores"<<endl;	
	cin>>A;
	cin>>B;
	cin>>C;
	
	numm(A,B,C,mayor);
		
	cout<<"mayor"<<mayor<<endl;
		
	return 0;
		
}

void numm(int x, int y, int z, int&p){
		
		if(x>y && x>z){
			p=x;
		}	
		
		if(y>x&&y>z){
			p=y;
		}

		if(z>x&&z>y){
			p=z;}
		}
}