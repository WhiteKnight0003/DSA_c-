#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool tangdan(int n){
	int cuoi = n%10;
	n/=10;
	while(n){
		int k= n%10;
		if(k>cuoi)
			return false;
		n/=10;
	}
	return true;
}

bool nt(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	int n; cin>>n;
	int cnt=0;
	f1(i,n){
		if(tangdan(i) && nt(i)){
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<endl<<cnt;
}