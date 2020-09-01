
/*
    Ejemplo Ejercicio Vector
    C++ 
    Autor: C0Y4

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	 
	
	int a [10];
	int b [10];
	int c [10];
	int i; 
	
	for(i=0;i<5;i++){
		
		cout<<" DATOS DE A "<<endl;
		cin>>a[i];
		cout<<" DATOS DE B "<<endl;
		cin>>b[i];
		cout<<"-------------------"<<endl;
		
	}
	for(i=0;i<5;i++){
		
		c[i]=a[i]*b[i];
		cout<<" DATOS DE C "<<endl;
		cout<<endl;
		
		cout<<c[i];
		
		
	}

	return 0;
}

