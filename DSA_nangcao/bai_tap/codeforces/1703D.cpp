#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// 1 xâu 8 ký tự có 7 cách cắt 
// 1-7  7-1
// 2-6  6-2
// 3-5 5-3
// 4-4
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<string> s(n);
		map<string,int> m;
		for(auto &x: s){
			cin>>x;
			m[x]=1;
		}

		for(int i=0;i<n;i++){
			int bol =0;
			for(int j=0;j<s[i].size();j++){
				string l= s[i].substr(0,j);
				string r = s[i].substr(j,s[i].size()-j);
				if(m[l] && m[r])
					bol =1;
			}
			cout<<bol;
		}
		cout<<endl;
	}
}