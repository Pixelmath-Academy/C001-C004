#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    string s;
    cin >> c >> s;
    
    if (c == 'H' && s == "4567") {
        cout << "safe unlocked" << endl;
    } else if (s == "4567") {
        cout << "safe locked - change char" << endl;
    } else if (c == 'H') {
        cout << "safe locked - change digit" << endl;
    } else {
        cout << "safe locked" << endl;
    }
    
    return 0;
} 