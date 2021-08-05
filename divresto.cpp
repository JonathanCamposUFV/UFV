#include <iostream>
using namespace std;

int main()
{
	
	//variaveis
	int A, B, total, resto;
	
	//Entrada de dados
	cin >> A >> B;
	
	//Processamento de dados
	total = A / B;
	resto = A % B;
	
	//Saída de dados
	cout << total << " " << resto << endl;
	
	return 0;
}