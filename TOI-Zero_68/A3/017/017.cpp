#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll w,l,m,n;
    cin >> w >> l >> m >> n;
    ll mn=n*m;
    for (ll i=m;i<=n;i++){
    	mn=min(mn,(w%i)*(l%i));
	}
    cout << mn;
}
