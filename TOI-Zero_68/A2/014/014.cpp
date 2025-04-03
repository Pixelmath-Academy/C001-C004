#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
    cin >> a >> b;
    int idxa=0,idxb=0;
    while(a.size()<b.size()){
    	a += a[idxa++];
	}
    while(b.size()<a.size()){
    	b += b[idxb++];
	}
    int count=0,sum=0,mx=0;
    for(int i=0;i<a.size();i++) {
        a[i]=tolower(a[i]),b[i]=tolower(b[i]);
        if (a[i]=='l' || a[i]=='o' || a[i]=='v' || a[i]=='e' ||  b[i]=='l' || b[i]=='o' || b[i]=='v' || b[i]=='e'){
        	count++,sum++,mx=max(mx, sum);
			cout << 'w';
		}
        else {
        	cout << '$';
        	sum=0;
		}
    }
    if(count%2==1){
    	cout << mx;
	}
    else if(mx<2){
    	cout << '#';
	}
}
