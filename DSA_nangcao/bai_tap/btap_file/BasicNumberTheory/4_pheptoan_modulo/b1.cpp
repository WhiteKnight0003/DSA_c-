
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

ll powmod(ll x, ll y, ll p){
	ll res=1;
	while(y){
		if(y%2!=0){
			x%=p;
			res*=x;
			res%=p;
		}
		x%=p;
		x*=x;
		y/=2;
	}
	return res;
	
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll x,y,p;
		cin>>x>>y>>p;
		cout<<powmod(x,y,p)<<endl;
	}
}