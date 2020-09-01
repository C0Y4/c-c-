#include "secuenciafibonacci.h"
#include <math.h>
#include <stdlib.h>

SecuenciaFibonacci::SecuenciaFibonacci()
{   int n = rand()%12+1;
    double  fn1=((1+sqrt(5))/2), fn2=((1-sqrt(5))/2), q=(1/sqrt(5));

    for (int i=0; i<4;i++)
    {
        num[i]=q*pow(fn1,n) - q*pow(fn2,n);
        n++;
    }
}
