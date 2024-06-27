#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// đếm ước số 
int count(ll n){
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0){
			if(i != n/i)
				cnt+=2;
			else 
			    ++cnt;
		}
	return cnt;
}

int summ(ll n){
	int sum=0;
	for(int i=1;i<=sqrt(n); i++)
		if(n%i==0){
			if(i!= n/i)
			   sum+=i+n/i;
			else 
			sum+=i;
		}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<summ(n)<<" "<<count(n)<<endl;
	}
	return 0;
}