#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a < b && b < c) {
        cout << "increasing" << endl;
    } else if (a > b && b > c) {
        cout << "decreasing" << endl;
    } else {
        cout << "neither" << endl;
    }
    
    return 0;
} 