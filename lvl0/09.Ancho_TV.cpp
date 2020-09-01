/* Se desea contar con una aplicacion que calcule el ancho de un televisor teniendo como dato la 
cantida de pulgadas de la TV y el alto de pantalla ( expresado en centimetros). Informar el ancho del 
TV expresado en cm */
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	float pulgada,alto,ancho;
	
	cout<<" Ingresar pulgada"<< endl; 
	cin>>pulgada; 
	cout<<endl; 
	cout<<"ingresar alto"<<endl; 
	cin>>alto; 
	
	ancho= sqrt(pow(pulgada,2)-pow(alto,2));
	
	cout<<endl; 
	
	cout<<"ancho del TV"<<endl;
	cout<<ancho; 
	cout<<endl;
	
	
	
	
	
	return 0;
}

