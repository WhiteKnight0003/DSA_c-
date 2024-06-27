#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool check(ll n){
	if(n<=2){
		if(n==2)
		  return true;
		else return false;
	}

	if(n%2==0)
		return false;
	else 
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n; cin>>n;
	if(check(n))
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}