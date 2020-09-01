#include "estudiante.h"
#include <iostream>
#include <string.h>

using namespace std;

Estudiante::Estudiante()
{
  this->setNombre();
  this->setApellido();
  this->setDni();
  this->setAnioIng();
  this->setNota();

}

void Estudiante ::  setNombre(){

  char a[30];
  cout<<"Ingresar Un nombre"<<endl;
  gets(a);
  strcpy(this->nombre, a);

}

void Estudiante ::  setApellido(){

  char a[30];
  cout<<"Ingresar Apellido "<<endl;
  gets(a);
  strcpy(this->apellido, a);

}

void Estudiante ::  setDni(){

  long d;
  cout<<"Ingresar DNI "<<endl;
  cin>>d;
  this->dni=d;

}
void Estudiante :: setAnioIng(){

  int a;
  cout<<"Ingresar Anio Ingreso "<<endl;
  cin>> a;
  this->anio=a;

}


void Estudiante ::  setNota(){
 int nt;

for(int i=0 ; i<3; i++){
    cout<<" Ingresar nota de  "<<this->mat[i].devolverCod()<<endl;
     cin>> nt;
     this->mat[i].asignarNota(nt);

  }
}

char* Estudiante:: getNombre(){

  return this->nombre;

}


char* Estudiante::getApellido(){

  return this->apellido;

}

int Estudiante::getAnio(){

  return this->anio;

}
float Estudiante :: promedio(){
 float aux=0;
 int c=0;

  for(int i=0; i<3; i++){
      if (( this->mat[i].devolverNota() > 6 )&&( this->mat[i].devolverNota() > 6))
           aux= aux + mat[i].devolverNota();
           c=c+1;
    }
  return aux/c;

}

bool Estudiante ::  aprobodoM(int a){

    for(int i=0; i<3; i++){
     if ( this->mat[i].devolverCod() ==a ){
          return this->mat[i].aprobada();
         }
}

}
