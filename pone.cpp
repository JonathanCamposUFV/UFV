//Primeiro: Cálculo final de um candidato da monitoria
#include <iostream>
using namespace std;

int main() 
{
	int entrevista, curriculo, prova;// notas do candidato
	int total, totaltwo;						 // total de pontos
	
	//Leitura de dados
	cout << "Escreva a nota da entrevista: ";
	cin >> entrevista;
	cout << "Escreva a nota do curriculo: ";
	cin >> curriculo;
	cout << "Escreva a nota da prova: "; 
	cin >> prova;
	
	//Processamento de dados
	total = (entrevista + curriculo + prova) / 3;
	totaltwo = entrevista + curriculo + prova;
	
	cout << "O total foi: " << total;
	cout << "A média do candodato foi: " << totaltwo << endl;
	
	
	return 0;
}