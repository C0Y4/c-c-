/*
    Ejemplo Ejercicio Vector
    C++ 
    Autor: C0Y4

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char nomsuc[20];
	float totv[13];
	int mes,i;
	int cont=0;
	
	cout<<"NUMERO DE SUCURSAL"<<endl;
	cin>>nomsuc;
	
	for(i=0; i<13;i++){
		cout<<"INGRESAR MES"<<endl;
	    cin>>mes; 
		cout<<"INGRESAR TOTAL VENDIDO EN EL MES"<<endl; 
		
		cin>>totv[mes];
			
	}
	
	cout<<" MOSTRAR TOTAL VENDIDO EN EL MES 7"<<endl;	
	cout<<totv[7];
	cout<<endl;
	
	for(i=0;i<13;i++){
		 if(totv[i]>200.000){
			cont++;
		
		}
		
	}
	
	cout<<" CUANTAS VECES CON VENTA MAYO A 200.000 pesos" <<endl;
	cout<<cont++; 
		
	cout<<"-----------------------------------------"<<endl; 
	
		
	return 0;

}
