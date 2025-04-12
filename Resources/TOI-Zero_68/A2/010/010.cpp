#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin >> n >> q;
    vector<tuple<ll,ll,ll> > a(n);
    ll d=0,id=0;
    for(int i=0;i<n;i++){
        ll k,kk;
        cin >> k >> kk;
        d+=k;
        get<1>(a[i])=id;
        id+=kk;
        get<0>(a[i])=d;
        get<2>(a[i])=id;
    }
    a.push_back(make_tuple(0,id,INT_MAX));
    stack<tuple<ll,ll,ll> > st;
    st.push(make_tuple(0,0,0));
    map<ll,ll> mp;
    for(int i=0;i<a.size();i++){
        ll h=get<0>(a[i]);
        ll l=get<1>(a[i]);
        ll r=get<2>(a[i]);
        while(!st.empty() && get<0>(st.top())>=h){
            tuple<ll, ll, ll> top=st.top();
            st.pop();
            ll H=get<0>(top);
            ll L=get<1>(top);
            ll R=get<2>(top);
            mp[R-L]=max(mp[R-L],H);
            l=L;
        }
        st.push(make_tuple(h,l,r));
    }
    vector<pair<ll,ll>> v;
    for(map<ll,ll>::iterator it=mp.begin();it!=mp.end();++it){
        v.push_back(make_pair(it->first,it->second));
    }
    v.push_back(make_pair(LLONG_MAX,0));
    for(int i=v.size()-2;i>=0;i--){
        v[i].second=max(v[i].second,v[i+1].second);
    }
    while(q--){
        ll x;
        cin >> x;
        cout << (*lower_bound(v.begin(),v.end(),make_pair(x, LLONG_MIN))).second << endl;
    }
}
