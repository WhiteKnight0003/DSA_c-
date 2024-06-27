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

ll res(ll a, ll b){
	if(b==0)
		return 1;
	int k=a%10;
	if(b%2==0 && b%4!=0){
		ll res = pow(k,2);
		return res%10;
	}
	else if(b%3==0){
		ll res = pow(k,3);
		return res%10;
	}
	else if(b%4==0){
		ll res = pow(k,4);
		return res%10;
	}
	return k;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll a,b;
	cin>>a>>b;
	cout<<res(a,b)<<endl;
	}
	return 0;
}