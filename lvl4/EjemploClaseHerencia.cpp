#include <iostream>
using namespace std;

class B
{
	int a; 
	
public:
	int b;
	void get_ab();
	int get_a();
	void show_a();
		
};

class D : private B
{
	
	int c;

public: 
		
	void mul();
	void display();
	
	
};

//............................................................................

void B :: get_ab(){
	
	cout<<"Introduzca los valor de a y b"<<endl;
	cin>>a;
	cin>>b;
		
}

int B :: get_a()
{
	return a ; 
}
void B ::show_a(){
	
	cout<<"a = "<< a <<endl;  
}

void D :: mul(){
	
	get_ab();
	c = b* get_a();
		
}
void D :: display(){
	
	show_a();
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	
}

//.....................................................................





int main(int argc, char *argv[]) {
	
	D d; 
	
	// d.get_a();  NO FUNCIONA
	d.mul();
	// d.show_a();  NO FUNCIONA
	d.display();
	//d.b;  NO FUNCIONA ahora b es privado
	d.mul();
	d.display();
	
	
	
	return 0;
}

