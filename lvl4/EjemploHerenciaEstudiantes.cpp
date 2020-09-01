#include <iostream>
using namespace std;

class estudiante
{
protected: 
		int numero;
		
public:
	void ingresarNumero(int);
	void mostrarNumero();
		
};

class test : public estudiante
{
	protected:
	float nota1;
	float nota2;

public: 
	void ingresarNotas(float,float);
	void mostrarNotas();
	
};

class resultado : public test{
	float total; 
public:
	void display();
	
};
 // ....................................
 // CLASE estudiante

void estudiante :: ingresarNumero(int a ){
		numero=a;	
}

void estudiante :: mostrarNumero(){
	
	cout<<"Numero de estudiante"<<numero<<endl;
	
}

// CLASE TEST DERIVADA DE ESTUDIANTE 


void test :: ingresarNotas(float a, float b){
	
	nota1=a;
	nota2=b; 
	
}

void test :: mostrarNotas(){
	
	cout<<"nota 1 ="<<nota1<<endl;
	cout<<"nota 2 ="<<nota2<<endl;
	
	
}
//CLASE RESULTADO DERIVADA DE test

void resultado :: display(){
	total = (nota1 + nota2) /2;
	mostrarNumero(); 
	mostrarNotas();
	cout<<"TOTAL = "<<total<<endl;
}





int main(int argc, char *argv[]) {
	
	resultado estudiante1;  //creo un estudiante1 
	
	estudiante1.ingresarNumero(1);
	estudiante1.ingresarNotas(8,9);
	estudiante1.display();
	
	
	
	
	
	
	return 0;
}

