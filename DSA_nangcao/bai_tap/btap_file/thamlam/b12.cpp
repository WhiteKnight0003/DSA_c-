#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		map<char,int> mp;
		for(auto x: s){
			mp[x]++;
		}
		int max =-1e9;
		for(auto x: mp){
			if(x.second > max){
				max = x.second;
			}
		}
		if(s.size()-max >= max -1){
			cout<<"1"<<endl;
		}
		else cout<<"-1"<<endl;
	}
	return 0;
}