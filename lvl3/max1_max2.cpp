#include <iostream>
#include <cstdlib>
using namespace std;

struct dos_max{
	int max1;
	int max2;	
};
dos_max calcula_dosmax(int x[],int n);

int main(int argc, char *argv[]) {
	
	dos_max m;
	int a[20];
	int n;
		
	cout<<"Cuantos Datos"<<endl;
	cin>>n;
	
	for(int i=0; i<n ; i++){
		cout<<endl<<"a["<<i<<"]=";
		a[i]=rand()%10+1;		
		cout<< a[i];
	}
	
	m=calcula_dosmax(a,n);
	
	cout<<endl;
	cout<<"Mayor es: "<<m.max1;
	cout<<endl;
	cout<<"2 Mayor es: "<<m.max2;
	
	
	return 0;
}

dos_max calcula_dosmax(int x[],int n){
	
	dos_max d; 
	
	if(x[0]>x[11]){
	
		d.max1=x[0];
		d.max2=x[1];
		
	}
	else{
		
		d.max2=x[0];
		d.max1=x[1];
	}
	
	for(int i=2;i<5;i++){
		
		if(x[i]>d.max1){
			
			d.max2=d.max1;
			d.max1=x[i];
		
		} 
		else { if(x[i]>d.max2){
			d.max2=x[i];
		}
		}
	}
	
	
	return d; 
	
	
}
