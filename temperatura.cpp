#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
	double T, C, E, F;
	double tempfinal;
	
	cin >> T >> E;
	
	if (E == 'F' || E == 'f')
		{
		F = 5/9 * (T - 32);
		cout << fixed << setprecision(1) << F << " " << "F" << endl;
		}
		else if (E == 'C' || E == 'c'){
			C = (T - 32) / 1.8;
			cout << fixed << setprecision(1) << C << " " << "C" << endl;
			}
	return 0;
}