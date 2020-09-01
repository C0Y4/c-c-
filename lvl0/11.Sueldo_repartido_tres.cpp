/* un abuelo desea repartie el 2% de sus sueldo en sus tres nietos
se ingresa como dato: sueldo del abuelo, la edades de los nietos y su parte para cada uno*/ 


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo;
	float edad1;
	float edad2;
	float edad3;
	float repartir; 
	cout<<" ingresar el sueldo"<<endl; 
	cin>>sueldo;
	cout<<endl; 

	cout<<"sueldo a repartir"<<endl; 
	repartir=sueldo*0.20;
	cout<<endl;
	cout<<repartir;
	cout<<endl; 
	cout<<endl; 
	
	
	cout<<"edades de los nietos"<<endl; 
	cin>>edad1;
	cin>>edad2;
	cin>>edad3;
	cout<<endl; 
	cout<<"edad del 1 nieto:  "<<edad1<<endl; 
	cout<<"edad del 2 neito:  "<<edad2<<endl;
	cout<<"edad del 3 nieto:  "<<edad3<<endl; 
	cout<<endl; 
	cout<< " A cada uno le corresponde:  "<<endl; 
	
	cout<<repartir/3; 
				
	return 0;
}

