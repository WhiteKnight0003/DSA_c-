#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

void xuly(){
	int n; cin>>n;
	vector<int> v(n);
	for(auto &x: v)
		cin>>x;
	int l=0;
	int r=n-1;
	int res=0;
	int suml=v[l];
	++l;
	int sumr=v[r];
	--r;
	while(l!=r){
		if(suml>sumr){
			sumr+=v[r];
			--r;
		}
		else if(suml<sumr){
			suml+=v[l];
			++l;
		}
		else {
			if(l!=r)
			{
				++l;
				--r;
			}
		}
	}
	res=l+r;
	cout<<suml<<" "<<sumr<<" "<<res<<endl;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		xuly();
	}
}