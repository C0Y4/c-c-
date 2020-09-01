#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	cout<<" IMPUESTO AUTOMOTOR"<<endl; 
	cout<<"----------------------------------------------"<<endl; 
	cout<<endl;
	
	int i=1;
	float valor; 
	float porcat1,porcat2,porcat3,porcat4;
	int cantautos; 
	int  cat;
	char patente[6];
	float total;
	float totalrecaudar; 
	totalrecaudar=0;
	float porcentaje=0 ; 
	float por=0;
	
	cout<<endl; 
	cout<<" INGRESAR CANTIDAD DE AUTOS "<<endl; 
	cin>>cantautos;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	
   	cout<<" INGRESAR PORCENTAJES DE CATEGORIA  "<<endl; 
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl; 
	cout<<" PORCENTAJES DE CATEGORIA 1 "<<endl; 
	cin>>porcat1;    // 20% seria 0.20
	cout<<endl; 
	cout<<" PORCENTAJES DE CATEGORIA 2 "<<endl; 
	cin>>porcat2;    // 30% seria 0.30
	cout<<endl; 
	cout<<" PORCENTAJES DE CATEGORIA 3 "<<endl;
	cin>>porcat3;   // 40% seria 0.40
	cout<<endl; 
	cout<<" Porcentaje de Categoria 4 "<<endl; 
	cin>>porcat4;    // 50% seria 0.50
	cout<<endl; 
			
	while(i<=cantautos)
	{
		cout<<" INGRESAR PATENTE DEL VEHICULO"<<endl;
		cin>>patente;
		cout<<endl; 
		cout<<" INGRESAR VALOR DEL  VEHICULO"<<endl; 
		cin>>valor;
		cout<<endl; 
		cout<<" INGRESAR CATEGORIA "<<endl; 
		cin>>cat;
		cout<<endl; 
		
		switch(cat)
		{	case 1: 
				por=porcat1;
			    break;
			case 2:
			    por=porcat2;
			     break;
		    case 3:
			    por=porcat3;
		        break;
			case 4:
			    por=porcat4;
				break;
				}
							
    
	porcentaje=(valor*por);
	cout<<"PORCENTAJE"<<porcentaje<<endl; 
	
	total=valor+porcentaje;
	
	cout<<"-----------------------------------------"<<endl;
	cout<<endl;
	cout<<" PATENTE: "<<patente<<endl; 
	cout<<endl; 
	cout<<" VALOR DEL VEHICULO: "<<valor<<endl;
	cout<<endl; 
	cout<<" TOTAL A PAGAR: "<<total<<endl;
	cout<<endl; 
	

	totalrecaudar= totalrecaudar+porcentaje;
		
	i++;
	
	}
	cout<<"------------------------------------------"<<endl; 
    cout<<" TOTAL RECAUDADO POR IMPUESTOS"<<endl;
	
    cout<<totalrecaudar;
	
	return 0;
}

