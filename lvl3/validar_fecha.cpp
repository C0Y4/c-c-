#include <iostream>

using namespace std;

int validar_fecha(int a,int b, int c);

int main(int argc, char *argv[]) {
	
	int dia;
	int mes;
	int ano; 
		
	cout<<"...VALIDAR FECHA..."<<endl;
	cout<<"Ingresar dia"<<endl;
	cin>>dia; 
	cout<<"Ingresar mes"<<endl; 
	cin>>mes; 
	cout<<"Ingresar ano"<<endl; 
	cin>> ano; 
	
	validar_fecha(dia,mes,ano);
	return 0;
}
int validar_fecha(int a,int b, int c){
	if(b<13 && a<31){
		cout<<"fecha valida"<<endl;
	}  
	
	else{ cout<<"fecha invalida"<<endl; 
	}
	
	
}
