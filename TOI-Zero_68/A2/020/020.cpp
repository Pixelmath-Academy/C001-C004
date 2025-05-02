#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    int pass[n+1],visited[n+1],mx=0;
    for(int i=1;i<=n;i++){
    	cin >> pass[i];
    	visited[i]=0;
	}
    for(int i=1;i<=n;i++){
    	if(!visited[i]){
       		int x=i,count=0;
       		while(x!=i || count==0){
       			visited[x]=1;
				count++;
				x=pass[x];
			}
       		mx=max(mx,count);
    	}
	}
    cout << mx;
}
