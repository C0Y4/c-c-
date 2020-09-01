#include <iostream>
using namespace std;
int potencia(int a, int b){
	
	if(b==0){
		return 1;
	}
	else{ 
		return a* potencia(a,b-1);
	}
	
	
}
int main(int argc, char *argv[]) {
	
	int z;
	int y; 
	int r;
	
	cout<<"Ingresar Base"<<endl;
	cin>>z;
	cout<<"Ingresar Exponente"<<endl;
	cin>>y; 

	r=potencia(z,y);
	
	cout<<endl; 
	cout<<"Resultado"<<r;
	
	return 0;
}

