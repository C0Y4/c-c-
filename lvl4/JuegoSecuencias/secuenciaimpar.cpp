#include "secuenciaimpar.h"
#include <stdlib.h>
SecuenciaImpar::SecuenciaImpar()
{
   int  Numero=rand()%100+1, semilla=rand()%10+1;
   for(int i=0;i<4;i++)  this->num[i]= Numero*2+1+(i*semilla);


}
