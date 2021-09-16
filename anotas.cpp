#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double media, N, mediatotal;
	int cont;
	
	cin >> N;
	
	cont = 0;
	
	while (cont < N) {
		cin >> media;
		mediatotal += media / N;
		cont++;
	}
	
	cout << fixed << setprecision(2) << mediatotal << endl;

	return 0;
}