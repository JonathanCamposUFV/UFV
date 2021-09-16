#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, h, min, seg;
    
    cin >> N;
    
    h = N / 3600; 
    min = N/60;    
    seg = N%60;
    
    cout << h << ":" << min << ":" << seg << endl;
    return 0;
}