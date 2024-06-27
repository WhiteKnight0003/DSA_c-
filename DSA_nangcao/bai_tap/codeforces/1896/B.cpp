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

int xuly(string s){
	int dem=0;
	vector<int> v;
	for(int i=0;i<s.size()-1;i++){
		if(s[i] == 'A' && s[i+1]=='B'){
			dem++;
			swap(s[i],s[i+1]);
			i=0;
		}
	}
	return dem;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		cout<<xuly(s)<<endl;
	}
	return 0;
}