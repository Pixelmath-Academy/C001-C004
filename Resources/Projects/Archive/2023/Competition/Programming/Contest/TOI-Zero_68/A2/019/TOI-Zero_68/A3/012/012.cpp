#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
    cin >> n >> x;
    int a[n+1];
    for(int i=1;i<=n;i++){
    	cin >> a[i];
	}
    int count=0,visited[n+1];
    memset(visited,0,sizeof(visited));
    while(x>0 && !visited[x]){
    	visited[x]=1;
		count++;
		x=a[x];
	}
    cout << count;
}
