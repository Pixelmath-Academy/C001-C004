#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a % 400 == 0 || a == 1500) {
        cout << "yes" << endl;
    } else if (a % 100 == 0) {
        cout << "no" << endl;
    } else if (a % 4 == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
} 