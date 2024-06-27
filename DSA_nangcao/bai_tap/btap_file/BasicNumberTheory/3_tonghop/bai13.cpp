#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long


bool prime(ll n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
		return true;
	}

	bool fibo(ll n){
		ll f0=0;
		ll f1=1;
		for(int i=3;i<=93;i++){
			ll fn=f1+f0;
			if(fn == n){
				return true;
				break;
			}
			f0=f1;
			f1=fn;
		}
		return false;
	}

	int sum(ll n){
		int sum=0;
		while(n){
			sum+=n%10;
			n/=10;
		}
		return sum;
	}
	int main(){
		fast;
		int t; cin>>t; 
		while(t--){
			ll a,b;cin>>a>>b;
			int tmep=0;
			for(int i=a;i<=b;i++)
				if(prime(i)  && fibo(sum(i))){
					cout<<i<<" ";
					tmep++;
				}
				if(tmep==0)
					cout<<"-1"<<endl;
				cout<<endl;
			}
			return 0;
		}