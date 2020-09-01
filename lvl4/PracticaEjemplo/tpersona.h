#ifndef TPERSONA_H
#define TPERSONA_H


class TPersona
{
  char apellido[30];
  char nombre[30];
  long dni;
  int anionNaci=1994;
  char estadoCivil;


public:

  int decadaNacimiento();

};

#endif // TPERSONA_H
