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

ll powmod(int a, int b){
	if(b==0)
		return 1;
	ll x = powmod(a,b/2);
	if(b%2==0)
		return x*x;
	return x*x*a;
}
int boi(int x, int y , int z){
	int k = __gcd(__gcd(x,y),z);
	int boi = ((x*y/__gcd(x,y))*z)/k;
	return boi;
}

ll tinh(int n, int x, int y, int z){
	if(powmod(10,n-1) < boi(x,y,z))
		return -1;
	if(powmod(10,n-1) % boi(x,y,z) == 0)
		return powmod(10,n-1);
	ll k = powmod(10,n-1)/boi(x,y,z);
	return (k+1)*boi(x,y,z);
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		cout<<tinh(n,x,y,z)<<endl;
	}
	return 0;
}