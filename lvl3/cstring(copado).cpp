
#include<cstring>
#include <iostream>
#include <cstdio>

using namespace std;

void ordenar(char * * p,int n);
void devolver_2(char **p,int n);
void ordenarLongitud(char * * p,int n);

int main()
{	char *p[4]; 

	for(int i= 0; i<4; i++){
	
	p[i]=new char[30];
	gets(p[i]);
	
	 }
	
	ordenarLongitud(p,4);
	
	for(int i=0;i<4;i++){
		puts(p[i]);
			}
	
	cout<<"Devuelve los 2 primeros Cstring"<<endl; 
	devolver_2(p,2);
	
}

void ordenar(char * * p,int n){
	char *aux;
	for (int i =0; i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(p[i],p[j])>0);
			{
				strcpy(aux,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],aux);
			}
		}
	}
}
void devolver_2(char **p,int n){
	
	for(int i=0;i<n;i++){
		puts(p[i]);
	}
	
	
}
void ordenarLongitud(char * * p,int n){
	char *aux;
	for (int i =0; i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strlen(p[i])>strlen(p[j]));
			{
				strcpy(aux,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],aux);
			}
		}
	}
}
