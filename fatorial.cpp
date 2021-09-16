#include <iostream>
using namespace std;

int main () {

	int N;
	int fatorial;
	long long int fatore;
	
	cin >> N;
	
	while (fatorial > 1)
		fatore *= N--;
		cout << fatore << endl;
	
	return 0;

}