#include <iostream>

using namespace std;

void borrarElemento(int v[], int x, int l);

int main() {


	int v[5] = {10,5,3,5,7};

	for(int i=0; i<5; i++){

		cout<<v[i]<<endl;
	}

	borrarElemento(v,5,5);

	for(int i=0; i<5; i++){

		cout<<v[i]<<endl;
	}
	return 0;
}

void borrarElemento(int v[], int x, int l){

	if (l== 1 ){
		if(v[l-1] == x ){
			v[l-1]=0;
		}

	}

	else{
		if(v[l-1] == x ){
			v[l-1]=0;
		  borrarElemento(v,x,l-1);}

		else{
			borrarElemento(v,x,l-1);
		}

	}

}
