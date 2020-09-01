#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <cstring>
using namespace std;


class Alumno
{
private:
  string cedula;
  string nombre;
  float nota1;
  float nota2;
  float nota3;


public:
  Alumno();
  void setCedula(string a);
  string getCedula();
  void setNombre(string n);
  string getNombre();
  void setNota1(float a);
  float getNota1();
  void setNota2(float c);
  float getNota2();
  void setNota3(float e);
  float getNota3();
  float notaFinal();
  string Calificacion();


};

#endif // ALUMNO_H
