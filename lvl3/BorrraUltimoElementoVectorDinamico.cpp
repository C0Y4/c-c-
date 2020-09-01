#include <iostream>
#include <cstdlib>

using namespace std;

int *borrarUltimoElemento(int *a, int n); 

int main(int argc, char *argv[]) {
	const int a=10;
	
	int *p,*x;
	p=new int[a];
	
	
	for(int i=0; i<a;i++){
		
	*(p+i)=rand()%9+1; 
	cout<<*(p+i);}
	
	x=borrarUltimoElemento(p,a);
	
	cout<<endl; 
	cout<<"sin el ultimo elemento"<<endl;
	for(int i = 0 ; i<a-1 ; i++){
		
		cout<<*(x+i); 
				
	}	
	
	return 0;
}
int *borrarUltimoElemento(int *a, int n){
	int *y;
	y=new int[n-1]; 
	
	for(int i=0;i<n-1;i++){
		
		*(y+i)=*(a+i);
		
	}
	return y;
}
