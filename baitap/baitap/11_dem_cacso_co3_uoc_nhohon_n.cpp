#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int prime[1000002];
void sieve(){
	memset(prime , 1, sizeof(prime));
	prime[0] = prime[1] =0;
	for(int i=2;i<=1000; i++)
		if(prime[i])
			for(int j=i*i; j<=1000000; j+=i)
				prime[j]=0;
}
int main(){
	sieve();
	int t; cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		int cnt=0;

		
		for(int i=sqrt(l); i<=sqrt(r);i++) // kt snt trong khoảng này thay vì bình phương snt
			if(prime[i] && 1ll*i*i>=l )
				++cnt;
		cout<<cnt<<endl;
	}
	return 0;
}