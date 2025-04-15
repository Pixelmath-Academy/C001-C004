#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
    	s[i]=toupper(s[i]);
	}
    int mx=0,cnt=0,sr=0,sb=0,ok=1,ccnt=0,id=0,unn=1;
    for(int i=0;i<s.size();i++){
        if(s[i]!='I' && s[i]!='T'){
        	unn=0;
		}
        if(sb && s[i]!='I' && s[i]!='T' && ccnt==0){
			ok=0; 
			break;
		}
        if(sr && s[i]!='A' && cnt==0){
			ok=0; 
			break;
		}
        if(s[i]=='R'){
        	sr=1;
        	cnt=0;
		}
        else if(s[i]=='A'){
            if(!sr){
				ok=0; 
				break;
			}
            cnt++;
            mx=max(mx,cnt);
        }
		else if(s[i]=='B'){
			sb=1;
			ccnt=0;
		}
        else if((s[i]=='I' || s[i]=='T') && sb){
        	ccnt++;
		}
        ++id;
    }
    if(!ok || (sr && cnt==0) || (sb && ccnt==0)){
    	cout << "no " << min(id,(int)s.size()-1);	
	}
    else if(unn){
    	cout << "unknown " << s.size();
	}
    else if(ok){
    	cout << "yes " << mx;
	}
}
