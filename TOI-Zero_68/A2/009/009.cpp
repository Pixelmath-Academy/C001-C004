#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> checklist;
    int n,pass;
    cin >> n >> pass;
    int tour[n+1][n+1];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin >> tour[i][j];
		}
		checklist.push_back(i);
	}
    while(checklist.size()>1){
        vector<int> winner;
        for(int i=0;i<checklist.size();i+=2){
            int x=checklist[i],y=checklist[i+1];
            if(tour[x][y]==x){
                if(pass==y){
                	pass=0;
                	winner.push_back(y);
				}
                else{
                	winner.push_back(x);
				}
            }
			else{
                if(pass==x){
                	pass=0;
                	winner.push_back(x);
				}
                else{
                	winner.push_back(y);
				}
            }
        }
        checklist=winner;
    }
    cout << checklist[0];
}
