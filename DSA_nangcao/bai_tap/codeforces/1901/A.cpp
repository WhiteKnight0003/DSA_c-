#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)


int xuly(int n, int x, vector<int> &v){
	int maxx=-1e9;
	int kc = v[0];
	// so sanh trong mang
	for(int i=1;i<n;i++)
		if(v[i]-v[i-1] > maxx)
			maxx=v[i]-v[i-1];

	int quaylai = 2*(x-v[n-1]);
	maxx = max(max(maxx,kc),quaylai);
	return maxx;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> v(n);
		for(auto &x: v)
			cin>>x;
		cout<<xuly(n,x,v)<<endl;
	}
	return 0;
}