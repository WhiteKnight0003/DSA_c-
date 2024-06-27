#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long

bool fibo(ll n){
	if(n==0 || n==1)
		return true;
	ll f1=0;
	ll f2=1;
	for(int i=3;i<=93;i++){
		ll f3 = f1+f2;
		if(f3 == n){
			return true;
		}
		f1=f2;
		f2=f3;
    }
    return false;
}

int main(){
	fast;
	int n;cin>>n;
	while(n--){
		ll x;cin>>x;
		if(fibo(x))
		cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}