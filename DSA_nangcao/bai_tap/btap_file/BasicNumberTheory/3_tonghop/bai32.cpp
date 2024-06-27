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

ll poow(int a, int b){
	ll res =1;
	while(b){
		if(b%2==1)
		res*=a;
	a*=a;
	b/=2;
	}
	
	return res;
}

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<powmod(a,b)<<endl;
		cout<<poow(a,b)<<endl;
	}
	return 0;
}