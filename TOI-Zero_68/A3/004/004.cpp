#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    vector<ll> xx,yy;
    pair<ll,ll> a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
        ll xk=a[i].first+a[i].second;
        ll yk=a[i].second-a[i].first;
        a[i].first=xk;
        a[i].second=yk;
        xx.push_back(xk);
		yy.push_back(yk);
    }
    sort(xx.begin(),xx.end());
	sort(yy.begin(),yy.end());
    ll sx=xx[n/2];
	ll sy=yy[n/2];
	ll ans=0;
	for(int i=0;i<n;i++){
        ll x=a[i].first;
        ll y=a[i].second;
        ans+=abs(x-sx)+abs(y-sy);
    }
    cout << ans;
}
