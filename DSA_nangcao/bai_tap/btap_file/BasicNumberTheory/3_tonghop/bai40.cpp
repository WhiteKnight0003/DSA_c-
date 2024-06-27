#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define se second
#define fi first

/*
bool xuly(string s){
	if(((s[0]-'0')*2 == s[s.size()-1]-'0')|| (s[0]-'0') == (s[s.size()-1]-'0')*2)
		return true;
	return false;
}

bool xu(string s){
	for(int i=1;i<=s.size()-2;i++)
		if(s[i]-'0' != s[s.size()-2-(i-1)]-'0')
			return false;
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(xuly(s) && xu(s))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
*/
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(xuly(s) && xu(s))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}