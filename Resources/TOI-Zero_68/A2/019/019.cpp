#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
    cin >> s;
    int b=0,count=0,mx=0,bu=0;
    for(int i=0;i<s.size();i++){
        char e=s[i];
        if(toupper(e)=='B'){
            b=1;
            bu=1;
            count=0;
        }
        else if(toupper(e)=='U' && bu){
            count++;
            mx=max(mx,count);
        }
        else{
            count=0;
            bu=0;
        }
    }
    if(mx>0){
        cout << "Yes " << mx;
    }
    else if(b){
        int fb=0;
        for (int i=0;i<s.size();i++){
            char e=s[i];
            if(!fb){
            	cout << e;
			}
            else{
            	cout << 'U';
			}
            if(tolower(e)=='b'){
            	fb=1;
			}
        }
    }
    else{
        char A[3]={'B','U','U'};
        for (int i=0;i<s.size();i++) {
            cout << A[i % 3];
        }
    }
}
