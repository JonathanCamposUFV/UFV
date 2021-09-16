#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	int precisao; //Precisao eh a variavel que recebera o numero de vezes a ser calculado
	int contn=0;  //Contador do Numerador
	int contd=1;  //Contador do Denominador
	
	cin >> precisao;
	
	long double pi=1; //PI é declarado como 1 pois se for 0 o resultado eh sempre 0
	for (int i=0; i<precisao; i++){
		if (i%2==0)	//Condicional para contagem do numerador
			contn++;
		if (i%2==1) //Condicional para contagem do denominador
			contd++;
		pi *= (2.0*contn)/(2.0*contd-1.0); //O calculo efetuará 2n/2n-1, sendo que o "n" é controlado pelas condicionais acima.
	}
	cout << fixed << setprecision(20) << pi*2.0;
	
	return 0;
}