#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
    ll in1[n],out1[n],in2[n],out2[n];

    for(int i=0;i<n;i++){
    	cin >> in1[i];
	}
	for(int i=0;i<n;i++){
    	cin >> in2[i];
	}
	for(int i=0;i<n;i++){
    	cin >> out1[i];
	}
	for(int i=0;i<n;i++){
    	cin >> out2[i];
	}
    sort(in1,in1+n);
    sort(in2,in2+n);
    sort(out1,out1+n);
    sort(out2,out2+n);
    ll mn=LLONG_MAX;
    for(int i=0;i<=min(n,k);i++){
        ll j=k-i,mx=0;
        if(j>n){
        	continue;
		}
		for(int x=0;x<i;x++){
            mx=max(mx,in1[x]+out1[i-x-1]);
        }
        for(int x=0;x<j;x++) {
            mx=max(mx,in2[x]+out2[j-x-1]);
        }
        mn=min(mn,mx);
    }
    cout << mn;
}
