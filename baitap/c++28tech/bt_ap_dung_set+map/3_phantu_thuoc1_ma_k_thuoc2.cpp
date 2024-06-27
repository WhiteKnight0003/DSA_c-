#include<bits/stdc++.h>
using namespace std;

void cmm1(set<int> &s , int n, int m){
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		s.insert(x); // thêm vào set
	}
    while(m--){
    	int x; cin>>x;
    	if(s.count(x) != 0)
    		s.erase(x);
    }
    
	for(auto x: s)
	   cout<<x<<" ";
}

void cmm2(map<int,bool> &mp , int n, int m){
	for(int i=1;i<=n;i++){
			int x; cin>>x;
			mp[x]=true;
		} 

		for(int i=1;i<=m;i++){
			int x; cin>>x;
			mp[x]=false;
		}

		for(auto x: mp)
			if(x.second==true){
				cout<<x.first<<" ";
			}

}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		set<int> s;
	    cmm1(s,n,m);
		cout<<endl;
	}
	return 0;
}