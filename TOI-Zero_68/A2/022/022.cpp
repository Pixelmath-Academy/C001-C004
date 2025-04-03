#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l,n;
    cin >> l >> n;
    vector<pair<int, int>> bridge;
    
    for(int i=0;i<n;i++){
        int left,right;
        cin >> left >> right;
        bridge.push_back({left,1});
        bridge.push_back({right,-1});
	}
    int count=0,mx=0;
    sort(bridge.begin(), bridge.end());
    for(int i=0;i<bridge.size();i++){
        int idx=bridge[i].first;
        int k=bridge[i].second;
        count += k;
        
        if(i<bridge.size()-1 && bridge[i+1].first==idx){
            continue;
        }
        
        mx=max(mx,count);
    }

    cout << mx;
}
