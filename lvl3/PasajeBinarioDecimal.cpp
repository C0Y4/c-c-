#include <iostream>
#include <string>

using namespace std;

string binario_decimal( int a); 

int main(int argc, char *argv[]) {
	int decimal; 
	string binario="";
	
	cout<<"------ PASAJE DE DECIMAL A BINARIO ------"<<endl; 
	cout<<"ingresar decimal: "<<endl; 
	cin>>decimal;
	binario=binario_decimal(decimal);
	cout<<"Binario: "<<binario<<endl; 
	cout<<endl; 
	
	
	
	return 0;
}

string binario_decimal(int a){
	string b="";  
	if(a>0){
		  while(a>0){
			  if(a%2==0){
				b="0"+b;  
			  }
			  else{
				  b="1"+b;
			  }
			  a= (int) a/2;
			  	  
			  
		  }
		  return b;
	  }
	else{ if(a==0){
		cout<<"Nose puede realizar"<<endl; 
		}
	return b="NO"+b;
}
}
