#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long

bool check(int n, vector<ll> &v){
	for(int i=1;i<n;i++){
		if(v[i] != v[i-1])
			return false;
	}
	return true;

}
void xuly(int n, vector<ll> &a, int dem ,vector<int> &uoc,ll gcd){
		dem++;
		uoc.push_back(gcd);
		for(int i=0;i<n;i++)
			a[i] = (ll)(a[i]+gcd)/2;
		if(!check(n,a))
			xuly(n,a,dem,uoc,1);
		else{
			if(dem>n)
				cout<<dem<<endl;
			else {
				cout<<dem<<endl;
				for(auto x: uoc)
					cout<<x<<" ";
			}
		}
}

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int dem=0;
		if(n==1){
			cout<<dem<<endl;
			continue;
		}
		vector<ll> v(n);
		for(auto &x: v)
			cin>>x;
		vector<int> uoc;
		ll gcd;
		for(int i=1;i<n;i++)
			gcd = __gcd(v[i],v[i-1]);
		xuly(n,v,dem,uoc,gcd);
		cout<<endl;
	}
	return 0;
}