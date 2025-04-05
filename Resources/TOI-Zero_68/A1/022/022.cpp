#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if ((b == 12 && a >= 22) || (b == 1 && a <= 19)) {
        cout << "capricorn" << endl;
    } else if ((b == 1 && a >= 20) || (b == 2 && a <= 18)) {
        cout << "aquarius" << endl;
    } else if ((b == 2 && a >= 19) || (b == 3 && a <= 20)) {
        cout << "pisces" << endl;
    } else if ((b == 3 && a >= 21) || (b == 4 && a <= 19)) {
        cout << "aries" << endl;
    } else if ((b == 4 && a >= 20) || (b == 5 && a <= 20)) {
        cout << "taurus" << endl;
    } else if ((b == 5 && a >= 21) || (b == 6 && a <= 20)) {
        cout << "gemini" << endl;
    } else if ((b == 6 && a >= 21) || (b == 7 && a <= 22)) {
        cout << "cancer" << endl;
    } else if ((b == 7 && a >= 23) || (b == 8 && a <= 22)) {
        cout << "leo" << endl;
    } else if ((b == 8 && a >= 23) || (b == 9 && a <= 22)) {
        cout << "virgo" << endl;
    } else if ((b == 9 && a >= 23) || (b == 10 && a <= 22)) {
        cout << "libra" << endl;
    } else if ((b == 10 && a >= 23) || (b == 11 && a <= 21)) {
        cout << "scorpio" << endl;
    } else {
        cout << "sagittarius" << endl;
    }
    
    return 0;
} 