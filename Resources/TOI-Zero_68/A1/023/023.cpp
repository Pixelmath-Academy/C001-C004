#include <iostream>
using namespace std;

int main() {
    int a;
    char b;
    cin >> a >> b;
    
    float c = a;
    if (b == 'F') {
        c = (a - 32) * 5.0 / 9.0;
    }
    
    if (c <= 0) {
        cout << "solid" << endl;
    } else if (c < 100) {
        cout << "liquid" << endl;
    } else {
        cout << "gas" << endl;
    }
    
    return 0;
} 