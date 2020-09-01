#ifndef TERRENO_H
#define TERRENO_H
#include "bien.h"


class Terreno : public Bien
{
public:
  Terreno(double v);
  double amortizar();

};

#endif // TERRENO_H
