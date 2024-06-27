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
		vector<string> v;
		set<string> set;
		while(ss>>word){
			v.push_back(word);
		}
		
		for(auto x: v){
			if(set.find(x) != set.end()){ // lần đầu đc lặp
				cout<<x<<endl;
				break;
			}
			set.insert(x);
		}
	}
	return 0;
}