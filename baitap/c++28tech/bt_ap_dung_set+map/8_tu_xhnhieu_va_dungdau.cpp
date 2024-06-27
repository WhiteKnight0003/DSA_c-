#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		map<string,int> mp;
		while(ss>>word){
			mp[word]++;
		}

		int max_val=-1e9;
		string res;

		for(auto x: mp)
			if(max_val<x.second){
				max_val= x.second;
				res = x.first;
			}
		cout<<res<<endl;
	}
	return 0;
}