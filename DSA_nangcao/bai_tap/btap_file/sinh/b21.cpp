#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;cin.ignore();
	string s; getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	string kq;
	while(ss>>kq){
		v.push_back(kq);
	}
	sort(v.begin(),v.end());
	do{
		for(auto x: v)
			cout<<x<<" ";
		cout<<endl;
	}while(next_permutation(v.begin(),v.end()));
	return 0;
}