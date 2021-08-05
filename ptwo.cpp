#include <iostream>
using namespace std;

int main() {
	int comida, bebida, sobremesa; //consumo
	int valordaconta, valorpago, troco; //outros valores
	
	//Leitura de dados
	cout << "Escreva o valor consumido em comida, bebida e sobremesa: ";
	cin >> comida;
	cin >> bebida;
	cin >> sobremesa; 
	cout << "Escreva o valor pago pelo cliente: ";
	cin >> valorpago;
	
	//Processamento de dados
	valordaconta = comida + bebida + sobremesa;
	 
	
	if (valorpago>=valordaconta)
	{
	troco = valorpago - valordaconta;
	cout << "Troco: " << troco << endl;
	cout << "Volte sempre!\n";
	}
		else
		{
		cout << "O valor não foi suficiente." << endl;
		cout << "Falta pagar " << valordaconta - valorpago << endl;
		}
	//Impressao do resultado
	cout << "/n/nRESTAURANTE PEGUE E PAGUE/n";
	cout << "Consumo: " << comida << " + " << bebida << " + " << sobremesa;
	cout << " = " << valordaconta << endl;
	cout << "Valor Pago: " << valorpago << endl;
	cout << "Troco: " << troco << endl;
	cout << "Volte sempre!/n";
	return 0;
}