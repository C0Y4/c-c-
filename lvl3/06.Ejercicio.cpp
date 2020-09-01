
/*
    Ejemplo Ejercicio
    C++ 
    Autor: C0Y4

*/

/*
	6) Se dispone de una lista con el número de documento de un grupo de alumnos. 
	De cada uno de ellos se dispone además de las 3 notas obtenidas en una materia durante el año. 
	Se pide realizar un listado ordenado en forma decreciente por promedio del alumno con el siguiente formato: 
	DOCUMENTO NOTA 1 NOTA 2 NOTA 3 PROMEDIO xxxxxxxx 99 99 99 99 */

#include <iomanip>
#include <iostream> 

using namespace std; 

int main() 
{ 
	int n; 
	int alumnos[100][5]; // 100*5= 500 elementos 
	int aux1,i,j,k; 
	int aux; 

	cout<<"Ingrese el numero de alumnos:"<<endl ;
	cin>>n;    

	// Carga de Datos
	for(i=0;i<n;i++) 
	{ 
		cout<<"dni: "; 
		cin>>alumnos[i][0]; 
		cout<<"nota 1: "; 
		cin>>alumnos[i][1]; 
		cout<<"nota 2: "<<endl; 
		cin>>alumnos[i][2]; 
		cout<<"nota 3: "<<endl;
		cin>>alumnos[i][3]; 
	} 

	// Calculo del Promedio
	for(i=0;i<n; i++) { 

		cout<<"Calcular promedio"<<endl; 
		alumnos[i][4]=(alumnos[i][1]+alumnos[i][2]+alumnos[i][3])/3; 
		cout<<"Promedio: "<<" "<<alumnos[i][4]<<endl;
	   
	} 

	// Ordenar alumnos[][]

	for(i=0;i<n-1;i++){
		for(j=i+1;j<(n-1);j++){

   		if(alumnos[i][4]< alumnos[j][4]) // Orden por Promedio
	 		aux=alumnos[i][4]; 
	 		alumnos[i][4] = alumnos[j][4];
	 		alumnos[j][4] = aux;
		}
	}

	// Mostrar listado de alumnos
	for(i=0;i<n;i++){
		cout<<"DNI :    "<<"NOTA 1  "<<"NOTA 2  "<<"NOTA 3    "<<"PROMEDIO     "<<endl; 
		cout<<alumnos[i][0]<<setw(5)<<alumnos[i][1]<<setw(7)<<alumnos[i][2]<<setw(9)<<alumnos[i][3]<<setw(10)<<alumnos[i][4]<<endl;
	}  

return 0;
}
