#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(auto &x: a){
			cin>>x;
		}
		vector<int> b(a,a+n);
		sort(b.begin(),b.end());
		bool ok = true;
		for(int i=0;i<n;i++){
			if(a[i] != b[i] && a[i] != b[n-i-1]){//k đúng vị trí và k thể lật 
				cout<<"NO\n";
				ok=false;
				break;
			} 
		}
		if(ok) cout<<"YES\n";
	}
	return 0;
}