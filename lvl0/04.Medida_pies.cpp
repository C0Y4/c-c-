
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	float pies,med,mts=1,medep;
	
	pies = 0,3048;
	
	cout<<"ingresar medida"<<endl;
	cin>>med;
	
	medep=(med)*(pies)*(mts);
	cout<<" medida en pies :"<<endl;
	cout<<medep;
	
	
	return 0;
}
