/*
	Busqueda Secuencial en un Vector
	Funciones - Pasaje por Referencia
	C++ 
	Autor: C0Y4

*/

#include <iostream>

using namespace std;

void busqueda_sec(int v[], int k, int t, int &p); // funcion busqueda secuencial
	
int main(int argc, char *argv[]) {
	
	int vec[10];
	int dato;
	int pos=0;
	int n;
	
	cout<<"Numero de datos del arreglo"<<endl; 
	cin>>n;  // dimension del arreglo
	
	cout<<"---------------------"<<endl; 
    cout<<"Cargar Datos Arreglo:"<<endl;
	
	for(int i=0; i<n;i++){
		cout<<i;
		cout<<":";
		cin>>vec[i];
	}

	cout<<"--------------------"<<endl; 
	cout<<"Ingrese dato a buscar: "; 
	cin>>dato;

	busqueda_sec(vec,dato,n,pos);  // llamada a la funcion busqueda

	cout<<"-----------------------"<<endl;

	if(pos==0){
		cout<<"Dato no encontrado"<<endl; 
	}
	else{
	    cout<<"Dato encotrado en la posicion: "; 
	    cout<< pos;
	}
	
	return 0;
}

//&p - Pasaje por referencia
void  busqueda_sec(int v[], int k, int t, int &p){  
	int c=0;
	while(c<t){
		if(v[c]==k){
			p=c;
			c=t;
		}
		c++;
	}
}