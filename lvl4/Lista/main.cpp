#include <iostream>

using namespace std;

struct nodo{

  int dato;
  nodo *sig;

};

class Lista{

private:

  nodo *inicio;
  nodo *fin;

public:

  void agregarElemento(int x);
  Lista();
  void mostrarElementos();


};

Lista::Lista(){

  this->inicio = NULL;
  this->fin = NULL;

}

void Lista ::agregarElemento(int x){

  nodo *p = new nodo;
  p->dato = x;
  p->sig = NULL;

  if(inicio == NULL ){
      inicio = p;
      fin = p;

    }
  else{

      fin->sig = p;
      fin = p;

}
}

 void Lista:: mostrarElementos(){

    nodo *aux;
    aux = inicio;

 while (aux != NULL){

     cout<<aux->dato<<endl;
     aux = aux->sig;

   }

 }


int main()
{

  Lista l;
  l.agregarElemento(10);
  l.agregarElemento(20);
  l.agregarElemento(30);

  l.mostrarElementos();



  return 0;
}

