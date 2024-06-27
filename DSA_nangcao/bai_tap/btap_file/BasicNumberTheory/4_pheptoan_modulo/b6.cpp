
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const int mod = 1e9+7;

ll res(ll a,ll b){
	if(a%b==0)
		return 0;
	ll ans = a/b;
	return (ans+1)*b-a;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<<res(a,b)<<endl;
	}
	return 0;
}