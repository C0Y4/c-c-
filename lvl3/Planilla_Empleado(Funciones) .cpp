#include <iostream>
using namespace std;
int asignar_sueldo(int a);
float monto_antiguedad(int b,int c); 

int main(int argc, char *argv[]) {
   char nombre[10];
   char apellido[10];
   int sueldo_basico;
   int antiguedad;
   int categoria;
   float monto;
   
   cout<<"Ingresar Nombre empleado"<<endl;
   cin>>nombre;
   cout<<"Ingresar Apellido empleado"<<endl;
   cin>>apellido;
   cout<<"Ingresar Categoria"<<endl;
   cin>>categoria; 
   cout<<"Antiguedad"<<endl;
   cin>>antiguedad;
   
   sueldo_basico=asignar_sueldo(categoria);
   monto=monto_antiguedad(antiguedad,sueldo_basico); 

 
cout<<"..........................................."<<endl;
cout<<"Planilla de Empleado"<<endl; 

cout<<"Apellido: "<<apellido<<endl;
cout<<"Nombre:  "<<nombre<<endl;
cout<<"Antiguedad: "<<antiguedad<<" años"<<endl;
cout<<"Sueldo Basico: "<<sueldo_basico<<endl;
cout<<"Monto antiguedad: "<<monto<<endl; 
cout<<"Sueldo Total:  "<<sueldo_basico+monto<<endl;
cout<<endl; 

	
	return 0;
}

int asignar_sueldo(int a){
	int b;
	switch(a) {
	case 1: return b=2500;
	break;
	case 2: return b=2000;
	break;   
	case 3: return b=1500;
	break;   
	case 4: return b=1200;
	break;   
	}
}
	float monto_antiguedad(int b,int c){
		int monto;
		if (b<=10){
			return monto=(c*0.20);}
		else{
			if(b<=15 && b>=11){
				 return monto=(c*0.50);
			}
			else{  if(b<=20 && b>=16){ 
				return monto=(c*0.80);}
			else{ if(b>20){
				return monto=(c*1);
			}}}}
		
		
	}
	


