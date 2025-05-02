#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    if (a.empty()) {
        return 0;
    }
    
    int c = 1;
    for (int i = 1; i < a.length(); i++) {
        if (a[i] == a[i-1]) {
            c++;
        } else {
            cout << a[i-1] << c;
            c = 1;
        }
    }
    cout << a[a.length()-1] << c << endl;
    
    return 0;
} 