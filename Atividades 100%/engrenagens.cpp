#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//Variáveis
	int p1 = 0, p2 = 0;
	
	//Entrada de Dados
	cin >> p1;
	cin >> p2;
	
	//Processamento de dados
	if (p2%p1==0)
		cout << "1" << endl;
	else 
		cout << "0" << endl;
	
	return 0;
}