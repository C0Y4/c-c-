#include "facultad.h"
#include <iostream>

using namespace std;

Facultad::Facultad()
{
  this->indice=0;
  this->p = new Estudiante[this->tam];

}


void Facultad :: agregarEstudiante(){

  if (indice == tam){
  p[indice] = Estudiante();
  indice = indice + 1;}

  else{ cout<<"nos puede Agregar Mas"<<endl;
    // aplicar el caso de agregar mas crear otro vector y copiar en anterior dinamico.

}
}

void Facultad :: promedioEstudiante(){

 for(int i=0 ; i<tam; i++){

     cout<< p[i].getNombre();
     cout<< p[i].getApellido();
     cout<< p[i].promedio();
   }

}

void Facultad :: aprobMatP(int a){

  for(int i=0 ; i<tam; i++){
  bool aux = this->p[i].aprobodoM(a);

  if(aux){
    p[i].getNombre();
    p[i].getNombre();

    }

}
}
