#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	
	double x1, x2, y1, y2;
	double distancia;
	
	cin >> x1 >> x2 >> y1 >> y2;
	
	distancia = sqrt((x2 * x2) + (x1 * x1) - (y2 * y2) + (y1 * y1));
	
	cout << fixed << setprecision(2) << distancia << endl;
	
	return 0;
}