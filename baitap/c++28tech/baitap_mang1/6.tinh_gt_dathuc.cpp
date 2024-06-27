#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int result(int n, int x, int a[]){
	long long res=0,lt=1;
	for(int i=n-1;i>=0;i--){
		res+=a[i]*lt;
		res%=mod;
		lt *= x;
		lt %=mod;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<result(n,x,a)<<endl;
	}
	return 0;
}