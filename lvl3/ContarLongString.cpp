#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

int cont(char *p);

int main(int argc, char *argv[]) {
	char v[20];
	char *p;
	p=v;

	int longitud=0;


	cout<<"Ingersar palabra: ";
	gets (p);

	longitud=cont(p);

	cout<<"Longitud de la palabra: ";
	cout<<longitud;



	return 0;
}

int cont(char *p){


        int s=0;
    while( *(p+s) != 0 ){
                s++;
        }
        return s;

        }
