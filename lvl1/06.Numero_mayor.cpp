#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a; 
	int b; 
	int c; 
	int mayor;
	
	cout<<" Ingresar numeros"<<endl; 
	cin>>a;
	cin>>b;
	cin>>c;
		
	if(a>b){
		mayor=a;
	}
	else{ mayor=b;
	}
	if (mayor<c){
		mayor=c;
	}

	cout<<"Numero Mayor:"<<mayor;
	
	return 0;
}

