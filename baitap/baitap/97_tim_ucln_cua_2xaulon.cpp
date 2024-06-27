// gcd (a,b) = gcd(b,a%b);
// trong bài này gcd(n,m) = gcd(m, n%m)
#include<bits/stdc++.h>
using namespace std;

long long  find(char n[], long long m){
	long long res =0;
	for(int i=0;i<strlen(n);i++)
		res = (res *10 + n[i] -'0')%m;

	/* nó chính là 
	res = res *10 + n[i] - '0';
	res %= m;

	*/
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		char n[1002];
		long long m;
		cin>>n>>m;
		cout<<__gcd(m,find(n,m))<<endl;
	}
}