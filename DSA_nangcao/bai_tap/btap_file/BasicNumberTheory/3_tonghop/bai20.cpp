#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll powmod(int a, int b){
	if(b==0) return 1;
	ll x = powmod(a,b/2);
	if(b%2==0)
		return x*x;
	else return x*x*a;
}
int demso(int n){
	int count=0;
	while(n){
		n/=10;
		count++;
	}
	return count;
}
bool xuly(int n){
	int num=n;
	int sum=0;
	while(num){
		sum+=powmod((num%10),demso(n));
		num/=10;
	}
	if(sum==n)
		return true;
	return false;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(xuly(n))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}