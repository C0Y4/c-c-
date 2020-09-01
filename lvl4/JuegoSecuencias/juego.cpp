#include "juego.h"
#include "secuencia.h"
#include "secuenciaimpar.h"
#include "secuenciapar.h"
#include "secuenciafibonacci.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


 Juego::Juego()
 {
     int opcion =rand()%3;
     switch (opcion)
     {
      case 0: this->unaSecuencia = SecuenciaImpar();
       break;

      case 1: this->unaSecuencia = SecuenciaFibonacci();
       break;

      default: this-> unaSecuencia = SecuenciaPar();
         break;
     }

 }

bool Juego::verificar_Secuencia(int n)
 {
     if (n!=unaSecuencia.devolver_num3())
            return false;
     else return true;
 }

void Juego::muestra()
{
    unaSecuencia.mostrar_Sec();
}

