#include <iostream>
using namespace std;

int main() {
	
	int salario, horaextra, valorhora;
	int salariototal;

	cout << "Escreva o salário: " << endl;
	cin >> salario;
	cout << "Escreva as horas extra: " << endl;
	cin >> horaextra;
	
	valorhora = 20;
	salariototal = salario + (valorhora * horaextra);
	
	cout << "Seu salário total este mês será " << salariototal;
	return 0;
	
	
}