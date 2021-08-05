//Correios: Calcular volume da caixa.
#include <iostream>
using namespace std;

int main() {
	
	int largura, altura, comprimento;
	int volume;
	
	cout << "Escreva a largura, a altura e o comprimento da caixa: ";
	cin >> largura >> altura >> comprimento;
	
	volume = largura * altura * comprimento;
	
	cout << "CORREIOS MANDOW, PERDEW" << endl;
	cout << "Sua caixa possui " << volume << "cm3" << endl;
	cout << "OBRIGADO PELA PREFERENCIA";
	return 0;
	
}