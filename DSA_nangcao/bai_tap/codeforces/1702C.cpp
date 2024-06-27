#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		map<int,int> mi,ma;
		for(int i=1;i<=n;i++){
			int x; cin>>x;
			if(mi.find(x) == mi.end()) mi[x] =i;
			ma[x]=i; // thêm hết vào ma
			//3 7 1 5 1 4
			//3 7 1 5 4 - 1 2 3 4 5
			//1 - 1
		}

		// ý tưởng : đi từ con x đầu tiên đến con y cuối cùng
		while(q--){
			int x, y;
			cin>>x>>y;
			if(mi[x] <= ma[y] && mi[x])
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}