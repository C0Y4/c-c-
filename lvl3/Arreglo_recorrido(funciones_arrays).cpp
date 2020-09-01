#include <iostream>
#include <cstdlib>

using namespace std;

float agregar_elementos(float v[]);
void mostrar_elementos(float v[]);


int main(int argc, char *argv[]) {
	float vec[10];
	
	agregar_elementos(vec); 
	mostrar_elementos(vec); 
	
	return 0;
}
float agregar_elementos(float v[]){
	
	for(int i=0; i<10;i++){ 
	  v[i]=rand()%100+1;}
	
	
}
void mostrar_elementos(float v[]){
	for(int i=0; i<10; i++){
		cout<<"elemento: "<<i<<""<<v[i]<<endl;
			
	}
	
	
}
