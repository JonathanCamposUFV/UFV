#include <iostream>
using namespace std;
	
int main () {
	int N=10, a[N], b[N], mult=0;
	int i;
	
	cin >> N;
	for (i=1;i<=N;i++)
		cin >> a[i];
	for (i=1;i<=N;i++)
		cin >> b[i];
	
	for (i=1;i<=N;i++)
		mult+= a[i]*b[i];
	
	cout << mult << endl;
	return 0;
}