#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
    sort(a,a+n);
    ll x=k*a[0],count=1;
    for(int i=1;i<n;i++){
        count+=(ceil((double)x/a[i])==k);
    }
    cout << count;
}
