#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,w,l;
    cin >> n >> w >> l;
    int a[n][w+1];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        int c;
        cin >> c;
        for(int j=0;j<c;j++){
        	int k;
        	cin >> k;
        	a[i][k]=1;
		}
    }
    for(int i=1;i<=w;i++){
        int check=1;
        for (int j=0;j<n;j++){
            int kk=0;
            for(int k=max(1,i-l);k<=min(w,i+l);k++){
            	kk=max(kk,a[j][k]);
			}
            check=min(check,kk);
        }
        if(check){
        	cout << 1;
        	return 0;
		}
    }
    cout << 0;
}
