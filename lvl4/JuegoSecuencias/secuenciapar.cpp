#include "secuenciapar.h"
#include <stdlib.h>
SecuenciaPar::SecuenciaPar()
{
    int  Numero=rand()%100+1;
    int semilla= rand()%10+1;

    for(int i=0;i<4;i++)   this->num[i]= Numero*2+(i*semilla);


}
