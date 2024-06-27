#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n], b[n];
		priority_queue<int> Qa;
		priority_queue<int,vector<int>,greater<int>> Qb;
		for(auto &x: a){
			cin>>x;
			Qa.push(x);
		}
		for(auto &x: b){
			cin>>x;
			Qb.push(x);
		}
		ll res=0;
		while(Qa.size()){
			res+=Qa.top()*Qb.top();
			Qa.pop();
			Qb.pop();
		}
		cout<<res<<endl;
	}
	return 0;
}