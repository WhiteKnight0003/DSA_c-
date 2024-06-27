#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define fi first
#define se second
bool xuly(){
	int k; cin>>k;
	pair<int,int> p[k];
	for(auto &x: p)
		cin>>x.fi;
	for(auto &x: p)
		cin>>x.se;
	for(auto x: p)
		if(x.fi<x.second)
			return false;
	
	int kc = -1e9;
	for(int i=0;i<k;i++){
		if(p[i].fi-p[i].se>kc)
			kc = p[i].fi-p[i].se;
	}
	for(int i=0;i<k;i++){
		p[i].fi-=kc;
		if(p[i].fi<0)
			p[i].fi=0;
	}
	for(auto x: p){
		if(x.fi != x.se )
			return false;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		if(xuly())
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}