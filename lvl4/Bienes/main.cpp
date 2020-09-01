#include <iostream>
#include "auto.h"
#include "bien.h"
#include "gestorcontable.h"
#include "mueble.h"
#include "terreno.h"



using namespace std;

int main()
{
  GestorContable cont;
  Auto *n = new Auto(10000,1000);

  n->amortizar();
  cont.imprimirA(n);
  cout<<endl;

  Mueble *b = new Mueble(30000,10);
  b->amortizar();

  cont.imprimirA(b);

  cout<<endl;

  Terreno *c = new Terreno(50000);
  c->amortizar();

  cont.imprimirA(c);

  cout<<endl;


  return 0;
}

