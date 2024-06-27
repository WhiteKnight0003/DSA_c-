#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int giaithua(int n){
	if(n<=1)
		return 1;
	return n*giaithua(n-1);
}

int strong(int n){
	int num=0;
	while(n){
		int k=n%10;
		num+=giaithua(k);
		n/=10;
	}
	return num;
}
int main(){
	fast;
	int a,b;
	cin>>a>>b;
	fab(i,a,b){
		if(strong(i)==i)
			cout<<i<<endl;
	}
	return 0;
}