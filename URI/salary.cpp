#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    float tw, payhour, salary;
    int id;
    
    cin >> id >> tw >> payhour;
    
    salary = tw * payhour;
	
	cout << "NUMBER = " << id << endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
 
    return 0;
}