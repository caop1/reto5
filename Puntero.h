#ifndef PUNTERO_H
#define PUNTERO_H
#include <iostream>
#include <string>
using namespace std;
class Puntero{
	
	private:
	string** datos;
	double* salarios;
	
	public:
	Puntero(string** n, double* s);
	~Puntero();
	void recolectarDatos();
	void recolectarSalariosPersona();
	void imprimirResultados();
};
#endif
