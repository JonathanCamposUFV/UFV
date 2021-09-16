#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
	int N = 0, NF[N], C[N];
	float CRAt, CRAa=0, CRAb=0;
	int v;
	
	cin >> N;
	
	for (int i = 0; i < N; i++){
		cin >> NF[i];
	}
	for (int i = 0; i < N; i++){
		cin >> C[i];
	}
	for (int i = 0; i < N; i++){
		CRAa+= NF[i]*C[i];
		CRAb+= C[i];
		cout << CRAa << " " << CRAb <<endl;
	}
	CRAt=CRAa/CRAb;
	cout << fixed << setprecision(1) << CRAt << endl;
	
	return 0;
}