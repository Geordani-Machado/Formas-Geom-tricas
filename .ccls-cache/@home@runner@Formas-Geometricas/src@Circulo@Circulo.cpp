#include "Circulo.hpp"
#include <iostream>
using namespace std;

void Circulo::calculaArea(){
	float raio , resultado , pi=3.14;
	cout << "qual o raio do círculo ?";
	cin >> raio;
	//faz o calculo da area pelo raio
	resultado = 2 * pi* raio; 
	cout << "o raio desse circulo é:" << resultado << endl;
}
