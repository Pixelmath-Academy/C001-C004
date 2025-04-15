#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    vector<set<int> > deg[n+1];
    while(m--){
        int k;
        cin >> k;
        set<int> a;
        for(int i=0;i<k;i++){
            int x;
            cin >> x;
            a.insert(x);
        }
        int s;
        cin >> s;
		for(set<int>::iterator it=a.begin();it!=a.end();it++){
			adj[*it].push_back(s);
		}
        deg[s].push_back(a);
    }
    int count=0,visited[n+1];
    memset(visited,0,sizeof(visited));
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(visited[u]){
        	continue;
		}
        visited[u]=1;
        count++;
        for(int i=0;i<adj[u].size();i++){
        	int v=adj[u][i];
            int mn=INT_MAX;
            for(vector<set<int> >::iterator s_it=deg[v].begin();s_it!=deg[v].end();s_it++){
            	set<int>& s=*s_it;
            	if(s.empty()){
            		mn=0;
            		continue;
				}
				if(s.find(u)==s.end()){
					continue;
				}
				s.erase(s.find(u));
				mn=min(mn,(int)s.size());
            }
            if(mn==0){
            	q.push(v);
			}
        }
    }
    cout << count;
}
