#include <iostream>
using namespace std;
int bisiesto(int a){
	
if(a%4==0 || a%100==0 || a%400==0 ){
	return 1; 
}	
else{return 0; }
	
}

int main(int argc, char *argv[]) {
	int anio;
	int ver;
	cout<<"Ingresar a�o"<<endl;
	cin>>anio;
	cout<<endl;
	ver=bisiesto(anio);
	
	if(ver==1){
		cout<<"a�o bisiesto"<<endl;
		}
	else{
		cout<<"no A�o bisiesto"<<endl;
		}
	
	
	return 0;
}

