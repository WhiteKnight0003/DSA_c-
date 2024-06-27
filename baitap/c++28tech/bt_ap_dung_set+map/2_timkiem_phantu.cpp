#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	/*
	while(t--){
		int n; cin>>n;
		set<int> s;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			s.insert(x);
		}
		int m; cin>>m;
		while(m--){
			int x; cin>>x;
			if(s.count(x) ==1)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	*/
     
    while(t--){
    	int n; cin>>n;
    	map<int,bool> mp;
    	for(int i=0;i<n;i++){
			int x; cin>>x;
			mp[x]=true;
		}
		int m; cin>>m;
		while(m--){
			int x; cin>>x;
			// iff(mp.count(x) ==1)
			if(mp[x])
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
    }
	return 0;
}