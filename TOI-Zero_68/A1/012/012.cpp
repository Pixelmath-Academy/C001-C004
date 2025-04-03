#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    
    int a1 = stoi(s);
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    int a2 = stoi(reversed);
    
    if (c == '+') {
        cout << a1 << " + " << a2 << " = " << a1 + a2 << endl;
    } else {
        cout << a1 << " * " << a2 << " = " << a1 * a2 << endl;
    }
    
    return 0;
} 