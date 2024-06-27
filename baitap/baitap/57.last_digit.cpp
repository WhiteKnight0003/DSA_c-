#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int powmod(int a, int b){
	int res=1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=10;
		}
		a*=a;
		a%=10;
		b/=2;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ll k;
		cin>>k;
		cout<<powmod(1378,k)<<endl;
	}
	return 0;
}