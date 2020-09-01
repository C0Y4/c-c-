#include <iostream>
using namespace std;

class Crectangulo{
private:		
	float base;
	float altura;
	float area;
		
public:
	
	void fijar_valores( float a, float b){		
		base=a;
		altura=b;			
	}
	void calcular_area();
	float ver_area(){ return area;}
};

void Crectangulo::calcular_area(){
	area=base*altura;
	}

int main(int argc, char *argv[]) {
	
	Crectangulo r1;
	r1.fijar_valores(5,2);
	r1.calcular_area();
	cout<<r1.ver_area();
	
	
	return 0;
}

