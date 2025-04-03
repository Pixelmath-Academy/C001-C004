#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int w,h;
	cin >> w >> h;
	int m,n;
	cin >> m >> n;
	vector<int> x(m+2),y(n+2);
	x[0]=0,x[m+1]=w;
	y[0]=0,y[n+1]=h;
	for(int i=1;i<=m;i++){
		cin >> x[i];
	}
	for(int i=1;i<=n;i++){
		cin >> y[i];
	}
	vector<int> widths,heights;
	for(int i=0;i<m+1;i++){
		widths.push_back(x[i+1]-x[i]);
	}
	for(int i=0;i<n+1;i++){
		heights.push_back(y[i+1]-y[i]);
	}
	vector<int> areas;
	for(int width : widths){
		for(int height : heights){
			areas.push_back(width*height);
		}
	}
	sort(areas.rbegin(),areas.rend());
	cout << areas[0] << " " << (areas.size()>1 ? areas[1]:areas[0]);
}
