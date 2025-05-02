#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> prime;

int is_prime(int x){
    if(x<2){
    	return 0;
	}
    for(int i=0;i<prime.size();i++) {
        if(x%prime[i]==0){
        	return 0;
		}
        if(prime[i]*prime[i]>x){
        	break;
		}
    }
    return 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
    cin >> a >> b;
    ll dp[4][15005];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=a;i<=b;i++){
        for(int j=0;j<3;j++){
        	for(int k=15005;k>=i;k--){
        		dp[j+1][k]+=dp[j][k-i];
			}
		}
    }
    ll count=0;
    for(int i=1;i<=15005;i++){
    	if(is_prime(i)){
    		count+=dp[3][i];
    		prime.push_back(i);
		}
	}
    cout << count;
}
