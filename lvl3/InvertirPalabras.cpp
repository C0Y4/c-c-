#include <iostream>
#include <cstring>

using namespace std;

char *invertir_Vec(char *pVec, int tam);
int main()
{
	int tam,i;
	cout<< "Ingresar tamanio del vector de vectores: ";
	cin>>tam;
	char *pVec[tam];
	cout<< "\nIngreso de palabras\n";
	for(i=0; i<tam;i++)
	{
		pVec[i]=new char[30];
		cin>>pVec[i];
	}
	for(i=0;i<tam;i++)  pVec[i] = invertir_Vec(pVec[i],strlen(pVec[i]));
	cout<<"Palabras invertidas \n";
	for( i=0;i<tam;i++) cout<<pVec[i]<<endl;
	for(i=0;i<tam;i++)    delete [] pVec[i];
	return 0;
}

char *invertir_Vec(char *pVec, int tam)
{
	int j=tam;
	char *pVecaux= new char [tam];
	for(int i=0 ;i<tam;i++)
	{
		pVecaux[i]=pVec[j-1];
		j--;
	}
	return pVecaux;
}
