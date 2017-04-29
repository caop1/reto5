/*
 * Autor: Valentina Granobles 1663766
 * 		  Dayana Herrera
 *		  Cristian Ospina
 *		  David Bocanegra
 * Descripción: Punto 4. Consiste en pedirle al usuario que ingrese un listado de tres personas (nombre y apellido) y su salario,
 *              que se almacena en unos arreglos (bidimensional para los nombres y apellidos y unidimensional para los salarios)
 * Fecha de modificación: 28 de Abril
 */
 
 #include <iostream>
 #include "SalariosPersonas.h"
 
 int main(){
	 void recolectarDatos(string ** & datos){ //se crea la matriz bidimensional para guardar los nombbres y apellidos de las personas
		for(int i=0; i<3; i++){
        datos[i]= new string [2];
}
    
    
string nombre;
string apellido;


		for(int i=0; i<3; i++){//se recorre la matriz y se le va asignando a cada posición el nombre y apellido
							//se define la posición 0 y 1 de la columna para que siempre 
							//en la columna 0 guarde los nombres y en la 1 los apellidos
        cout << "Ingrese un nombre" << endl;
        cin >> nombre;
        datos[i][0] = nombre;
        cout << "Ingrese un apellido" << endl;
        cin >> apellido;
        datos[i][1]  = apellido;
		}
	}
	
	void recolectarSalariosPersona(double * & salarios, string ** & datos){ //se le pide al usuario ingresar el salario que corresponde
	//a la persona que se le muestra en pantalla. Para eso se le muestra la matriz en la posición i con colunma 0
	//para el nombre y 1 para el apellido.

		for (int i=0; i<3; i++){
        cout << "Ingrese el salario de la persona" << datos[i][0] << " " << datos[i][1] << endl;
        cin >> salarios[i];
		}
	}

	void imprimirResultados(double * & salarios, string ** & datos){ //Imprime el nombre, apellido y salario de una de las personas

		for (int i=0; i<3; i++){
       cout << "La persona" << datos[i][0] << " " << datos[i][1] << "devenga" <<salarios[i]<< endl;
		}
	}
	
	string ** arrayDatosPersona = new string * [3];
  double * salariosPersona = new double[3];
  
  recolectarDatos(arrayDatosPersona);
  recolectarSalariosPersona(salariosPersona, arrayDatosPersona);
  imprimirResultados(salariosPersona, arrayDatosPersona);
  
  

	return 0;
	 
}
 
