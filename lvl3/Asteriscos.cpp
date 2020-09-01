#include <iostream>
using namespace std;
 void mostrar_asteriscos(int n, char a); 
 
int main(int argc, char *argv[]) {
	int cant; 
	
	cout<<"cantidad de asteriscos"<<endl;
	cin>>cant;
	cout<<endl;
	
	mostrar_asteriscos(cant,'*');
	
	
	return 0;
}
void mostrar_asteriscos(int n, char a){
	
	for(int i=0;i<n;i++){
		cout<<a;
	}
	
}
