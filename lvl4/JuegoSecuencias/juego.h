#ifndef JUEGO_H
#define JUEGO_H
#include "secuencia.h"

class Juego
{
   private:
    Secuencia unaSecuencia;
public:
  bool  verificar_Secuencia(int n);
  void muestra();

    Juego();
};



#endif // JUEGO_H
