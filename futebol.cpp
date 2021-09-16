#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int N, I, L, idadejogador, idade, limite;
	int cont2, cont1;
	
	cin >> N >> I >> L;
	
	for(int cont=1;cont<=N;cont++){
		cin >> idadejogador;
		if(idadejogador>=I)
			cont2++;
		if(cont2>L)
			cout << "Nao Aceito\n";
			break;
	}

	
	return 0;
}