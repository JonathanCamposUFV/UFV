#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	int precisao; //Precisao eh a variavel que recebera o numero de vezes a ser calculado
	long double pi=0; //Neste caso, o PI foi declarado como zero, pois o valor sera substituido a partir da primeira operacao
	
	cin >> precisao;
	
	for(int i=1;i <= precisao;i++){
		pi += 6.0/(i*i); //Aqui, como na equacao, o 6 passou multiplicando
	}
	
	long double pi_total;
	pi_total = sqrt(pi); //O quadrado de PI passou como raiz para o resultado da equacao
	
	cout << fixed << setprecision(20) << pi_total << endl;
	return 0;
}