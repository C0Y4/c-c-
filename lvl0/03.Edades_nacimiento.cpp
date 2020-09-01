#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int edad1,edad2;
	int anio = 2015; // anio actual
	int anionac1,anionac2;
	
	cout<<"ingresar edades"<<endl;
	cin>>edad1;
	cin>>edad2;

	anionac1=anio-edad1;
	anionac2=anio-edad2;

	cout<<"edad1: "<<edad1<<endl;
	cout<<"año de nacimiento 1 : "<<anionac1<<endl;
	cout<<"edad2: "<<edad2<<endl;
	cout<<"año de nacimiento 2 : "<<anionac2<<endl;
	
	return 0;
}

