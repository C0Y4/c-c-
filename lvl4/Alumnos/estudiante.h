#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "condicion.h"

class Estudiante
{
    char nombre[30];
    char apellido[30];
    long dni;
    int anio;
    Condicion mat[3];

public:
  Estudiante();
  void setNombre();
  void setApellido();
  void setDni();
  void setAnioIng();
  void setNota();

  char* getNombre();
  char* getApellido();
  int  getAnio();
  float promedio();
  bool aprobodoM(int a);



};

#endif // ESTUDIANTE_H
