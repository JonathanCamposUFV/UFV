#include <iostream>
using namespace std;

int main () {
	
	int N, NF, porcentagem, total;
	double AP, RP, PF, aprovados, reprovados, provafinal;
	
	AP = 0;
	RP = 0;
	PF = 0;
	
	cin >> N;
	
	for(int cont=1;cont<=N;cont++){
		cin >> NF;
		if(NF>=60) 
			AP++;
		if(NF >=40 && NF<60) 
			PF++;
		if(NF<40)
			RP++;
			
		total += NF;
	}
	
	//AP + RP + PF = 100;
	double APt = 100-AP*10;
	double RPt = 100-RP*10;
	double PFt = 100-PF*10;
	//aprovados = AP / 100;
	//reprovados = RP / 100;
	//provafinal = PF / 100;
	
	cout << "Aprovados: " << APt << "%\n";
	cout << "Reprovados: " << RPt << "%\n";
	cout << "De exame final: " << PFt << "%\n";
	
}