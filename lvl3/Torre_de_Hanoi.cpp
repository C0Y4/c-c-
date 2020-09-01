#include <iostream>

using namespace std; 

void hanoi(int discos, char A,char C, char B){
	
	if(discos==1)
	{
		cout<<" disco: "<<discos<<" desde: "<<A<<" hasta: "<<C<<endl;
	}
	else{
		hanoi(discos-1,A,B,C);
		cout<<"disco: "<<discos<<" desde: "<<A<<" hasta: "<<C<<endl;
		hanoi(discos-1,B,C,A);
	}
	
}

using namespace std;

int main(){
	
	int n;	
	char A,B,C;

	cout<<"TORRES DE HANOI"<<endl;
	cout<<"Torres A-B-C"<<endl;
	cout<<endl;
	cout<<"Ingresar numero de discos"<<endl;
	cin>>n;
	hanoi(n,'A','C','B');
return 0;
}


