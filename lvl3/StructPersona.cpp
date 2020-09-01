#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct persona{
	
	int edad;
	char nombre[10];
	char apellido[10];

};

void ingresarDatos(persona v[], int n);
void mostrarDatos(persona v[],int n);


int main(int argc, char *argv[]) {

	
	persona v[2];
	
	ingresarDatos(v,2);
	
	mostrarDatos(v,2);
	
	return 0;
}

void ingresarDatos(persona v[], int n){
	
	for(int i=0; i<n;i++){
	
	cout<<"Ingresar Edad: ";
	v[i].edad=rand()%100+1;
	cout<<v[i].edad<<endl;
	cout<<"Ingresar Nombre: ";
	gets(v[i].nombre);
	cout<<"ingresar apellitdo: ";
	gets(v[i].apellido);
	
	}
}
void mostrarDatos(persona v[], int n){
	
	for (int i=0 ;i<n; i++){
		cout<<"Edad: "<<v->edad;
		cout<<"nombre"<<v->nombre;
		cout<<"Apellido"<<v->apellido; 
		
		
		
		
	}
	
}
