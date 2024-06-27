#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	map<string,int> mp;
	while(t--){
		string usname;
		getline(cin,usname);
		if(mp.find(usname)== mp.end()) // xh 1 lần
			cout<<usname<<endl;
		else 
		   cout<<usname<<mp[usname]<<endl;

		mp[usname]++;
	}
	return 0;
}