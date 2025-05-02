#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
    int x=1,y=1,count=0;
    for (int i=0;i<n;i++) {
        int xx=a[i],yy=b[i];
        int p=x,pp=xx,q=y,qq=yy;
        if(p>pp){
        	swap(p,pp);
		}
        if(q>qq){
        	swap(q,qq);
		}
        if(p==q && pp==qq){
        	count++;
		}
        else if(p!=q && p!=qq && pp!=q && pp!=qq){
            if(p<q && pp>q && pp<qq){
            	count++;
			}
            else if(q<p && qq>p && qq<pp){
            	count++;
			}
        }
        x=xx,y=yy;
    }
    cout << count;
}
