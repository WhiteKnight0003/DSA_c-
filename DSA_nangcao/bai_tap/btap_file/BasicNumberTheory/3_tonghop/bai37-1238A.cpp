#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define se second
#define fi first

bool xuly(ll a, ll b){
	// if(a%2==0 && b%2==0)
	// 	return true;
	ll k =a -b;
	if(k%2==0)
		return true;
	for(ll i=3;i<=sqrt(k);i+=2)
		if(k%i==0){
			return true;
			break;
		}
	return false;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		if(xuly(a,b))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
	return 0;
}
