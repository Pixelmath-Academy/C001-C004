#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    pair<int, int> car[n];
    for (int i=0;i<n;i++) {
        cin >> car[i].first >> car[i].second;
    }
    sort(car,car+n);
	int count=0;
    for (int i=1;i<n;i++) {
        count += (car[i].second<car[i-1].second);
        car[i].second=max(car[i].second,car[i-1].second);
    }
    cout << count;
}
