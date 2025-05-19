#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int x=-1,y=-1;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=arr[i][j];
        }
        if(sum%2!=0){
            x=i;
            break;
        }
    }
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=arr[j][i];
        }
        if(sum%2!=0){
            y=i;
            break;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}