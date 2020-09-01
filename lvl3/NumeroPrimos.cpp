#include <iostream>
using namespace std;

int  numeroPrimo(int a ); 

int main(int argc, char *argv[]) {
	int a,x ; 
	
	cout<<"Ingresar Numero"<<endl;
	cin>>a; 
	
	x=numeroPrimo(a); 
	
	if(x==2){
	cout<<"NumeroPrimo"<<endl; 
	
	}
	else {cout<<"NumeroNoPrimo"<<endl; 
	}
	
	
	return 0;
}

int numeroPrimo(int a ){
	
	int cont=0; 
	for(int i=1; i<=a ;i++){
		
		if(a%i==0){
		cont++;
			} 
			
	}
	return cont;
	
	
}
