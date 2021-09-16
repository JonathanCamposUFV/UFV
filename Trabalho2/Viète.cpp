#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int precisao;
	long double pi=1;
	
	cin >> precisao;
	
	for(int i=0;i < precisao;i++){
		pi+= (sqrt(2)*i)/2.0;
		
	}

	cout << 2.0/pi;
	return 0;
}