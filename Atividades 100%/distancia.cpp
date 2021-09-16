#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	
	double x1, x2, y1, y2;
	double distancia=0;
	
	cin >> x1 >> x2 >> y1 >> y2;
	
	distancia = sqrt(pow(y2-x1,2) + pow(y1-x2,2));
	
	cout << fixed << setprecision(2) << distancia << endl;
	
	return 0;
}