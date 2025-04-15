#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b && b == c) {
        cout << "all the same" << endl;
    } else if (a != b && b != c && a != c) {
        cout << "all different" << endl;
    } else {
        cout << "neither" << endl;
    }
    
    return 0;
} 