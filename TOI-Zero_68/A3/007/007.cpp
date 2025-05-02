#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count=0,n,l;
    cin >> l >> n;
    while(n>0){
        count++;
        for(int i=1;i<=count*l;i++){
        	n-=min(i,l);
		}
    }
    cout << count;
}
