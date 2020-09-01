// Se desea contar con una aplicacion que ingresando el neto de una persona calcule su aporte jubilatorio
// (16% del sueldo neto) y el sueldo liquido (sueldo neto - aporte jubilatorio) 

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float sueldo,aporte,total; 
	int n,i=0,c=0;
	float t=0;
	
 	cout<<" Cantidad de jubilados"<<endl; 
	cin>>n; 
	
	while (i<n){
		cout<<" Ingresar sueldo"<<endl;
		cin>> sueldo; 
	
		aporte=sueldo*0.16;
		total=sueldo-aporte; 
		
		cout<<"Sueldo a Cobrar: "<<endl; 
		cout<<total<<endl;
		
	    t= t+total;
	
	    i++;
	    c++;	
	}
	
	cout<<" Jubilados que se le abono"<<endl; 
	cout<<c<<endl;
	cout<<" Dinero depositado en total"<<endl;
	cout<<t;
	
	
	return 0;
}

