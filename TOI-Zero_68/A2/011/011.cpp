#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	map<ll,int> visited;
    vector<ll> ans;
    for (int i=0;i<10;i++) {
        ll x;
        cin >> x;
        if(!visited[x]){
        	visited[x]=1;
        	ans.push_back(x);
		}
    }
    for(int i=0;i<ans.size();i++){
    	cout << ans[i] << " ";
	}
}
