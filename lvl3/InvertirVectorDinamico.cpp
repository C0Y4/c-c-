#include <iostream>
#include <cstdlib>
using namespace std;

int *invertir(int *a, int n);

int main(int argc, char *argv[]) {
	
	int n;
	cout<<"IngresarDimension: ";
	cin>>n;
	
	int *p,*a; 
	p= new int[n];
	
	for (int i=0; i<n; i++){
		
		*(p+i)=rand()%9+0;
		cout<<*(p+i);
	}
	
	cout<<endl;
	
	a=invertir(p,n);
	
	cout<<"Arreglo invertido"<<endl;
	
	for (int i=0; i<n; i++){
		cout<<*(a+i);
	}
	
	
	return 0;
}
int *invertir(int *a, int n){
	
	int aux=n-1;
	int *c;
	c=new int[n]; 
	
	for (int i = 0 ; i < n ; i ++){
		
		*(c+i)=*(a+aux);
		aux--;
		
	}
	return c;
	
	
}
