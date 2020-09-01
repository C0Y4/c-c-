
#include<cstring>
#include <iostream>
#include <cstdio>

using namespace std;

void ordenar(char * * p,int n);

int main()
{	
	
	char *p[4]; 
	p[0]=new char[30];
	strcpy(p[0],"Hola");
	
	
	p[1]=new char[30];
	strcpy(p[1],"Buen");
	
	
	p[2]=new char[30];
	strcpy(p[2],"Dia");
	
	
	p[3]=new char[30];
	strcpy(p[3],"Tal");
	
	ordenar(p,4);
	
	for(int i=0;i<4;i++){
		
		puts (p[i]);
		
	}
}

void ordenar(char * * p,int n)   
{
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
