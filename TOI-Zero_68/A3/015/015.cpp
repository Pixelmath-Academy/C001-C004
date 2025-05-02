#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
    sort(a,a+n);
    int sum=0,count=0;
    for(int i=0;i<n;i++){
    	count+=a[i];
    	sum+=2*count;
	}
    cout << sum; 
}
