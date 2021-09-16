#include <iostream>
 
using namespace std;
 
int main() {
 
    float number;
	
	cin >> number;
    
    if (number <= 25 && number >= 0){
        cout << "Intervalo [0,25]\n";
	}
    else if (number <= 50 && number >= 25){
			cout << "Intervalo (25,50]\n";
    }
		else if (number <= 75 && number >= 50){
				cout << "Intervalo (50,75]\n";
		}
			else if (number <= 100 && number >= 75){
					cout << "Intervalo (75,100]\n";
			}
	
	if (number < 0 || number > 100)
		cout << "Fora do intervalo\n";
	return 0;
}