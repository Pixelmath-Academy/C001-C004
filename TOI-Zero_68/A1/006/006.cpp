#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (b != 0 && a % b == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
} 