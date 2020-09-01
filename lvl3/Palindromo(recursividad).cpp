#include <iostream>
using namespace std;

bool palindromo(char palabra[], int inicio, int fin){
	
	if(fin >= inicio){
		return true;}
	else { if(palabra[inicio]==palabra[fin]){
		return palindromo(palabra,inicio+1,fin-1);
	}
	else{ if(palabra[inicio]!=palabra[fin]){
		return false;}}}
		
}

int main(int argc, char *argv[]) {
	
	char p[5];  //abcba
	int inicio=0;
	int fin=4;
	bool v;
	cout<<"Ingresar Palabra"<<endl;
	cin.getline(p,5);
	cout<<endl; 
	
	v=palindromo(p,inicio,fin);
	
	if(v){
		cout<<"PALINDROMO"<<endl;
	}
	else{ cout<<"NO ES PALINDROMO"<<endl; 
	}
	
	return 0;
}

