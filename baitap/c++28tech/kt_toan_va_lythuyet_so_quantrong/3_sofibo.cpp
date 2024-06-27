#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int fibo[92];

void sieve(){
	fibo[0] = 0; fibo[1]=1;
	for(int i=2;i<=92;i++)
		fibo[i]=fibo[i-1] + fibo[i-2];
}
int main(){
	int n; cin>>n;
	sieve();
	for(int i=0;i<n;i++)
		cout<<fibo[i]<<" ";
	return 0;
}