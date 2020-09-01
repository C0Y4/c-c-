#ifndef AUTO_H
#define AUTO_H
#include"bien.h"

class Auto : public Bien
{ protected:

  double km;

public:
  Auto(double a, double k);
  double amortizar();

};

#endif // AUTO_H
