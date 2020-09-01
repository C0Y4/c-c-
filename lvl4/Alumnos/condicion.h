#ifndef CONDICION_H
#define CONDICION_H


class Condicion
{
protected:

  int cod;
  int nota;
  int i=1000;

public:
  Condicion();
  bool aprobada();
  int devolverCod();
  int devolverNota();
  void asignarNota(int a );


};

#endif // CONDICION_H
