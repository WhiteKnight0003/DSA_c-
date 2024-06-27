#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
	string s;
    getline(cin,s);
	map<char,int> mp;
	for(auto x: s)
		mp[x]++;
	int max_val=-1e9;
	char str;
	for(auto x: mp)
		if(max_val < x.second){
			max_val = x.second;
			str=x.first;
		}
	cout<<str<<endl;
}
return 0;
}