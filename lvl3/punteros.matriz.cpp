#include <iostream>
#include <cstdlib>
using namespace std;

int sumaMat(int mat[][10]);

int main(int argc, char *argv[]) {
	
	const int filas=5;
	const int columnas=5; 
	
	int mat[filas][columnas];
	int (*x)[columnas];
	int suma=0;
	
	for(int i=0;i<filas;i++){
		
		for(int j=0;j<columnas;j++){
				
		mat[i][j]=rand()%9+0;
		cout<<mat[i][j];  
	}
		
	cout<<endl;
	}
	x=&mat[0];
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			
			cout<<*(*(x+i)+j);
			suma+=*(*(x+i)+j);
		}
	}
	
	cout<<endl; 
cout<<"SUMA"<<endl;
	cout<<suma; 
	
	return 0;
}


	
	
