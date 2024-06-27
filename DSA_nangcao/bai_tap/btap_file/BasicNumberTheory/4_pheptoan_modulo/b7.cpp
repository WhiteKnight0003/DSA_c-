
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const int mod = 1e9+7;

ll res(ll n, ll k){
	if(n==k)
		return n+1;
	if(k>n){
		if(k%n==0)
		return k+k/(n-1)-1;
	else return k+k/(n-1);
	}
	
	return 1;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		cout<<res(n,k)<<endl;
	}
	return 0;
}
