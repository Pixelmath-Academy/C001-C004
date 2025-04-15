#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    if (a.length() > 3 && a[2] == '1' && a[3] == '6') {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
} 