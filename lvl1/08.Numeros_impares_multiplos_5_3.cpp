#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero; 
	cout<<" ingresar numero"<<endl; 
	cin>>numero; 
	cout<<endl;
	if (numero % 2 == 0) 
	{ cout<<" Numero Par"<<endl; }
	else{ cout<<" Numero Impar"<<endl;}
	cout<<endl; 
	cout<<" Es multiplo de 3 y de 5 "<<endl; 
	if(numero%3==0 && numero % 5==0){
		cout<<" Verdadero"<<endl; }
	else{cout<<" Falso"<<endl;
	}
		return 0;
}

