#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    if (a.length() == 13) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
} 