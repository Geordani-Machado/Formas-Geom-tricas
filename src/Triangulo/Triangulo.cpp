#include "Triangulo.hpp"

  void Triangulo::calculaArea(){
	float base, altura , resultado;
	cout << "qual a altura do triangulo?";
	cin >> altura;
	cout << "qual a base do triangulo?";
	cin >> base;

	resultado = (base*altura)/2;

	cout << "a area desse triangulo é de: " << resultado << endl;
}