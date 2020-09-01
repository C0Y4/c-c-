#include <iostream>
#include "juego.h"
#include "secuenciaimpar.h"
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    int salgo;
    while(salgo!=9) {
    Juego Jue1;
   int numerox;
    Jue1.muestra();
    cout<< "Numero de la secuencia que falta? ";cin>>numerox;
    if(Jue1.verificar_Secuencia(numerox))
         cout<<setw(20)<< "Enhorabuena! :D\n";
    else cout<<setw(20)<< "No che... :(\n";
    cout<<setw(50)<< "\n\nVolvemos a jugar? \nCualquier numero para continuar\n(9). Para salir\t ";cin>>salgo;cout<<"\n\n\n";

    }
    return 0;
}

