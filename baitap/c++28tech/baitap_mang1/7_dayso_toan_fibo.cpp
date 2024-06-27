#include<bits/stdc++.h>
using namespace std;
int f[1001];
void sieve(){
	long long fibo[20];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=19;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];
	for(int i=0;fibo[i]<=1000;i++)
		f[fibo[i]]=1; // đánh dấu nó có xuất hiện
}
int main(){
	int t; cin>>t;
	sieve();
	while(t--){
		int n; cin>>n;
		int a[n];
		for(auto &x: a)
			cin>>x;
		for(auto x: a)
			if(f[x])
				cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}