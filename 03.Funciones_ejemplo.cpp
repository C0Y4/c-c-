/*
	Ejemplo Trabajo con Funciones
	- Funcion Suma
	- Funcion Resta
	C++ 
	Autor: Hernan Garcia
*/

	#include <iostream> 	//incluyendo la librería de entrada salida
	
	using namespace std; 	//cargando el namespace estándar
	
	int suma(int,int); 		//prototipo de funcion suma
	
	int resta(int,int);		//prototipo de funcion resta
	

	int main(){

		int num1,num2,opcion,resultado;
		
		cout<<"Ingrese el primer numero:";
		cin>>num1;

		cout<<"Ingrese el segundo numero:";
		cin>>num2;

		cout<<"Que desea hacer: \n1-Sumar \n2-Restar \nIngrese el numero de opcion y presione enter:\n";
		// "\n" sirve como enter(salto de lina) (Pleca invertida)
		cin>>opcion;
		
		//dependiendo de la opcion insertada por usuario
		//se sumaran o restaran los 2 numeros
		switch(opcion){
		case 1:
			resultado=suma(num1,num2);
			cout<<"El resultado es: "<<resultado; //usa la funcion e imprime el retorno
			//el retorno de suma(num1,num2) es la suma de los 2 numeros
			break;
		case 2:
			resultado=resta(num1,num2);
			cout<<"El resultado es: "<<resultado; //usa la funcion e imprime el retorno
			//el retorno de resta(num1,num2) es la resta de los 2 numeros
			break;
		default:
			cout<<"Esa opcion no es valida";
			break;
		}
		
		cin.ignore();
		cin.get();
		return 0;
	}
	
	//definicion completa de los prototipos
	//definicion funciones sumar y restar - retorna un valor entero.
	int suma(int x,int y){
		return x+y;
	}
	
	int resta(int x,int y){
		return x-y;
	}
	
