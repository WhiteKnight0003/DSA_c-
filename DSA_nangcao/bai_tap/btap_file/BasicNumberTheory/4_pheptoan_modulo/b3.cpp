
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

ll res(ll n, ll k){
	ll sum;
	if(n>k){
		sum=0;
		for(int i=1;i<=k;i++)
			sum+=i%k;
		ll kq = n/k;
		if(kq * k == n)
			sum*=kq;
		else {
			int resss =0;
			for(int i=1;i<=n-kq*sum;i++)
				resss+=i%k;
			sum*=kq;
			sum+=resss;
		}
	}
    else sum=n*(n+1)/2;
    if(sum==k)
    	return 1;
    return 0;
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