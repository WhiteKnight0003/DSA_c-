#include<bits/stdc++.h>
using namespace std;
#define tienchung main
#define endl "\n"

bool cmp(pair<string, int> &a, pair<string, int> &b){
	if(a.second==b.second)
		return a.first< b.first;
	return a.second< b.second;
}
tienchung(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t; cin>>t;
	while(t--){
		int n; cin>>n;cin.ignore();
		string s; getline(cin,s);
		int k; cin>>k;
		stringstream ss(s);
		string token;
		map<string,int> mp;
		while(ss>>token){
			mp[token]++;
		}

		vector<pair<string,int>> v;
		for(auto x: mp)
			v.push_back({x.first,x.second});
		sort(v.begin(),v.end(), cmp);


		for(auto x: v)
			cout<<x.first<<" ";
		cout<<"\n";
	}
	return 0;
}