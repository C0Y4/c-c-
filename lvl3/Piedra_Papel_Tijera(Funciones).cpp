#include <iostream>
#include <stdlib.h>

using namespace std;

float comparar(int a,int b); 

int main()
{	int i=0;
	int piedra=1;
	int papel=2;
	int tijera=3;
	int opcion;
	int maquina;
	int resultado;
	
	cout<<endl;
	cout<<"Juego"<<endl;
	cout<<"1-Piedra"<<endl;
	cout<<"2-Papel"<<endl;
	cout<<"3-Tijera"<<endl;
	cout<<"4-Salir"<<endl;
	cout<<endl;
	
	i+1;
	while(i<3){
	
	cout<<"Ronda"<<i<<endl;	
	cout<<"Elegir opcion"<<endl;
	cin>>opcion;
	maquina=rand()%3+1;
	cout<<"Opcion Maquina"<<endl;
	cout<<maquina<<endl;
		
	
	resultado=comparar(opcion,maquina); 
	 
	if (resultado==1){
		cout<<"Gana Usuario"<<endl;
		}
	else{ if(resultado==0){ 
		cout<<"Gana Maquina"<<endl; 
	}
	else{ 
		cout<<"Empate"<<endl;}
	}
	cout<<endl;
		i++;
	}
	return 0;
}
float comparar(int a,int b){
	if(a==b){
		return 2;
	}
	else{   if(a==1 && b==2){
		return 0;}
	
	else{ if(a==1 && b==3){
		return 1; }
	
	else{ if(a==2 && b==3){
		return 0;}
	
	else{ if(a==2 && b==1){
		return 1; }
	
	else{ if(a==3 && b==1){
		return 0;}
	
	else{ if(a==3 && b==2){
		return 1 ;}
	}}}}}}
	
	
	
	
}
