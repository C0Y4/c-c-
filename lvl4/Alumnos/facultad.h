#ifndef FACULTAD_H
#define FACULTAD_H
#include <estudiante.h>


class Facultad
{protected:

  Estudiante *p;
  int indice;
  int tam=2;

public:
  Facultad();
  void agregarEstudiante();
  void promedioEstudiante();
  void aprobMatP(int a);

};

#endif // FACULTAD_H
