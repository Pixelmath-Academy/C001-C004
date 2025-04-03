#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string board[n];
	for(int i=0;i<n;i++){
		cin >> board[i];
	}
	int count=0,visited[n][n];
	memset(visited,0,sizeof(visited));
	queue <pair<int,int> > q;
	q.push({n-1,n-1});
	pair<int,int> move[2]={{-1,0},{0,-1}};
	while(!q.empty()){
		pair<int,int> p=q.front();
		q.pop();
		int x=p.first,y=p.second;
		if(visited[x][y]){
			continue;
		}
		visited[x][y]=1;
		count++;
		for(int i=0;i<2;i++){
			int movex=move[i].first,movey=move[i].second;
			int newx=movex+x,newy=movey+y;
			if(newx<0 || newy<0 || newx>=n || newy>=n || board[newx][newy]=='X'){
				continue;
			}
			q.push({newx,newy});
		}
	}
	cout << count;
}
