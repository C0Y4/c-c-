#include "alumno.h"
#include <iostream>
using namespace std;

Alumno::Alumno()
{
    nota1=0;
    nota2=0;
    nota3=0;
}

void Alumno ::setCedula(string a){
   cedula=a;
}

string Alumno :: getCedula(){
  return cedula;
}

void Alumno :: setNombre(string n){
  nombre=n;
}

string Alumno :: getNombre(){
  return nombre;
}

void Alumno :: setNota1(float a){
  nota1=a;
}

float Alumno :: getNota1(){
  return nota1;
}

void Alumno :: setNota2(float c){
    nota2=c;
}

float Alumno :: getNota2(){
     return nota2;
}

void Alumno :: setNota3(float e){
    nota3=e;
}

float Alumno :: getNota3(){
   return nota3;
}

float Alumno :: notaFinal(){
  float a=(this->nota1+this->nota2+this->nota3);
  return ((a)/3);
}

string Alumno::Calificacion(){
  float a=notaFinal() ;
  if(a>=75){
      return  "  Promocionado " ;
    }
  else{ if(a>=50){
      return   " Regular " ;}
       else{
        return  " Libre " ;}

  }
}
