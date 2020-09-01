#include <iostream>

using namespace std;

struct nodo{

  int dato;
  nodo *sig;

};

class Pila {

private:

  nodo *pila;

public:

  void agregarElemento(int x);
  Pila();
  int borrarElemento();


};

Pila :: Pila(){

  pila = NULL;

}

void Pila :: agregarElemento(int x){
  nodo *p  = new nodo;
  p->dato = x;
  p->sig = pila;
  pila = p;

}

int Pila :: borrarElemento(){
  int aux;
  nodo *p;

  if (pila == NULL ){ return 0;}
  else {
  aux = pila->dato;
  p = pila;

  pila = this->pila->sig;

  delete p;
}
  return aux;

}
int main()
{
    Pila p;
    p.agregarElemento(10);
    p.agregarElemento(20);
    p.agregarElemento(30);

    cout<<p.borrarElemento()<<endl;
    cout<<p.borrarElemento()<<endl;
    cout<<p.borrarElemento()<<endl;


  return 0;
}

