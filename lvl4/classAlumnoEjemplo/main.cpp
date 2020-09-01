#include <iostream>
#include <cstring>
#include <alumno.h>


using namespace std;

int main()
{
   Alumno  n1;
  n1.setCedula( "000001");
  cout<<n1.getCedula()<<endl;
  n1.setNombre("HernanGarcia");
  cout<<n1.getNombre()<<endl;
  n1.setNota1(00);
  n1.setNota2(30);
  n1.setNota3(40);
  cout<<n1.getNota1()<<endl;
  cout<<n1.getNota2()<<endl;
  cout<<n1.getNota3()<<endl;
  cout<<n1.notaFinal()<<endl;
  cout<<n1.Calificacion()<<endl;

  return 0;
}

