#include "Puntero.h"
#include <iostream>
#include <string>
using namespace std;

Puntero::Puntero(string** n, double* s){
	datos = n;
	salarios = s;
}


Puntero::~Puntero(){
	
}

void Puntero::recolectarDatos(){
	for(int i=0; i<3;i++){
		this->datos[i]= new string[2];	
    }
    string nombre;
    string apellido;
    
    cout<<"Prueba"<<endl;
    
		for(int i=0; i<3;i++){
		cout<<"ingrese un nombre"<<endl;
		cin>>nombre;
		cout<<"ingrese apellido"<<endl;
		cin>>apellido;
		
		this->datos[i][0]=nombre;
		this->datos[i][1]=apellido;	
		
			
		}
		
}
void Puntero::recolectarSalariosPersona(){
	for (int i=0; i<3; i++){
       cout << "Ingrese el salario de la persona" << this->datos[i][0] << " " << this->datos[i][1] << endl;
       cin >> this->salarios[i];
    }
   
}
void Puntero::imprimirResultados(){
	for (int i=0; i<3; i++){
       cout << "La persona" << this->datos[i][0] << " " << this->datos[i][1] << "devenga" <<this->salarios[i]<< endl;
    }
}
