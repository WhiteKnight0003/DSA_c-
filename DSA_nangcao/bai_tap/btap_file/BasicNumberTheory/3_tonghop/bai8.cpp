#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
// (2^p-1)*2^(p-1) với p, 2^p-1 là nguyên tố 

// ktra nguyen to 
int prime(ll n){
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

int xuly(ll n){
	for(int i=1;i<=33;i++)
		if(prime(i)){
			ll tmep1 =  pow(2,i)-1;
			if(prime(tmep1)){
				ll tmep2= pow(2,i-1);
				if(tmep1*tmep2== n)
					return 1;
			}
		}
	return 0;
}
int main(){
	int n; cin>>n;
	for(int i=0;i<n;i++)
		if(xuly(i))
			cout<<i<<endl;
}