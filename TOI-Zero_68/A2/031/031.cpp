#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<char> vec[2];
	vec[0].resize(n);
	vec[1].resize(n);
	for(int i=0;i<n;i++){
		cin>>vec[0][i];
	}
	for(int i=0;i<n;i++){
		cin>>vec[1][i];
	}
	int q;
	cin>>q;
	while(q--){
		int a,b;
		char c;
		cin>>a>>b>>c;
		vec[a-1][b]=c;
	}
	for(int i=0;i<n;i++){
		cout<<vec[0][i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<vec[1][i]<<" ";
	}
	cout<<"\n";
	int cnt=0;
	for(int i=0;i<n;i++){
		string s="";
		s+=vec[0][i];
		s+=vec[1][i];
		if(s=="AT"||s=="TA"||s=="CG"||s=="GC") cnt++;
	}
	cout<<n-cnt;
	return 0;
}
