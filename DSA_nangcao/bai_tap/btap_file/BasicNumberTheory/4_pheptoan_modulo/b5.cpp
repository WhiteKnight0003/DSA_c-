
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
const int mod = 1e9+7;

ll pow(ll a, ll b){
	if(b==0)
		return 1;
	ll res=1;
	while(b){
		if(b%2==1)
			res*=a;
		a*=a;
		b/=2;
	}
	return res;
}
ll res(int n , int k, vector<int> & a){
	ll ans =0;
	for(int i=0;i<n;i++){
		ans+=a[i]*pow(k,i);
		ans%=mod;
	}
	return ans%mod;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		vector<int> a(n);
		for(auto &x: a)
			cin>>x;
		cout<<res(n,x,a)<<endl;

	}
	return 0;
}