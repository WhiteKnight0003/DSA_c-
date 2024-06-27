#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool xuly(int n){
	while(n){
		int k=n%10;
		if(k!=6 && k!=0 && k!=8)
			return false;
		n/=10;
	}
	return true;
}
int main(){
	fast;
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		if(xuly(n))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}