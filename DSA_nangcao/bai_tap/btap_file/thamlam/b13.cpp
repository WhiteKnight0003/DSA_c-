#include<bits/stdc++.h>
using namespace std;

// tim ky tu co tan xuat xuat hien nhieu nhat - rooif xet khoang cach
int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		int n; cin>>n; cin.ignore();
		string s; getline(cin,s);
		map<char,int> mp;
		for(auto x: s){
			mp[x]++;
		}
		/*
		int max = -1e9;
		for(auto x: mp){
			if(x.second > max){
				max = x.second;
			}
		}
		if(s.size()/)
		*/

		 for(auto x: mp){
		 	cout<<x.first<<" "<<x.second<<endl;
		 }
	}
	return 0;
}


// chưa xog