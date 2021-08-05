#include <iostream>
#include <iomanip>
using namespace std;

int main() {
		
	//Variáveis
	double raio, altura;
	double total;
	
	//Entrada de dados
	cin >> raio >> altura;
	
	//Processamento de dados
	total = 3.1415 * (raio*raio) * altura;
	
	//Saída de dados
	cout << fixed << setprecision(2) << total << endl;
	
	return 0;
}