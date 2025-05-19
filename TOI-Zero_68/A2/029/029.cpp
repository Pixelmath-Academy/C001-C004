#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=i;j++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<=i;j++){
                if(j==1 || j==i){
                    cout<<0<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}