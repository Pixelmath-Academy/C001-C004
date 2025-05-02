#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << "10 = " << n / 10 << endl;
    n = n % 10;
    cout << "5 = " << n / 5 << endl;
    n = n % 5;
    cout << "2 = " << n / 2 << endl;
    n = n % 2;
    cout << "1 = " << n << endl;
    
    return 0;
} 