#include<bits/stdc++.h>
using namespace std;

void sieve(int n){ // 28 = 2*2*7
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n!= 1)
		cout<<n;
}

void sieve1(int n){ // 28 = 2*7
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<i<<" ";
			while(n%i==0)
				n/=i;
		}
	}
	if(n!=1)
		cout<<n;
}

void sieve2(int n){ // 28=2(2) 7^(1)
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			cout<<i<<"("<<cnt<<") ";
		}
	if(n!=1) cout<<n<<"(1) ";
}

void sieve3(int n){ // 28 = 2x2x7
	for(int i=2;i<=sqrt(n);i++)
		while(n%i==0){
			cout<<i<<"x";
			n/=i;
		}
	if(n!=1) cout<<n;
}

void sieve4(int n){ // 28 = 2^2 * 7^1
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			cout<<i<<"^"<<cnt<<" * ";
		}
	if(n!=1) cout<<n<<"^1";
}
int main(){
	int n; cin>>n;
	sieve4(n);
	return 0;
}