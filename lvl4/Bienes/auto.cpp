#include "auto.h"

 Auto :: Auto(double a, double k)
{
  this->valor=a;
  this->km=k;

}

double Auto ::amortizar(){
  double x;

  while(km<1000 ){

    x= x + km*0.10;

    km=km-1000;

    }

  x=this->valor+x;

  return x;

}
