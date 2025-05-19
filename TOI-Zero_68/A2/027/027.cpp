#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_score = -1e9;
    for(int i=0;i<n;i++){
        max_score = max(max_score,arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == max_score){
            count++;
        }
    }
    cout<<max_score<<endl<<count<<endl;
    return 0;
}