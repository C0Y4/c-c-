#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int sb1,sb2,sb3,sb4;
	int cat1,cat2,cat3,cat4;
	float	sueldotot=0;
	char nombre[20] ;
	char apellido[20];
	int por1,por2,por3,por4;
	int ant1,ant2,ant3,ant4;
	int cat;
	int ant;
	float sb;
	float por;
	float porcentaje=0;
	
	
	cout<<"Iingresar datos"<<endl; 
	cout<<"Nombre"<<endl;
    cin>>nombre;
	cout<<"Apellido:"<<endl;
	cin>>apellido;
	cout<<"Categoria"<<endl;
	cin>>cat;
	cout<<"antiguedad"<<endl;
	cin>>ant;
	
	
	
	switch(cat)
		{
	case 1 :sb=2500;
		break;
	case 2 :sb=2000;
		break;
	case 3 :sb=1500;
		break;
	case 4 :sb=1000;
		break;
	};
	
	
	switch(ant){
case 1:	if(ant>0 && ant<=10){
		por=0.20;
	}
	break;
case 2:	if(ant>10 && ant<=15){
		por=0.50;
	}
	break;
case 3:	if(ant>15 && ant<=20){
		por=0.50;
	}
	break;
case 4:	if(ant>20){
		por=1.0;
	}
	break;
}

	cout<<endl;
	porcentaje=(sb*por);
	
	sueldotot= sb+porcentaje;
	
	
	cout<<"Nombre: "<<nombre<<endl<<endl; 
	cout<<"Apeliido: "<<apellido<<endl;
	cout<<"Categoria: "<<cat<<endl;
	cout<<"antiguedad : "<<ant<<" años "<<endl;
	cout<<"Sueldo total: "<<sueldotot<<endl;
	
	
	
	
	
	
	return 0;
}

