#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,count=0;
    cin >> n;
    map<int,int> mp;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        count=max(count,++mp[x]);
    }
    cout << count;
}
