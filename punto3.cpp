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





void recolectarDatos(string ** & datos){
    for(int i=0; i<3; i++){
        datos[i]= new string [2];
}
    
    
string nombre;
string apellido;


    for(int i=0; i<3; i++){
        cout << "Ingrese un nombre" << endl;
        cin >> nombre;
        datos[i][0] = nombre;
        cout << "Ingrese un apellido" << endl;
        cin >> apellido;
        datos[i][1]  = apellido;
    }
}
void recolectarSalariosPersona(double * & salarios, string ** & datos){

    for (int i=0; i<3; i++){
       cout << "Ingrese el salario de la persona" << datos[i][0] << " " << datos[i][1] << endl;
       cin >> salarios[i];
    }
}

void imprimirResultados(double * & salarios, string ** & datos){

    for (int i=0; i<3; i++){
       cout << "La persona" << datos[i][0] << " " << datos[i][1] << "devenga" <<salarios[i]<< endl;
    }
}



int main(){
  string ** arrayDatosPersona = new string * [3];
  double * salariosPersona = new double[3];
  
  recolectarDatos(arrayDatosPersona);
  recolectarSalariosPersona(salariosPersona, arrayDatosPersona);
  imprimirResultados(salariosPersona, arrayDatosPersona);
  
  

	return 0;
}
