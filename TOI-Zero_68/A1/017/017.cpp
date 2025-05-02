#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        cout << "0" << endl;
    } else if (a1 > a2) {
        cout << "2" << endl;
    } else if (a1 < a2) {
        cout << "1" << endl;
    } else if (b1 > b2) {
        cout << "2" << endl;
    } else if (b1 < b2) {
        cout << "1" << endl;
    } else if (c1 > c2) {
        cout << "2" << endl;
    } else {
        cout << "1" << endl;
    }
    
    return 0;
} 