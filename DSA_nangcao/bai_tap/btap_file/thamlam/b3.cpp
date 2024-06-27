#include<bits/stdc++.h>
using namespace std;

#define ll long long 
const int mod = 1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		priority_queue<int,vector<int>,greater<int>> p;
		for(auto &x: a){
			cin>>x;
			p.push(x);
		}
		ll res=0;
		int i=0;
		while(p.size()){
			res+=p.top()*i;
			++i;
			res%=mod;
			p.pop();
		}
		cout<<res<<endl;
	}
	return 0;
}