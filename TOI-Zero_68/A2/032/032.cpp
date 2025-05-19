#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+3][m+3];
	for(int i=0;i<n+3;i++){
		for(int j=0;j<m+3;j++){
			arr[i][j]=0;
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		arr[a+1][b+1]++;
	}
	int ma=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]>=1) continue;
			ma=max(ma,arr[i][j]+arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1]+arr[i-1][j-1]+arr[i+1][j-1]+arr[i-1][j+1]+arr[i+1][j+1]);
		}
	}
	cout<<ma;
}
