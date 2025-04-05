#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	ll red[n+1],blue[m+1];
	red[0]=0,blue[0]=0;
	for(int i=1;i<=n;i++){
		cin >> red[i];
	}
	for(int i=1;i<=m;i++){
		cin >> blue[i];
	}
	ll count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i%2==j%2){
				count += ((red[i]<blue[j] && red[i+1]>blue[j+1]) || (red[i]>blue[j] && red[i+1]<blue[j+1]));
			}
			else{
				count += ((red[i]<blue[j+1] && red[i+1]>blue[j]) || (red[i+1]>blue[j] && red[i]<blue[j+1]));
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=(i%2);j<=m;j+=2){
			count += red[i]==blue[j];
		}
	}
	cout << count;
}
