#include "condicion.h"

Condicion::Condicion()
{
  this->cod=i;
  this->nota=0;
  this->i=i+1;
}

bool Condicion::aprobada(){

  if(this->nota >= 6){
      return true;
    }
  else return false;

}

int Condicion :: devolverCod(){

  return cod;

}

int Condicion :: devolverNota(){

  return nota;
}

void Condicion :: asignarNota(int a){

  this->nota=a;

}
