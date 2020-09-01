#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int punta1;
	int	puntb1;
	int punta2;
	int puntb2;
	int punta3;
	int puntb3;
	int A, B;
	char equipoa[10];
	char equipob[10];
	int totala;   
	int totalb; 
		
	A=0;
	B=0;
	cout<<"ingresar el nombre de equipo A"<<endl; 
	cin>>equipoa;
	cout<<endl;
	cout<<"ingresar el nombre de equipo A"<<endl; 
	cin>>equipob;
	cout<<endl;
	
	cout<<" SET 1 "<<endl; 
	cout<<" EQUIPO A; "<<endl; 
	cin>>punta1;
	cout<<" EQUIPO B; "<<endl; 
	cin>>puntb1;
	
	if(punta1>puntb1){
		cout<<" Ganador Set 1 Equipo A "<<endl; 
		A=A+1;
	}
	else{ cout<<"Ganador Set 1 Equipo B "<<endl;
	     B=B+1;
	}
	cout<<endl;
	cout<<" SET 2 "<<endl; 
	cout<<" EQUIPO A; "<<endl; 
	cin>>punta2;
	cout<<" EQUIPO B; "<<endl; 
	cin>>puntb2;
	
	
	if(punta2>puntb2){
		cout<<" Ganador Set 2 Equipo A "<<endl; 
		A=A+1;
	}
	else{ cout<<"Ganador Set 2 Equipo B "<<endl;
	B=B+1;
	}	
	
    cout<<"Caso de empate 3 Set"<<endl; 
    cout<<endl;
	
	if(A==B){
		cout<<" SET 3"<<endl; 
		cout<<endl; 
		
		cout<<" EQUIPO A; "<<endl; 
		cin>>punta3;
		cout<<" EQUIPO B; "<<endl; 
		cin>>puntb3;
		
		if(punta3>puntb3){
		
		cout<<" Ganador Set 3 Equipo A "<<endl; 
		A=A+1;
		}
		
		else{ cout<<"Ganador Set 3 Equipo B "<<endl;
		B=B+1;
			}	
	
	}
	 if( A<B){
		cout<< "Equipo B gano el partido"<<endl; 
	 }
	else{cout<<"Equipo A gano el partido"<<endl; 
	 
	}
	
	cout<<endl;
	cout<<endl;
	
	totala=punta1+punta2+punta3;
	totalb=puntb1+puntb2+puntb3;
	
	cout<<" Puntos realizados por el equipo A"<<endl;
	cout<<totala<<endl;
	cout<<" Puntos realizados por el equipo B"<<endl; 
	cout<<totalb<<endl;
	

	return 0;
}

