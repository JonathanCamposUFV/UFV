#include <iostream>
using namespace std;

int main () {
	int N = 0, V[N], X = 0;
	int k=0,i;
	
	cin >> N;
	
	for (i=1; i <= N; i++)
		cin >> V[i];
	
	cin >> X;
	
	for (i=1; i<=N;i++){
		if (V[i]>=X)
			k++;
	}
	cout << k << endl;
	return 0;
}