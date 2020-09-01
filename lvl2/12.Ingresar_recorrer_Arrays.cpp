
/*
    Ejemplo Ejercicio Vector
    C++ 
    Autor: C0Y4

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vec[100]; 
	int n; 
	cout<<" INGRESAR N "<<endl; 
	cin>>n; 
	
	for(int i =0; i<n;i++){
		
		cout<<"INGRESAR DATOS AL ARRAYS " <<endl; 
		cin>>vec[i];
		
	}
	cout<<endl; 
	cout<<"-----------------------------"<<endl; 
	
	for(int i =0; i<n;i++){
		
		cout<<"MOSTRAR DATOS DEL ARRAYS " <<endl; 
		cout<<vec[i]<<endl;
	}
	
	return 0;
}

