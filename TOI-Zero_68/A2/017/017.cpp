#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a, b, c;
    cin >> a >> b >> c;
    map <pair<char,char>,int> mp;
    mp[{'S','R'}]=60,mp[{'S','T'}]=80;
    mp[{'M','R'}]=80,mp[{'M','T'}]=100;
    mp[{'L','R'}]=100,mp[{'L','T'}]=120;
    if(c!='N'){
        int k;
        cin >> k;
        cout << mp[{a,b}]+(c=='P' ? 15:10)*k;
    }
	else{
		cout << mp[{a,b}];
	}
}
