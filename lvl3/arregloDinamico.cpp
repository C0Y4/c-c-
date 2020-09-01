#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int *p;
	int suma=0; 
	cout<<"Ingresar Dimension arreglo dinamico"<<endl;
	cin>>n;
		
	p=new int[n];
	
	for(int i=0;i<n;i++){
		*(p+i)=i;
		cout<<*(p+i)<<endl; 
		
		}
	
	
	for(int i=0;i<n;i++){
		suma+=*(p+i); 
		}
	
	cout<<"SUMA";
	cout<<suma;
	
	
	
	return 0;
}

