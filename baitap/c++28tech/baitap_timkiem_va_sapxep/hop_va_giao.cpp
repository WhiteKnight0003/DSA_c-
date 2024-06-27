#include<bits/stdc++.h>
using namespace std;

int main(){
		int m,n; cin>>m>>n;
		int a[m],b[n];
		map<int,int> mp;
		for(auto &x: a){
			cin>>x;
			mp[x]++;
		}
		
		for(auto &x: b){
			cin>>x;
			mp[x]++;
		}
		
		for(auto x: mp)
			cout<<x.first<<" ";
		cout<<endl;
		for(auto x: mp)
			if(x.second==2)
				cout<<x.first<<" ";
	return 0;
}