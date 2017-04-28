/*
 * Autor:Cristian Alexander Ospina Pelaez y grupo
 * Codigo:1663740
 * descrpcion:punteros
 * fecha de creacion: abril-27-2017
 * ultima fecha de modificacion:abril-28-2017
 * nombre del archivo:punto2.cpp
 */



#include <iostream>
#include <math.h>

using namespace std;

void modificar(int* ptr){
	*ptr = (*ptr)*(*ptr);
	
}

int main(){
	
	
	int *ptrVariable = 0;
	int entero1 = 100;
	ptrVariable = &entero1;
	modificar(ptrVariable);
	int entero2 = 300;
	ptrVariable = &entero2;
	modificar(ptrVariable);
	
	
	
	
	cout<<entero1<<" "<<entero2<<endl;
	
	
}
