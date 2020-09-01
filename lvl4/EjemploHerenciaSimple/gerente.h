#ifndef GERENTE_H
#define GERENTE_H
#include "empleado.h"


class gerente : public empleado
{private:

     float bono_anual;
     char automovil[50];
     int opc_acciones;

public:
   gerente(char* n,char* p, char* automovil, float s, float bono_anual, int opc_acciones);
   void muestra_gerente(void);
};

#endif // GERENTE_H
