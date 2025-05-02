#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> adj[305];
int co[305],dep[305];

void dfs(int u){
	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		dep[v]=dep[u]+1;
		dfs(v);
		co[u]+=co[v];
	}
}

pair<int,int> dfs2(int u,int mx){
	if(co[u]!=mx){
		return {-1,-1};
	}
	int a=u,b=dep[u];
	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		int x=dfs2(v,mx).first;
		int y=dfs2(v,mx).second;
		if(x==-1){
			continue;
		}
		if(y>b){
			a=x;
			b=y;
		}
	}
	return {a,b};
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int par[n+1];
	iota(par,par+n+1,0);
	pair<int,int> a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i].first >> a[i].second;
	}	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j].second>a[i].second){
				break;
			}
			else{
				par[j]=i;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(i==par[i]){
			continue;
		}
		else{
			adj[par[i]].push_back(i);
		}
	}
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		co[x]=1;
	}
	vector<int> ans;
	for(int i=1;i<=n;i++){
		if(par[i]==i){
			dfs(i);
			if(co[i]==0){
				continue;
			}
			else{
				ans.push_back(dfs2(i,co[i]).first);
			}
		}
	}
	cout << ans.size() << endl;
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
	}
}
