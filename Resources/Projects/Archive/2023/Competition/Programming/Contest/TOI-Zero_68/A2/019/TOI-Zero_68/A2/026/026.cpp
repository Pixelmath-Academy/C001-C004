#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];
    int weights[n];

    for (int i = 0; i < n; i++) {
        cin >> names[i] >> weights[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (weights[j] < weights[j + 1]) {
                swap(weights[j], weights[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }

    int more_than_15 = 0;
    for (int i = 0; i < n; i++) {
        if (weights[i] > 15) {
            more_than_15++;
        }
    }

    cout << more_than_15 << endl;
    cout << names[0] << " " << weights[0] << endl;

    return 0;
}