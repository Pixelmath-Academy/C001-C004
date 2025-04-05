#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    if (a > 9 || a == 0) {
        cout << "Error : Out of range" << endl;
    } else if (a < 0) {
        cout << "Error : Please input positive number" << endl;
    } else {
        string roman_numerals[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        cout << roman_numerals[a - 1] << endl;
    }
    
    return 0;
} 