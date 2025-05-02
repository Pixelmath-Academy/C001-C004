#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int a;
    char b;
    cin >> a >> b;
    b = tolower(b);
    
    if (a < 18 || b == 's') {
        cout << "20" << endl;
    } else {
        cout << "50" << endl;
    }
    
    return 0;
} 