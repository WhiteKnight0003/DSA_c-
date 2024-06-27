#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

void xuly(){
	int n,q;
	cin>>n>>q;

	map<int,int> m;
	int sum=0;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		sum+=x;
		m[sum]=i+1;
	}
	for(auto x: m)
		cout<<x.fi<<" "<<x.se<<endl;
	// vector<int> v(n);
	// int sum=0;
	// fo(i,n){
	// 	cin>>v[i];
	// 	sum+=v[i];
	// }
	// sort(v.begin(),v.end(),greater<int>());
	// while(q--){
	// 	int x; cin>>x;
		// if(sum < x){
		// 	cout<<"-1"<<endl;
		// }
	// 	else{
	// 		int count=0;
	// 		int cnt=0;
	// 		int i=0;
	// 		while(cnt<x && i != v.size()){
	// 			cnt+=v[i];
	// 			count++;
	// 			i++;			
	// 		}
	// 		cout<<count<<endl;
	// 	}
	// }
	//}
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		xuly();
		cout<<endl;
	}
	return 0;
}