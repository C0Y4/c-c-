#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]) {

	char *c;
	char *a;
	
	c= new char[30];
	a= new char[30];
	
	int  n=0; 
	
	cout<<"Ingresar cadena: "; 
	gets(c);
	cout<<endl;
	cout<<"Palabra: ";
	puts(c);
	
	for(int i=0;i<30;i++){
		
		if( *(c+i) != 32){
			
			*(a+n)=*(c+i); 
			n++;
		}
				
	}
	
	cout<<endl; 
	cout<< "Palabra sin espacios: "; 
	puts(a);
		
	
	
	
	
	
	return 0;
}

