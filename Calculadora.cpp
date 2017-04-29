#include "Calculadora.h"

	Calculadora::Calculadora(double num1, double num2){
		this->num1=num1;
		this->num2=num2;
	}
	
	 double Calculadora::sumarN(){
		 return num1+num2; 
	 }
	 
	 double Calculadora::multiplicarN(){
		 return num1*num2;
	 }
	 
	 double Calculadora::restarN(){
		 return num1-num2;	 
	 }
	 
	 double Calculadora::dividirN(){
		 return num1/num2;	 
	 }
	 
	 double Calculadora::getNum1(){
		 return num1;	 
	 }
	 
	 double Calculadora::getNum2(){
		 return num2;
	 }
	 
	 Calculadora::~Calculadora(){
	 }
