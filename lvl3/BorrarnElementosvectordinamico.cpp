#include <iostream>
#include <cstdlib>
using namespace std;

int *borrarnUltimosElementos(int *a, int n, int b){
	
	if(b<n){
	int *y;
	y=new int[n-b];
	
	for(int i=0;i<n-b;i++){
		
		*(y+i)=*(a+i);
			}
	return y;
	}
	else{ return NULL;}
	
	
}

int main(int argc, char *argv[]) {
	
	int n,x;
	int *c;
	
	cout<<"Ingresar Dimennsion Arreglo Dinamico: ";
	cin>>n;
	
	
	int *p; 
	p=new int[n];
	
	for(int i=0;i<n;i++){
		*(p+i)=rand()%9+1;  
		cout<<*(p+i);}
	
	cout<<endl; 
	cout<<"Ingresar el Numero de Elementos a Borrar: ";
	cin>>x;
	
	c=borrarnUltimosElementos(p,n,x);
	
	for(int i=0;i<n-x;i++){
		
	cout<<*(c+i);	
		
	}
	
	
	return 0;
}

