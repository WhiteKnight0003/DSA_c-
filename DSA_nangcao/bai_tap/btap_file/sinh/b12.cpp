#include<bits/stdc++.h>
using namespace std;

int n, x[100], res[100], ok;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// đổi mã gray về mã nhị phân 
// res = x[i] ^ x[i-1] => x[i] = res[i] ^ x[i-1]
int main(){
	fast;
	int t; cin>>t; cin.ignore();
	while(t--){
		string res;
		getline(cin,res);
		string s;
		s+=res[0];
		for(unsigned int i=1;i<res.size();i++){
			//int k = ;
			s+= to_string((s[i-1]-'0')^(res[i]-'0'));
		}
		for(auto x: s){
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}