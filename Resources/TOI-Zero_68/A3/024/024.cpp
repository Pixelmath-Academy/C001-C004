#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,l;
    cin >> n >> l;
    pair<ll,ll> a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i].second >> a[i].first;
	}
    sort(a,a+n);
    int count=0,idx=-1;
    for(int i=0;i<n;i++){
    	int r=a[i].first;
    	int l=a[i].second;
        if(l<=idx){
        	continue;
		}
        count++;
		idx=r;
    }
    cout << count;
}
