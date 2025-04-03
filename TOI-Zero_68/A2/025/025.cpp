#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
    cin >> n >> m;
    int a[n][m];
    memset(a,0,sizeof(a));
    int sx,sy,k;
    cin >> sx >> sy >> k;
    while(k--){
        int x,y;
        cin >> x >> y;
        a[x][y]=100;
        for(int i=max(0,x-1);i<=min(n-1, x+1);i++){
        	for(int j=max(0,y-1);j<=min(m-1,y+1);j++){
        		a[i][j]=max(a[i][j],60);
			}
		}
        for(int i=max(0,x-2);i<=min(n-1,x+2);i++){
        	for(int j=max(0,y-2);j<=min(m-1,y+2);j++){
        		a[i][j]=max(a[i][j],20);
			}
		}
    }
    int count=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		count += (a[i][j]==0);
		}
	}
    cout << count << endl << a[sx][sy] << "%";
}
