#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Variáveis
	double A, B, total;
	
	//Entrada de dados
	cin >> A >> B;
	
	//Processamento de dados
	total = A / B; 
	
	//Saída de dados
	cout << fixed << setprecision(2) << total << endl;
	
	return 0;
}