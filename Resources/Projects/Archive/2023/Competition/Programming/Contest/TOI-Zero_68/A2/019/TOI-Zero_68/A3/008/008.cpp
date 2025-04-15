#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
    cin >> n >> k;
    ll ans=0;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
    deque<pair<int, int> > dq;
    map<int,int> count;
    int sum=0,id=0;
    for(int i=0;i<n;i++){
        if(!count[a[i]]){
        	sum++;
		}
        count[a[i]]++;
        int l=i;
        bool check=false;
        dq.push_back({a[i],i});
        while(sum>=k){
            check=true;
            int x=dq.front().first;
            int idx=dq.front().second;
            l=idx;
            count[x]--;
            if(count[x]==0){
            	sum--;
			}
            dq.pop_front();
        }
        if(l<id || !check){
        	continue;
		}
        ans+=(l-id+1)*(n-1-i+1);
        id=l+1;
    }
    cout << ans;
}
