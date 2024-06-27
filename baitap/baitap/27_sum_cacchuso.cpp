#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int analysis(ll n){
	int sum =0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<analysis(n)<<endl;
	}
	return 0;
}