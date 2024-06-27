#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t; cin>>t; cin.ignore();
	
	while(t--){
		priority_queue<int> Q;
		int k; cin>>k;cin.ignore();
		string s; getline(cin,s);
		map<char,int> mp;
		for(auto x: s){
			mp[x]++;
		}
		for(auto x: mp){
			Q.push(x.se);
		}
		
		if(k>s.size()){
			cout<<"0"<<endl;
			break;
		}
		
		while(k--){
			int val=Q.top();
			Q.pop();
			--val;
			Q.push(max(val,0));
		}
		
		ll res=0;
		while(!Q.empty()){
			res+=Q.top()*Q.top();
			Q.pop();
		}
		cout<<res<<endl;
		
		while(Q.size()){
			cout<<Q.top()<<" ";
			Q.pop();
		}
		cout<<endl;
	}
	return 0;
}