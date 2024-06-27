#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		int a[n];
		for(auto &x: a)
			cin>>x;
		long long sum=0;
		int left=0, res=1e9;
		for(int i=0;i<n;i++){
			sum+=a[i];
			while(sum>x){
				res=min(res,i-left+1);
				sum-=a[left];
				++left;
			}
		}
		if(res== 1e9) cout<<"-1"<<endl;
		else cout<<res<<endl;
	}
	return 0;
}