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

ll gcd(ll a, ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return a/gcd(a,b)*b;
}

ll kq(ll n){
	ll sum =0;
	for(int i=1;i<=n;i++){
		int j=n-i+1;
		if(i<=j){
			if(i<j)
				sum+=lcm(i,n)+lcm(j,n);
			else sum+=lcm(j,n);
		}
		else break;
	}
	return sum;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<kq(n)<<endl;
	}
	return 0;
}