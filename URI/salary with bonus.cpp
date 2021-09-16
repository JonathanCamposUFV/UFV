#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
	char name;
    double salary, sold, totalsalary;
    
    
	salary = 0;
	sold = 0;
	totalsalary = 0;
	
    //cin >> name;
	cin >> salary;
	cin >> sold;
	
	totalsalary = (sold*15/100) + salary;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << totalsalary << endl;
    return 0;
}