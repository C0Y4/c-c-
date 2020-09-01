#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantamigos;
	int cantcar=500;
	int cantpan=120;
	int kg=1000;
	int grcarne, grpan,kgcarne,kgpan;
	
	cout<<" Cantidad de Amigos"<<endl; 
	cin>>cantamigos;
	cout<<" Cantidad de Carne"<<endl; 
	cin>>cantcarne;
	cout<<" Cantidad de Pan"<<endl; 
	cin>>cantpan;
	cout<<endl; 
	grcarne=(cantamigos*cantcar);
	grpan=(cantamigos*cantpan);
	
	kgcarne=(grcarne/kg);
	kgpan=(pan/kg);
	cout<<endl;
	cout<<"cantidad de gr carne"<<endl; 
    cout<<grcarne; 
	cout<<"cantidad de gr carne"<<endl; 
	cout<<"cantidad de gr carne"<<endl; 
	
	
	
	
	return 0;
}

