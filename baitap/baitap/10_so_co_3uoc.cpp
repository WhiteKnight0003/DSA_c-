#include<bits/stdc++.h>
using namespace std;

int prime[100];
void sieve(){
	memset(prime , 1, sizeof(prime));
	prime[0] = prime[1] =0;
	for(int i=2;i<=sqrt(1000);i++)
		if(prime[i])
			for(int j=i*i; j<=1000; j=j+i)
				prime[j]=0;
}
// số có 3 ước là các bình phương nguyên tố 
int main(){
	sieve();
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		int cnt=0;
		for(int i=1;i<=sqrt(x) ; i++)
			if(prime[i]){
				cout<<i*i<<" ";
				cnt++;
			}
			cout<<"\n"<<cnt;
		cout<<endl;
	}
	return 0;
}