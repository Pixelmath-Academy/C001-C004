#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k,t;
    cin >> n >> k >> t;
    t--;
    int x=0,count=0;
    while(true){
        count++;
        if(x==t){
        	break;
		}
        x=(x+k)%n;
        if(x==0){
        	break;
		}
    }
    cout << count;
}
