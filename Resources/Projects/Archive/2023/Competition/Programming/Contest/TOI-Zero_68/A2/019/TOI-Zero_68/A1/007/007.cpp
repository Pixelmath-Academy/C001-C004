#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a;
    cin >> a;
    a = tolower(a);
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
} 