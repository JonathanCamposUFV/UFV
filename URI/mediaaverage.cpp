#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   float media, A, B;
   
   cin >> A >> B;
   
   media = (A*3.5 + B*7.5) / 11;
   
   cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
 
    return 0;
}