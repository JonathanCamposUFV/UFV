#include <iostream>
using namespace std;

int main() {
	
	int prova1, prova2, prova3;
	int totalnota;
	
	cin >> prova1 >> prova2 >> prova3;
	
	totalnota = prova1 + prova2 + prova3;
	
	cout << "Sua nota foi: " << totalnota << endl;
	
	if (totalnota >= 60) 
		cout << "Aprovado" << endl;
	else if (totalnota >=40)
		cout << "Prova Final" << endl;
		else 
			cout << "Reprovado" << endl;
	

	return 0;
}