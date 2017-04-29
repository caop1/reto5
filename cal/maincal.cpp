#include <iostream>
#include "Calculadora.h"
#include "Calculadora.cpp"

using namespace std;

int main(){
	
    bool bandera=false;

    char tecla;

 

    do

    {

        system("cls");

        cin.clear();

        cout << "Calculadora" << endl;

        cout << "-----------" << endl << endl;

        cout << "\t1 .- Sumar" << endl;

        cout << "\t2 .- Restar" << endl;

        cout << "\t3 .- Multiplicar" << endl;

        cout << "\t4 .- Dividir" << endl;

        cout << "\t5 .- Salir" << endl << endl;

        cout << "Elije una opcion: ";

 

        cin >> tecla;

 

		switch(tecla)

		{

			case '1':

				system("cls");

				cout << "Ingresa los numeros a sumar.\n";
								
				cin >> num1, num2;
				
				Calculadora datos = Calculadora(num1, num2);
					
				cout<<datos.sumarN()<<endl;		
			

				pausa();

				break;

 

			case '2':
			
                system("cls");

				cout << "Ingresa los numeros a restar.\n";
								
				cin >> num1, num2;
				
				Calculadora datos = Calculadora(num1, num2);
					
				cout<<datos.restarN()<<endl;
				
				pausa();

				break;

 

			case '3':

				system("cls");
				
				cout << "Ingresa los numeros a multiplicar.\n";
								
				cin >> num1, num2;
				
				Calculadora datos = Calculadora(num1, num2);
					
				cout<<datos.multiplicarN()<<endl;

				pausa();

				break;

 

			case '4':

				system("cls");
				
				cout << "Ingresa los numeros a dividir.\n";
								
				cin >> num1, num2;
				
				Calculadora datos = Calculadora(num1, num2);
					
				cout<<datos.dividirN()<<endl;

				pausa();

				break;

 

			case '5':

				bandera=true;

				//exit(1);

				break;

 

			default:

				system("cls");

				cout << "Opcion no valida.\a\n";

				pausa();

				break;

		}

    }
    
    while(bandera!=true);

 

    return 0;

}

 



