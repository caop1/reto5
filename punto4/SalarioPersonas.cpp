/*
 * Autor: Valentina Granobles 1663766
 * 		  Dayana Herrera
 *		  Cristian Ospina
 *		  David Bocanegra
 * Descripción: Punto 4. Consiste en pedirle al usuario que ingrese un listado de tres personas (nombre y apellido) y su salario,
 *              que se almacena en unos arreglos (bidimensional para los nombres y apellidos y unidimensional para los salarios)
 * Fecha de modificación: 28 de Abril
 */

#include "SalariosPersonas.h"
#include <iostream>

using namespace std;

SalariosPersonas::SalariosPersonas(){
	
	
	}

SalariosPersonas::~SalariosPersonas(){
}

/*void SalariosPersonas::recolectarDatos(string ** & datos){
	datos[i][0]=nombreIn:
	datos[i][1]=apellidoIn:
	}
	
void SalariosPersonas::recolectarSalariosPersona(double * & salarios, string ** & datos){
	salarios[i]=salarioIn;
	}
	
void imprimirResultados(double * & salarios, string ** & datos){
	datos[i][0]= ->getNombre();
	datos[i][1]= ->getApellido();
	salarios[i]= <>getSalario();
	*/}

string SalariosPersonas::getNombre(){
	return nombre;
	}
	
string SalariosPersonas::getApellido(){
	return apellido;
	}
	
double SalariosPersonas::getSalario(){
	return salario;
	}
	
string SalariosPersonas::setNombre(string nombreIn){
	nombre=nombreIn;
	}
	
string SalariosPersonas::setApellido(string apellidoIn){
	apellido=apellidoIn;
	}
	
double SalariosPersonas::setSalario(double salarioIn){
	salario=salarioIn;
	}

void SalariosPersonas::recolectarDatos(string ** & datos){
	
	
	}
