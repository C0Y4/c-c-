#include <iostream>
using namespace std;

int  divisionEntera( int a ,int b, int &r); 

int main(int argc, char *argv[]) {
	int divs; 
	int dividen; 
	int resto=0; 
	
	
	cout<<"ingresar Divisor"<<endl;
	cin>>divs;
	cout<<"Ingresar Dividendo"<<endl; 
	cin>>dividen; 
	cout<<endl; 
	cout<<"......................"<<endl;
	cout<<"Cociente= "<<divisionEntera(dividen,divs,resto);
	cout<<endl; 
	cout<<"Modulo= "<<resto; 	
	
	
	return 0;
}

int  divisionEntera( int a ,int b, int &r){
	
	if (b>a){
		return 0;
	}
	else {  r=a%b;
		   return a/b;
	}
	
	
} 
