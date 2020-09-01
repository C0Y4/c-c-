#include "gerente.h"
#include "empleado.h"
#include <cstring>

gerente::gerente(char* n,char* p, char* automovil, float s, float bono_anual, int opc_acciones):empleado(n,p,s)
{

  strcpy(gerente::automovil,automovil);
  gerente::bono_anual=bono_anual;
  gerente::opc_acciones=opc_acciones;


}

void gerente :: muestra_gerente(void){

 muestra_empleado();
 cout<<"Autom¢vil:          "<<automovil<<endl;
 cout<<"Bonificacion anual:   "<<bono_anual<<endl;
 cout<<"Acciones de la Empresa : "<<opc_acciones<<endl;



}
