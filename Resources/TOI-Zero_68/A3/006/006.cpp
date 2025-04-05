#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
    cin >> n;
    vector<ll> v;
    for(int i=1;i<=200;i++){
		for(int j=1;j<=9;j++){
			v.push_back(2*i); 
		}
		v.push_back(i);
	}
    ll a[n],ans=0,idx=0;
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
    sort(a,a+n,greater<ll>());
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
    	ans+=a[i]*v[idx++];
	}
    cout << ans;
}
