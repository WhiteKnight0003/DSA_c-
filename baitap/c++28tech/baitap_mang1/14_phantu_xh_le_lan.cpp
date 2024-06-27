
#include<bits/stdc++.h>
using namespace std;



int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		map<int,int> mp;
		int a[n];
		for(int i=0;i<n;i++){
			int x; cin>>x;
			mp[x]++;
		}
		for(auto x: mp)
			if(x.second%2==1)
				cout<<x.first<<endl;
	}
	return 0;
}