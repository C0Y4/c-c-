/*
    Ejemplo Trabajo con Struct
    C++ 
    Autor: C0Y4

*/

#include <iostream>

using namespace std;

struct ficha_alumno{    // definicion del Struct
   
    char apellido[10];
    char nombre[10];
    long dni;
    int edad;
    int cant_materias;

};

int main()
{  
   ficha_alumno x[2];   // arreglo tipo struct
										// prueba con solo dos elementos.

   for(int i=0;i<2;i++){
       cout<<"Ingresar Datos en Struct - 2 elementos"<<endl;
       cout<<"apellido: ";
       cin>>x[i].apellido;
       cout<<"nombre: ";
       cin>>x[i].nombre;
       cout<<"dni: ";
       cin>>x[i].dni;
       cout<<"edad: ";
       cin>>x[i].edad;
       cout<<"cant_materias: ";
       cin>>x[i].cant_materias;
       cout<<"-------------------------------"<<endl;
   } 

       cout<<"-------------------------------"<<endl;
       cout<<"Datos de los alumnos Cargados"<<endl;
       cout<<"-------------------------------"<<endl;

   for(int i=0;i<2;i++){
         cout<<"apellido: "<<x[i].apellido<<endl;
         cout<<"nombre: "<<x[i].nombre<<endl;
         cout<<"dni: "<<x[i].dni<<endl;
         cout<<"edad: "<<x[i].edad<<endl;
         cout<<"cantidad de materias: "<<x[i].cant_materias<<endl;
         cout<<"............................."<<endl;
    }

    return 0;
}

