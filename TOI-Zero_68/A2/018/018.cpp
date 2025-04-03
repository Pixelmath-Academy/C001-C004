#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string color[3]={"Red","Green","Blue"};
    char k;
    int n;
    cin >> k >> n;
    int st=(k=='R' ? 0: k=='G' ? 1:2);
    for(int i=0;i<n;i++){
    	cout << color[(st+i)%3] << " ";
	}
}
