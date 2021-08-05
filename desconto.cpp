#include <iostream>
using namespace std;

int main ()
{
	double preconormal, precofinal;
	char temdesconto;
	double porcentagem, desconto;
	
	// O vendedor informa o valor do produto
	cin >> preconormal;
	
	// Tem desconto?
	cout << "Tem desconto?";
	cin >> temdesconto;
	
	// Se tem desconto, qual a porcentagem?
	if (temdesconto == 'S' || temdesconto == 's'){		
		cout << "Qual a porcentagem (%)?";
		cin >> porcentagem;
		desconto = preconormal * porcentagem / 100;
		precofinal = preconormal - desconto;
		cout << precofinal;
	}
		else 
		cout << preconormal << endl;
}