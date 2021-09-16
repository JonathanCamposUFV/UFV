#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
	int precisao; //Precisao eh a variavel que recebera o numero de vezes a ser calculado
	long double pi=0; //Neste caso, o PI foi declarado como zero, pois o valor sera substituido a partir da primeira operacao
	
	cin >> precisao;
	
	for (int i=0; i < precisao; i++)
		pi += pow(-1,i)/(2*i + 1); //Aqui, -1 precisa oscilar entre 1 e -1, portanto, a cada expoente par, -1 vira 1, e
								   //com expoente impar, o -1 continua -1

	cout << fixed << setprecision(20) << pi * 4 << endl; 
	
	return 0;
}