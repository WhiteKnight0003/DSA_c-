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
bool nt(ll n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		return false;
	return true;
}
void xuly(ll n){
    vector<int> v(18);
    ll x=n;
	while(n){
		int k=n%10;
		v[k]++;
		n/=10;
	}
	while(x){
		int m = x%10;
		if(v[m] !=0 && nt(m)){
			cout<<m<<" "<<v[m]<<endl;
			v[m] =0;
		}
		x/=10;
	}
}
int main(){
	ll n; cin>>n;
	xuly(n);
}