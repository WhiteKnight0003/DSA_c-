#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool tinh(int n){
	int sum=0;
	int num=n;
	int tmep=0;
	int k=0;
	while(n){
		k*=10;
		k+=n%10;
		sum+=n%10;
		if(n%10 ==6) tmep++;
		n/=10;
	}
	if(sum%10==8 && tmep != 0 && num==k)
		return true;
	return false;

}

int main(){
	fast;
	int a,b;
	cin>>a>>b;
	fab(i,a,b){
		if(tinh(i))
			cout<<i<<" ";
	}
}