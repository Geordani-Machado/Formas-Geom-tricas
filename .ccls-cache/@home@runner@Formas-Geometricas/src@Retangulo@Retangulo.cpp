#include "Retangulo.hpp"

  void Retangulo::calculaArea(){
		float base , altura , resultado;
		cout << "qual a base do retangulo ?";
		cin >> base;
		cout << "qual a altura do retangulo?";
		cin >> altura;

		resultado = base * altura;

		cout << "A area desse retangulo é: " << resultado << endl;
		
	
}