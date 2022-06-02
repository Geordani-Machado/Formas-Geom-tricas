#include <iostream>
#include "./Circulo/Circulo.hpp"
#include "./Triangulo/Triangulo.hpp"
#include "./Retangulo/Retangulo.hpp"
using namespace std;
	
Circulo c;
Retangulo r;
Triangulo t;

int controleMenu =1;
//cria um menu para exibir as informações para fluxo lógico da aplicação
int Menu(){
	int escolha;
	cout << " ---------------- Menu ------------- \n";
	cout << " 1 - Calcular a area de um circulo \n";
	cout << " 2 - calcular a area de um retangulo \n";
	cout << " 3 - calcular a area de um triangulo \n";
	cout << " ------------------------------------- \n";
	cin >> escolha;

	if(escolha >0 & escolha<4){
		return  escolha;
	}else{
		return  -1;
	}
}

void fluxoLogico(int i){
	switch(i)
	{
		case 1:
		/*chama o calcular area de dentro do circulo
		executa a função na classe e retorna o calcula para a formula.
		*/
  c.calculaArea();
		break;
		case 2:
		/*chama o calcular area de dentro do retangulo
		executa a função na classe e retorna o calcula para a formula.
		*/
  r.calculaArea();
		break;
		case 3:
		/*chama o calcular area de dentro do triangulo
		executa a função na classe e retorna o calcula para a formula.
		*/
  t.calculaArea();
		break;
		
	}
}

int main() {
	do{
		fluxoLogico(Menu());
	}while(Menu() == -1 || controleMenu==1);
	
}