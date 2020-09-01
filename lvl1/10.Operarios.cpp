#include<iostream>
#include<conio.h>

using namespace std; 
int main() 
{ 
	int emp;
	float x; 
	int canthorast; 
	float sueldo; 
	float recargo;
	float aux; 
	int i=0;
	
	cout<<"  EMPRESA CONSTRUCTORA  "<<endl;
	cout<<endl;
	cout<<"ingresar cantidad de empleados "<<endl;
	cin>>emp;
	cout<<endl;
	
	cout<<"ingresar pesos ganados hasta 40 horas"<<endl; 
	cin>>x; 
	cout<<endl; 
		
	while(emp>i){ 
		cout<<endl;
		cout<<"ingresar total horas trabajadas"<<endl; 
		cin>>canthorast; 
		cout<<endl;
		
		if(canthorast<=40){
			cout<<"el sueldo a cobrar es:  "<<x<<endl;}
		
		else{
			cout<<"ingrsar cuanto es el recargo"<<endl; 
			
			cin>>recargo;
			aux=(x*recargo);
			
			sueldo=x+aux;
			cout<<"el sueldo a cobrar es:  "<<sueldo<<endl;
			}
		i++; 
		
		
		}
	getch(); 
	return 0; 
	
	}


