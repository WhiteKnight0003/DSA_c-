#include<bits/stdc++.h>
using namespace std;


void mapp(map<int, int> &mp , int n){
	for(int i=1;i<=n; i++){
		int x; cin>>x;
		mp[x]++;
	}
	int max_val=-1e9;
	int min_val=1e9;

	for(auto x: mp)
		if(x.second>max_val){
			max_val= max(max_val,x.second);
			min_val=min(min_val,x.first);
		}
	cout<<min_val<<" "<<max_val<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> mp;
		mapp(mp,n);
	}
	return 0;
}