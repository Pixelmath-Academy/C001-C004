#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll l,n,cnt=1;
    cin >> l >> n;
    while(n>=cnt*cnt){
    	n-=cnt*cnt;
    	cnt++;
	}
    cout << l-cnt+1;
}
