#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int dia_nac;
	int mes_nac;
	int anio_nac;
	int edad; 
	int dia_vot;
	int mes_vot;
	int anio_vot;
	
	cout<<" ¿el estudiante es mayor? "<<endl; 
	cout<<" ingresar edad del estudiate"<<endl; 
	cin>>edad; 
    if ( edad >=18){
	cout<<"ingresar fecha de nacimiento"<<endl; 
	cin>> anio_nac;
	cin>> mes_nac;
	cin>> dia_nac;
	cout<<"ingresar fecha de votacion"<<endl; 
	cin>> dia_vot;
	cin>>mes_vot;
	cin>>anio_vot;
	cout<<"fecha de votacion"<<dia_vot<<mes_vot<<anio_vot<<endl;
	cout<<endl;
	cout<<"gracias por su voto"; 
}
else { cout<<"no puedes votar eres menor de edad"<<endl;

	}
return 0;
}

