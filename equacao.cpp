#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	//Variáveis
	double A, B, C;
	double delta, x1, x2;
	
	//Entrada de dados
	cin >> A >> B >> C;
	
	//Processamento de dados
	delta = B*B - 4 * A * C;
	x1 = (- B + sqrt(delta)) / (2 * A);
	x2 = (- B - sqrt(delta)) / (2 * A);
	
	
	//Saída de dados
	cout << fixed << setprecision(4) << x1 << " " << x2 << endl;
	
	return 0;
}