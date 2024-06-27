#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
	string s;
    getline(cin,s);
	set<char> set;
	for(auto x: s)
		set.insert(tolower(x));

	if(set.size()==26) 
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
return 0;
}