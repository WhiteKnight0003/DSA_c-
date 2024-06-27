// cho n - tìm snt k max sao cho n! % k^x =0
// kq += n/[k^i] k^i<=n

#include<bits/stdc++.h>
using namespace std;

#define ll long long

pow1(ll a, ll b){
	ll res = 1; 
	while(b) {  
		if(b%2==1) res *=a; 
		a*=a; 
		b/=2; 
	}
	return res;
}
pow2(ll a, ll b){
	if(b==0) return 1;  
	ll x = pow2(a,b/2); 
	if(b%2==1) 
		return x*x*a; 
	return x*x;
}
int xuly(int n, int k){
	int i=1;
	int res=0;
	while(n >= pow2(k,i)){
		res+=n/pow2(k,i);
		i++;
	}
	return res;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<xuly(n,k)<<endl;
	return 0;
}