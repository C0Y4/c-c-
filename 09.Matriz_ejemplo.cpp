
/*
    Ejemplo Ejercicio Matriz
    C++ 
    Autor: C0Y4

*/

#include <iostream>

using namespace std;

int main()
{ 
	char nombre[3];
    int fechas[3][3];
    int personas;

    cout << "Cantidad de Personas: "<< endl;
    cin>>personas;

    cout<<"Fechas de Nacimiento:  "<<endl;
    cout<<endl;

    cout<<"......................."<<endl;
   
    for(int i=0;i<personas;i++){
           cout<<"Nombre"<<endl;
           cin>>nombre[i];
           cout<<"Dia"<<endl;
           cin>>fechas[0][i];
           cout<<"Mes"<<endl;
           cin>>fechas[1][i];
           cout<<"Anio"<<endl;
           cin>>fechas[2][i];
           cout<<endl;
           cout<<"........................."<<endl;
           cout<<endl;
    }

    cout<<"Mostrar Fechas"<<endl;
    
    for(int i=0;i<personas;i++){
        cout<<"....................."<<endl;

        cout<<"NOMBRE: "<<nombre[i]<<endl;
        cout<<"DIA :"<<fechas[0][i]<<endl;
        cout<<"MES :"<<fechas[1][i]<<endl;
        cout<<"ANIO :"<<fechas[2][i]<<endl;
    }


    return 0;
}



