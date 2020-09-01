#include <iostream>
using namespace std;
 int fibonacci(int a,int b, int c){
	int aux;
	 if(c<100){
	c=a+b;
	cout<<c<<"+";
	aux=c;
	a=b;
	b=aux;
	
	return fibonacci(a,b,c);
		 
	 }
	 else { return 0;}
	 
	 
 }
int main(int argc, char *argv[]) {
	int anterior=1;
	int anterior2=1;
	
	
	fibonacci(anterior,anterior2,0);
	
	
	
	
	return 0;
}

