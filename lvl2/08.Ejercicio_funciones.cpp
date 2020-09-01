
/*
    Ejemplo Ejercicio Funciones
    C++ 
    Autor: C0Y4

*/

#include <iostream>
using namespace std;

bool evalua (int n1, int n2,int n3); // prototipo de la funcion
	
int main(int argc, char *argv[]) {
	
	int a,b,c;
	bool band; 
	
	//Cargamos notas
	cout<<"nota 1"<<endl; 
	cin>>a;
	cout<<"nota 2"<<endl; 
	cin>>b;
	cout<<"nota 3"<<endl; 
	cin>>c;
	
	band=evalua(a,b,c);
		
	if (band == 0){
		cout<<"alumno promocionado"<<endl;
	}
	else{ 
		cout<<"alumno no aprobado"<<endl; 
	}
	
	return 0;
}


bool evalua (int n1, int n2,int n3){
		int sum=n1+n2+n3;
		
		if(n3<=25&&sum>75){
			return 0;
		} 
		else{ 
			return 1;
		}
}
