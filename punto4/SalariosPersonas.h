/*
 * Autor: Valentina Granobles 1663766
 * 		  Dayana Herrera
 *		  Cristian Ospina
 *		  David Bocanegra
 * Descripción: Punto 4. Consiste en pedirle al usuario que ingrese un listado de tres personas (nombre y apellido) y su salario,
 *              que se almacena en unos arreglos (bidimensional para los nombres y apellidos y unidimensional para los salarios)
 * Fecha de modificación: 28 de Abril
 */
 
 #ifndef SALARIOSPERSONAS_H
 #define SALARIOSPERSONAS_H
 
 #include <iostream>
 #include <string>
 using namespace std;
 
class SalariosPersonas{
	private:
		string nombre;
		string apellido;
		double salario;
		
	public:
		SalariosPersonas();
		~SalariosPersonas();
		
		void recolectarDatos(string ** & datos);
		void recolectarSalariosPersona(double * & salarios, string ** & datos);
		void imprimirResultados(double * & salarios, string ** & datos);
		
		
		string getNombre();
		string getApellido();
		double getSalario();
		
		void setNombre(string  nombreIn);
		void setApellido(string apellidoIn);
		void setSalario(double salarioIn);
		
};
#endif
