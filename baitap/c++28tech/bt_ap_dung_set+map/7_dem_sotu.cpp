#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		set<string> set;
		string word;
		while(ss>>word){
			set.insert(word);
		}
		cout<<set.size()<<endl;
	}
	return 0;
}