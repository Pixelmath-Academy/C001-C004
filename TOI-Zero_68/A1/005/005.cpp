#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a == 1 || a == 2 || (a == 3 && b < 21)) {
        cout << "winter" << endl;
    } else if ((a == 3 && b >= 21) || a == 4 || a == 5 || (a == 6 && b < 21)) {
        cout << "spring" << endl;
    } else if ((a == 6 && b >= 21) || a == 7 || a == 8 || (a == 9 && b < 21)) {
        cout << "summer" << endl;
    } else if ((a == 9 && b >= 21) || a == 10 || a == 11 || (a == 12 && b < 21)) {
        cout << "fall" << endl;
    }
    
    return 0;
} 