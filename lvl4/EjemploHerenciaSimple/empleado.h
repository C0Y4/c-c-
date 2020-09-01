#ifndef EMPLEADO_H
#define EMPLEADO_H


class empleado
{
private:
    char nombre[50];
    char puesto[50];
    float salario;


public:
    empleado(char*, char*,float);
    void mostraDatos();

};

#endif // EMPLEADO_H
