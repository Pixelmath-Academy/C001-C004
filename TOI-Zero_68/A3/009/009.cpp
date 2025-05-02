#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
    cin >> n >> k;
    map<int,int> count;
    int sum=0,c=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(count[x]==0){
        	sum++;
		}
        count[x]++;
        while(sum==k){
            c++;
            for(int j=1;j<=k;j++){
                count[j]--;
                if(count[j]==0){
                	sum--;
				}
            }
        }
    }
    cout << n-c*k;
}
