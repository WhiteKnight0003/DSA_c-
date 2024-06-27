
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

ll res(ll n, ll k){
	if(n>k){
		ll sum=0;
		for(int i=1;i<=k;i++)
			sum+=i%k;
		ll kq = n/k;
		if(kq * k == n)
			return sum*kq;
		else {
			int resss =0;
			for(int i=1;i<=n-kq*sum;i++)
				resss+=i%k;
			return sum*kq+resss;
		}
	}
	return n*(n+1)/2;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		cout<<res(n,k)<<endl;
	}
}