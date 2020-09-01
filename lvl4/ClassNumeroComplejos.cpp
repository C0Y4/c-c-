#include <iostream>
using namespace std;
class nComplejos{
private: 
	int real; 
	int img;

public: 
	nComplejos(float a, float b);
	void mostrar_numero();
	float sumarParteReal(nComplejos a);
	float sumarParteImg(nComplejos b); 
};

int main(int argc, char *argv[]) {
	nComplejos n1(2,3); 
	nComplejos n2(1,6);
	
	n1.mostrar_numero();
	n2.mostrar_numero();
	
	
	cout<<"Suma Numeros Complejos";
	cout<<" "<<n1.sumarParteReal(n2)<<"+";
	cout<<n1.sumarParteImg(n2)<<"i"<<endl;;

	
	return 0;
}

nComplejos::nComplejos(float a, float b){
	real=a;
	img=b;}
	
void nComplejos::mostrar_numero(){
	cout<<"Numero Complejo"<<endl; 
	cout<<" "<<real<<"+"<<img<<"i"<<endl;
	
}

float nComplejos::sumarParteReal(nComplejos a ){
	int aux; 
	aux=real+a.real;
	return aux;
}
float nComplejos::sumarParteImg(nComplejos a ){
	int aux; 
	aux=img+a.img;
	return aux;
}
