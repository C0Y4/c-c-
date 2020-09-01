#include <iostream>

/*Escriban una Funcion booleana SonIguales que reciba dos listas como parametros
 y devuelva si son iguales , mismos elmentos en el mismo orden, o False caso contrario */

using namespace std;

bool sonIguales( int v[],int a[],int l);

int main()
{
  int v[3]{5,3,2};
  int a[3]{4,9,2};


  cout<<sonIguales(v,a,3);


  return 0;
}

bool sonIguales( int v[],int a[],int l){

  if(l==1){
      if(a[l-1] == v[l-1]){
          return true;
        }
      else {return false;}
    }
  else{
      if(a[l-1] == v[l-1]){
          sonIguales(v,a,l-1);
        }
      else {return false;}
    }

}
