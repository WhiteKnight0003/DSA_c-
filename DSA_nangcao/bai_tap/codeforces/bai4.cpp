#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		for(auto &x: a)
			cin>>x;
		sort(a.begin(),a.end());
		for(auto &x: b)
			cin>>x;
		sort(b.begin(),b.end(),greater<int>());

		ll sum=0;
		for(int i=0;i<n;i++)
			sum+=abs(a[i]-b[i]);
		cout<<sum<<endl;
	}
	return 0;
}