#include <iostream>
#include <iomanip>

using namespace std;

	int main(int argc, char *argv[]) {
	int i=1,n;
	float x,prom; 
	float suma=0;


	cout<<" Calculo del promedio: "<<endl; 
	cout<<"-------------------------"<<endl;
	cout<<" Cantidad de datos: " <<endl;
	cin>>n; 

	while (i<n){
		cout<<"Valor: "<<endl; 
		cin>>x; 
		suma = suma + x;
	} 

	prom = suma / n;
	cout<<"Promedio = "<<prom<<endl;
	
	return 0;
}

