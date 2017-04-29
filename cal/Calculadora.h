#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

	class Calculadora{
		
		private:
			double num1;
			double num2;
		
		public:
			
			Calculadora(double, double);
			double sumarN();
			double restarN();
			double dividirN();
			double multiplicarN();
			double getNum1();
			double getNum2();
			~Calculadora();
		
		
		
		
		};

#endif
