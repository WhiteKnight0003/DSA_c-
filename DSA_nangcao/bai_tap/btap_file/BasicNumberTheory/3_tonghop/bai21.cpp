#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool tn(int n){
	int num=n;
	int sum=0;
	int tmep=0;
	while(num){
		sum*=10;
		sum+=num%10;
		if(n%10==9)
			tmep++;
		num/=10;
	}
	if(tmep!=0)
		return false;
	if(sum==n)
		return true;
	return false;
}

int main(){
	fast;
	int n; cin>>n;
	f1(i,n){
		if(i==1)
			continue;
		if(tn(i))
			cout<<i<<" ";
	}
	return 0;
}