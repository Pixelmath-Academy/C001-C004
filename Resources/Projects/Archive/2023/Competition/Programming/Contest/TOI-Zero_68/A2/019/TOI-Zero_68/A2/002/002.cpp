#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	pair<ll,ll> order[n];
	map<ll,vector<ll> > mp1,mp2;
	for(int i=0;i<n;i++){
		cin >> order[i].first >> order[i].second;
		mp1[order[i].first-order[i].second].push_back(order[i].first);
		mp2[1000000000-order[i].first-order[i].second].push_back(order[i].first);
	}
	ll mx=0;
	for(map<ll,vector<ll>>::iterator it=mp1.begin();it!=mp1.end();it++){
    	vector<ll> &x=it->second;
    	sort(x.begin(),x.end());
    	mx=max(mx,x.back()-x[0]);
	}
	for(map<ll, vector<ll>>::iterator it=mp2.begin();it!=mp2.end();it++){
  	  	vector<ll> &x=it->second;
  	  	sort(x.begin(),x.end());
   	 	mx=max(mx,x.back()-x[0]);
	}
	cout << mx;
}
