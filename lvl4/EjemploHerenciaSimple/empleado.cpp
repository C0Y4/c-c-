#include "empleado.h"
#include <cstring>
#include <iostream>
using namespace std;


empleado :: empleado(char*n, char* p,float sal)
{
  strcpy(nombre,n);
  strcpy(puesto,p);
  salario=sal;

}

void empleado :: mostraDatos(){

  puts(nombre);
  puts(puesto);
  cout<<"Salario : "<<salario<<endl;

}
