#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    if (a.length() > 5 && b.length() > 5) {
        cout << a[0] << a[1] << b.back() << c.back() << endl;
    } else {
        cout << a[0] << c << b.back() << endl;
    }
    
    return 0;
} 