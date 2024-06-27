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

bool xuly(ll n){
	int dem1=0;
	while(n){
	    int k =n%10;
	    if(k!=8 && k!=9 && k!=0 && k!=1)
	    return false;
	    if(k==1)
	    	dem1++;
	    n/=10;
	}
	if(dem1==0)
		return false;
	return true;
}

ll powmod(int a,int b){
	if(b==0)
		return 1;
	ll x = powmod(a,b/2);
	if(b%2==0)
		return x*x;
	return x*x*a;
}
ll tinh(int n){
	int num=0;
	int dem=0;
	while(n){
		num*=10;
		int k=n%10;
		if(k==8 || k==9 || k==0)
			num+=0;
		else if(k==1)
			num+=1;
		n/=10;
		dem++;
	}
	return powmod(10,dem-1)/num;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		if(xuly(n))
			cout<<tinh(n)<<endl;
		else cout<<"INVALID"<<endl;
		// 	cout<<"YES"<<endl;
		// else cout<<"NO"<<endl;
	}
	return 0;
}
