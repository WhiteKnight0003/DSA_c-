#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll powMod1(ll a, ll b){
	if(b==0)
		return 1;
	ll x = powMod1(a,b/2);
	if(b%2==0)
		return x*x;
	return x*x*a;
}

ll powMod2(ll a, ll b){
	ll res =1;
	while(b!=0){
		if(b%2==1)
			res*=a;
		a*=a;
		b/=2;
	}
	return res;
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<powMod1(a,b)<<" "<<powMod2(a,b)<<endl;
	return 0;
}