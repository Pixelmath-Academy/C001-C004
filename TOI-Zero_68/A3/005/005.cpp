#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m,n;
    cin >> m >> n;
    vector<pair <int, int> > v;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        v.push_back({l,1});
        v.push_back({r+1,-1});
    }
    sort(v.begin(),v.end());
    int mx=0,count=0;
    for(int i=0;i<v.size();i++){
    	int idx=v[i].first;
    	int k=v[i].second;
        count+=k;
        if(i<v.size()-1 && idx==v[i+1].first){
        	continue;
		}
        mx=max(mx,count);
    }
    cout << mx;
}
