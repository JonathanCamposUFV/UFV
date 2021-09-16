#include <iostream>
using namespace std;

int main () {

	int P, G, tempo, semanas;
	long long int pop, apoio, total;
	
	cin >> P >> G;
	
	tempo = 0;
	total = 0;
	
	apoio = P * G;
	total = apoio;
	
	while (total < 1000000000)
		tempo++;
		apoio = P * G;
		total = apoio;
		
	
	cout << tempo << endl;
}