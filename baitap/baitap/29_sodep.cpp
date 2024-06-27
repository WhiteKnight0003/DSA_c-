// số đẹp là số nguyên tố là sum các chữ số là 1 số fibo
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(ll n){
	if(n==0 || n==1)
		return 1;
	ll fn0=0, fn1=1;
	for(int i=2;i<=92;i++){
		long long fn2= fn1+ fn0;
		if(fn2 == n) 
			return 1;
		fn0= fn1;
		fn1= fn2;
	}
	return 0;
}

int prime(ll n){
	for(ll i= 2; i<= sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}

int summ(ll n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return solve(sum);
}
int main(){
	ll a, b;
	cin>>a>>b;
	int check=0;
	for(ll i=a; i<=b;i++)
		if(summ(i) && prime(i)){
			check =1; 
			cout<<i<<" ";
		}

	if(check == 0)
		cout<<"-1";
	return 0;
}