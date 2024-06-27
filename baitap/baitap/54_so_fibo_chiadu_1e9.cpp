#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fibo1(int n){
	if(n==0 || n==1)
		return n;
	int fn0=0, fn1=1, fnn;
	for(int i=2; i<=n;i++){
		int fnn= fn1+fn0;
		fnn%=(int)(1e9+7);
		fn0=fn1;
		fn1=fnn;
	}
	return fnn;
}

int fibo[1001];
void sieve(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2; i<=1000;i++){
		fibo[i]=fibo[i-1]+ fibo[i-2];
		fibo[i]%=(int)(1e9+7);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	sieve();
	while(t--){
		int n; cin>>n;
		cout<<fibo[n]<<endl;
	}
	return 0;
}