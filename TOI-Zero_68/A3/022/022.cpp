#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    int a[360];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        for(int j=l;j!=r;j=(j+1)%360){
        	a[j]=1;
		}
    }
    int count=0;
    for(int i=0;i<360;i++){
    	count+=a[i];
	}
    if(count==360){
    	cout << 360;
    	return 0;
	}
    int visited[360],mx=0;
    memset(visited,0,sizeof(visited));
    for(int i =0;i<360;i++){
        if(visited[i] || !a[i]){
        	continue;
		}
        int l=i,r=i;
        while(a[(l-1+360)%360]){
        	l=(l-1+360)%360;
			visited[l] = 1;
		}
        while(a[(r+1)%360]){
        	r=(r+1)%360;
			visited[r]=1;
		}
        mx=max(mx,(r-l+360+1)%360);
    }
    cout << mx;
}
