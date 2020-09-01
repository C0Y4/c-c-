#include<iostream>
#include <cstdio>
#include <cstring>

using namespace std; 

int main(int argc, char *argv[]) {
	
	char *aux[3];
	char *p[3]; 
	int n=0;
	
	for(int i=0 ; i<3 ; i++){
		p[i]= new char[30];
		cout<<" "<<i<<"-Ingresar palabra: ";
		gets(p[i]);
				
	}
	
	for(int i=0 ; i<3 ; i++){
		puts(p[i]);
	}
	
	cout<<endl; 	
				
	for(int i=0;i<3;i++){
		
		aux[i]= new char[30];
		
		for(int j=0;j<strlen(p[i]);j++){
			
			if( *(*(p+i)+j) != 32 ){	
				
		*(*(aux+i)+n) = *(*(p+i)+j);		
				n++;
		}
			}
		
	
	}
	
	
	
	
	for(int i = 0 ; i < 3 ; i++ ){
		for (int j = 0 ; i<30 ; j++ ){
			
			cout<<aux[i][j];
			
		}
		cout<<endl;
	}
	
	return 0;}
	
