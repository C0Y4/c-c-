#include <iostream>
using namespace std;

int main() {
	int L1;
		int L2;
		int L3;
		cout<<"ingresar lados del triangulo"<<endl; 
		cin>>L1;
		cin>>L2;
		cin>>L3;
		
		cout<<"determinar tipo de triangulo: "<<endl;
	if(L1==L2&&L2==L3){
		cout<<"triangulo isocleles"<<"perimetro: "<<L1+L2+L3<<endl;
	}
	if(L1==L2&&L2!=L3){
		cout<<"triangulo escaleno"<<"perimetro: "<<L1+L2+L3<<endl;
	}
	if(L1!=L2&&L2!=L3){
		cout<<"triangulo equilatero: "<<"perimetro: "<<L1+L2+L3<<endl; 
	}
		return 0; 
} 

	
	

