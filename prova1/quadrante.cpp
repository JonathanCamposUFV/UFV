#include <iostream>
using namespace std;

int main () {

	int X, Y, quadrante;
	
	cin >> X >> Y;
	
	if (X > 0 && Y > 0) 
		cout << "QUADRANTE 1\n";
	else if (X < 0 && Y > 0)
			cout << "QUADRANTE 2\n";
		else if (X < 0 && Y < 0)
				cout << "QUADRANTE 3\n";
			else if (X > 0 && Y < 0)
				cout << "QUADRANTE 4\n";
				else if (X == 0 && Y < 0)
					cout << "EIXO Y\n";
					else if (X > 0 && Y == 0)
						cout << "EIXO X\n";
						else if (X == 0 && Y == 0)
							cout << "ORIGEM\n";
							else if (X == 0 && Y > 0)
								cout << "EIXO Y\n";
								else if (X < 0 && Y == 0)
									cout << "EIXO X\n";

	return 0;
}