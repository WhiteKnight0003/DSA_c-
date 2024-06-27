
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const int mod = 1e9+7;


ll res(ll n){
	ll ans=8;
	n--;
	while(n){
		int k = 8;
		ans *=k;
		ans%=10;
		--n;
	}
	return ans;
}

int main(){
	fast;
	ll n; cin>>n;
	cout<<res(n);
	return 0;
}