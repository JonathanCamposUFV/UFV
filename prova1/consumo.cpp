#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double  V = 0, consumo = 0, rodados = 0, abastecido = 0;
	char L, R, A, X;
	
	for (int cont = 0;L!='X';cont++){
		cin >> L;
		if (L == 'R'){
			cin >> V;
			rodados += V;
		}
		
		if (L == 'A'){
			cin >> V;
			abastecido += V;
		}
		consumo = rodados / abastecido;
	}

	cout << fixed << setprecision(2) << consumo << endl;
	return 0;
}