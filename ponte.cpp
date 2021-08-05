#include <iostream>
using namespace std;

int main(){
	
	int peso, largura;
	
	cin >> largura >> peso;
	
	if (peso <= 10  largura <= 3) 
		cout << "Pode passar!" << endl;		
	else
		cout << "Não pode passar na ponte\n";

	return 0;
}