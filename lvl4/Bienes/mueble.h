#ifndef MUEBLE_H
#define MUEBLE_H
#include "bien.h"

class Mueble : public Bien
{
protected:

   int anio; // cantidad de años de existencia de bien

public:
  Mueble(double a, int n);
   double amortizar();


};

#endif // MUEBLE_H
