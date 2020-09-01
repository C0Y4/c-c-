#include <iostream>
using namespace std;

void vaciar_mat(int m[][10]);
void diagonal( int m[][10]); 
void mostrar(int m[][10]);

int main(int argc, char *argv[]) {

	int mat[10][10]; 
	
	vaciar_mat(mat);
	diagonal(mat);
	mostrar(mat);
	return 0;
}

void mostrar(int m[][10]){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
		cout<<m[i][j];}
		cout<<endl;
		}
	
}

void diagonal(int m[][10]){
	for(int i=0;i<10;i++){
			m[i][i]=1;}
		
}
void vaciar_mat(int m[][10]){
	for(int i=0;i<10;i++){ 
	   for(int j=0;j<10;j++){
		
     m[i][j]=0;
	 
	}
	}
	
}

