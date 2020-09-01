#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	 
	int A;
	int B; 
	int C; 
	int mayor;
	
	cout<<"determinar cual es el mayor"<<endl; 
	cin>>A;
	cin>>B;
	cin>>C; 
	
	if(A>B){
		mayor=A;}
	else { 
	mayor=B;}
	if(mayor<C){
	mayor=C;}
	cout<<" el numero mayor es : "<<mayor<<endl; 
	getch(); 
	
    return 0;
}

