#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,count=0;
    cin >> n;
    ll tree[n+2];
    tree[0]=tree[n+1]=0;
    for(int i=1;i<=n;i++){
    	cin >> tree[i];
	}
    for(int i=1;i<=n;i++){
    	count += (tree[i]>tree[i-1] && tree[i]>tree[i+1]);
	}
    cout << count;
}
