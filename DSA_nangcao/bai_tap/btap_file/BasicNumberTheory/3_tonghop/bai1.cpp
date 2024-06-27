#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)
#define ll long long

bool songuyen(ll x){
	ll num = x;
	ll n = 0;
	while(num){
		n*=10;
		n+=num%10;
		num/=10;
	}
	if(x != n)
		return false;
	return true;
}
int main(){
	int q;cin>>q;
	while(q--){
		ll n;cin>>n;
		if(songuyen(n))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}