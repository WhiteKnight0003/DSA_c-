#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define se second
#define fi first

bool sapxep(vector<int> &v, int min){
	if(v[0]>min)
		return false;
	return true;
}

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		int min =1e9+7;
		for(auto &x: v){
			cin>>x;
			if(min>x)
				min =x;
		}
		if(sapxep(v,min))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}