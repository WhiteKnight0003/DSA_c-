#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define ll long long

ll powMod(ll a, ll b){
	if(b==0)
		return 1;
	ll x = powMod(a,b/2);
	if(b%2==0) return x*x;
	else return x*x*a;
}

ll tinh(ll n){
	ll ans=0;
	ll i=1;
	while(n >= powMod(5,i)){
		ans+=n/powMod(5,i);
		i++;
	}
	return ans;
}

int main(){
	fast;
	ll q; cin>>q;
	// while(q--){
	// 	int n; cin>>n;
	// 	cout<<tinh(n)<<endl;
	// }
	cout<<tinh(q)<<endl;
	return 0;
}