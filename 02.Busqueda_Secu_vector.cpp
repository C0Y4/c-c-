/*
	Busqueda Secuencial en un Vector
	Funciones - Pasaje por Referencia
	Funcion - Retorna un entero - C++ 
	Autor: Garcia Hernan
*/

#include <iostream>

using namespace std;

int busca_secu(int v[],int k,int t,int&p);

int main()
{ 
	int vec[10], band=0, dat, pos, n;

    cout<<"Cantida de datos a cargar: "<<endl;
    cin>>n;
    
    cout<<"----------------------"<<endl;
    cout<<"DATOS:"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<i<<":";
        cin>>vec[i];
    }
       
   cout<<"......................................"<<endl;
   cout<<"Ingresar dato a buscar"<<endl;
   cin>>dat;
      
   band = busca_secu(vec,dat,n,pos);

   if(band==0){
       cout<<"Dato no encontrado";
    }
    else{ 
        cout<<"Dato encontrado en la posicion "<<pos;
    }

    return 0;
}

int busca_secu(int v[],int k,int t,int&p){
    
    int c=0;
    
    while(c<t){
        if(v[c] == k){
            p=c+1;
            c=t; 
        }
    c++;
    }
    
    return 1;
}
