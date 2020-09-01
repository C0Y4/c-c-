#include <iostream>

using namespace std;

struct nodo{

  int dato;
  nodo *punt;

};

class Cola {

private:

 nodo *inicio;
 nodo *fin;

public:

 Cola();
  void agregarElemento(int a);
  int borrarElemento();


};

 Cola  ::  Cola(){

  this->inicio=NULL;
  this->fin=NULL;

}

void Cola :: agregarElemento(int a){
  nodo *p = new nodo;
  p->dato = a;
  p->punt = NULL;

 if(this->inicio == NULL){
     this->inicio = p;
     this->fin = p;
   }
 else{
     this->fin->punt = p;
     fin = p;
   }
}

int Cola::borrarElemento(){

  nodo *aux;
  int x;

  x = inicio->dato;
  aux = inicio;
  inicio = inicio->punt;

  delete aux;

  return x;

}

int main()
{
  Cola c;
  c.agregarElemento(10);
  c.agregarElemento(30);
  c.agregarElemento(50);

  cout<<c.borrarElemento()<<endl;
  cout<<c.borrarElemento()<<endl;
  cout<<c.borrarElemento()<<endl;

  return 0;
}

