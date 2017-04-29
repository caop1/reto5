#include <iostream>
#include <string>
#include "Puntero.h"


using namespace std;

int main(){
	string** h;
	double* n;
	Puntero punterito = Puntero(h, n);
	punterito.recolectarDatos();
	
	
	
	return 0;
}
