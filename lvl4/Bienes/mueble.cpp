#include "mueble.h"
#include <iostream>

using namespace std;


Mueble:: Mueble(double a, int n)
{
      this->valor=a;
      this->anio=n;

}

double Mueble::amortizar(){

  int x;
  x=this->anio;

  double a;

  a= (x*0.05 )*( this->valor) + this->valor;

  return a;

    }
