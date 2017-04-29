/*3) Diseñar un programa que cumpla (Sin clases)

- Declarar un puntero de punteros string arrayDatosPersona;

- Declarar un puntero double llamado salariosPersona;

- Enviar el puntero de punteros arrayDatosPersona  método recolectarDatos;

- Enviar ambos punteros método recolectarSalariosPersona

- Enviar ambos punteros al método imprimirResultados.

En el método void recolectarDatos(string ** & datos)

- Inicializar con tres filas, y en cada fila dos columnas.

- Solicite los nombres y apellidos de tres personas para cada fila, la primera columna contiene nombres y la segunda los apellidos

En el método void recolectarSalariosPersona(double * & salarios, string ** & datos)

- Para cada persona en datos, pedir el salario de la siguiente forma: "Ingrese el salario de la persona <nombre> <apellido>"

En el método imprimirResultados(double * &salarios, string ** & datos)

- Para cada persona imprimir "La persona <nombre> <apellido> devenga <salario>
*/

#include <iostream>
#include <string>

using namespace std;





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



int main(){//Se inicializan los arreglos y se llaman las funciones
  string ** arrayDatosPersona = new string * [3];
  double * salariosPersona = new double[3];
  
  recolectarDatos(arrayDatosPersona);
  recolectarSalariosPersona(salariosPersona, arrayDatosPersona);
  imprimirResultados(salariosPersona, arrayDatosPersona);
  
  

	return 0;
}
