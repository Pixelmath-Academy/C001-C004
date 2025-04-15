#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = a + b;
    cout << sum << endl;
    
    if (sum >= 50) {
        cout << "pass" << endl;
    } else {
        cout << "fail" << endl;
    }
    
    return 0;
} 