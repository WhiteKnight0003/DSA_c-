#include<bits/stdc++.h>
using namespace std;

int n, x[100], res[100], ok;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
	fast;
	int t; cin>>t; cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string res;
		res+=s[0];
		for(int i=1;i<s.size();i++){
			int k = (s[i]-'0')^(s[i-1]-'0');
			res += to_string(k);
		}
		for(auto x: res){
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}