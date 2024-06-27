#include<bits/stdc++.h>
using namespace std;

int analysis(int n){
	int temp= n;
	int rev=0;
	while(n){
		rev = rev*10 + n%10;
		n/=10;
	}
	return rev == temp;
}

int sieve(int n){
	int ans;
	while(n!=0){
		ans= n%10;
		if(ans ==9)
			return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n; cin>>n;
	int cnt=0;
	for(int i=2;i<=n;i++)
		if(analysis(i) && sieve(i)){
			cnt++;
			cout<<i<<" ";
		}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}