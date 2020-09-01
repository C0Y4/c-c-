#include<iostream>

using namespace std; 
int main(){ 
	
int horas; 
int segundos;
int minutos; 
int mediodia=12 ; 
int horas1;

	
cout<<"ingresar horas entre 0 y 23"<<endl; 
cin>>horas;
cout<<"ingresar minutos entre 0 y 59"<<endl; 
cin>>minutos; 
cout<<"ingresar segundos entre 0 y 59"<<endl; 
cin>>segundos;

	if(horas=12){
		
		cout<<" La hora es" <<endl; 
		cout<<horas<<":"<<minutos<<":"<<segundos<<"PM"<<endl;
		cout<<endl; 	
		
	}
	
	
	
	
	
	
	if(horas>12){
	horas1=horas-mediodia; 
	cout<<" La hora es" <<endl; 
	cout<<horas1<<":"<<minutos<<":"<<segundos<<"PM"<<endl;
	cout<<endl; 
		
}

if(horas<12){
	

cout<<" La hora es" <<endl; 
cout<<horas1<<":"<<minutos<<":"<<segundos<<"AM"<<endl; 

}
	
	
	

return 0 ; 

}
