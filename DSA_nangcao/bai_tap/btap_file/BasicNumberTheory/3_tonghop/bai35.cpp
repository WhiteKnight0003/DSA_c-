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

int main(){
	fast;
	ll t; cin>>t;
	if(t%2==0) cout<<t/2<<endl;
	else cout<<(-t-1)/2<<endl;
	return 0;
	// -1
	// -1 + 2 = 1  n/2
	// -1 +2 -3 =  -2   n-1
	// -1+2-3+4 = 2 n/2
	// -1+2-3+4 -5 = -3  
}