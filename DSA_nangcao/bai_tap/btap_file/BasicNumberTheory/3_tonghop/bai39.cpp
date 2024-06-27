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

void kq(string s){
	for(int i=0;i<=s.size()-1;i++){
		if(s[i]-'0' ==0 && s[i+1]-'0' ==8 && s[i+2]-'0' ==4){
			// s.erase(s.begin()+ (i+2));
			// s.erase(s.begin()+(i+1));
			// s.erase(s.begin()+i);
			s.erase(s.begin()+i,s.begin()+(i+3));
			break;
		}
	}
	cout<<s<<endl;;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		kq(s);
	}
	return 0;
}
