#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		priority_queue<int,vector<int>, greater<int>> Q;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			Q.push(x);
		}
		ll res=0;
		while(Q.size()>1){
			int x = Q.top();
			Q.pop();
			x+= Q.top();
			Q.pop();
			res+=x;
			Q.push(x);
		}
		cout<<res<<endl;
	}
	return 0;
}