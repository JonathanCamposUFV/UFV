#include <iostream>
using namespace std;

int main() {
	
	int P=0, T=0 , pe=0, salvos = 0;
	int X = 0;
	cin >> P >> T;
	
	while (pe != -1){
		salvos += pe;
		cin >> pe;
	}
	
	X = P - salvos;
	
	if (resgatados == P)
		cout << "Todos a salvo\n";
		else 
			cout << "Apenas " << X << " pessoas a salvo\n";
	
	
	return 0;
}