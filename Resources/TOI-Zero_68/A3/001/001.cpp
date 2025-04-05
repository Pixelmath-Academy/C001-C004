#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<pair <int, int> > adj[1005];

int ans=0;

int dfs(int u){
    int mx=0;
    vector<int> a;
    for(int i=0;i<adj[u].size();i++){
    	int t=adj[u][i].first;
    	int v=adj[u][i].second;
        if(t==1){
        	a.push_back(v);
		}
        else{
        	a.push_back(dfs(v));
		}
    }
    ans+=abs(a[0]-a[1]);
    return 2*max(a[0],a[1]);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    vector<int> x;
    for(int i=1;i<=n;i++){
        int a,l,b,r;
        cin >> a >> l >> b >> r;
        adj[i].push_back({a,l});
        adj[i].push_back({b,r});
        if(a){
        	x.push_back(l);
		}
        if(b){
        	x.push_back(r);
		}
    }
    dfs(1);
    cout << ans;
}
