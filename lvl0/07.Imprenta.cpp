
/*Una empresa dedica a la realizacio de panfletos, desea determinar el costo unitario
de cada panfleto. Para ello ingresa los siguientes datos: cantidad de lineas y color
(0: negro y blanco; 1 a todo color). El importe del panfleto se cobra por linea. El 
importe de cada linea es de $0.75. Si ha optado por un panfleto a todo color, al monto final,
debera realizarse un recargo de 30%
*/
#include <iostream>
using namespace std;

int main() {
	int cantlineas; 
	int color; 
	float linea; 
	float total=0;
	float monto,recargo; 
	linea= 0.75; 
	monto=0;
	int pedidos;
	int i=0;
	
	cout<<" IMPRENTA DON CARlOS "<<endl;
	cout<<endl; 
	cout<<" Cantidad de pedidos de panfletos "<<endl; 
	cin>>  pedidos; 
	
	while(i<pedidos){
	cout<<endl;
	cout<<"  Tipo de color"<<endl; 
	/* 0= blanco y negro 
	   1= a todo color*/
	
	cin>>color;	
	if(color==1){
	cout<<endl;	
	cout<<"  Cantidad de lineas"<<endl; 
	cin>>cantlineas; 
	monto=cantlineas*linea; 
	recargo= monto*0.30; 
	total= monto+ recargo; 
	}
	
	if(color== 0){
	cout<<endl; 
	cout<<"  Cantidad de lienas"<<endl; 
	cin>>cantlineas;
	monto=cantlineas*linea;
	total= monto;
	}
	cout<<endl; 
	
	cout<<" Costo a pagar el panfleto" <<endl; 
	cout<<total<<endl; 
	
	i++;
	}
		
	return 0;
}

