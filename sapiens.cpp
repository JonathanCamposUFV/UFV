#include <iostream>
using namespace std;

int main () {
	
	//Variaveis 
	int NF, FT, FP;
	double FPtotal, FTotal;
	
	
	cin >> NF >> FT >> FP;
	
	FTotal = FT * 2;
	FPtotal = FP * 2;
	
	
	if (FT > 15 || FP > 7 || NF < 40) {
		cout << "Reprovado" << endl;
	}	
		else if (NF > 40 && NF < 60)
			cout << "Final" << endl;
				else 
					cout << "Aprovado" << endl;
	
	return 0;
}