#include <iostream>
#include <cstdlib>


using namespace std;

void mostrar(int m[][10],int a){
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
		cout<<m[i][j];
} }
}

int main(int argc, char *argv[]) {
	int mat[10][10];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
		
			mat[i][j]=rand()&9+1;
			
				}
			}
	
	mostrar(mat,10);
	
	
	return 0;
}

