#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
    cin >> n;
    int x,a=0,b=0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x>18){
        	a++;
		}
        else{
        	b++;
        }
    }
    cout << max(0,a-b-1)+n;
}
