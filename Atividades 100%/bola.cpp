#include <iostream>
using namespace std;

int main () {

	//Variáveis
	double diametro, a, p, l;
	
	//Entrada
	cin >> diametro;
	cin >> a >> l >> p;
		
	//Saída
	if (diametro <= a && diametro <= l && diametro <= p)
		cout << "S" << endl;
	else 
		cout << "N" << endl;
	
	return 0;
}