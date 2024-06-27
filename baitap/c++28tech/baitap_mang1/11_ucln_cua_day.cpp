
#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
void soive(int n){
	for(int i=1;i<sqrt(n);i++){
		if(n%i==0){
			mp[i]++;
			if(i != n/i ) mp[n/i]++;  
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			soive(a[i]);
		}
		int max_val=1;
		for(auto x: mp)
			if(x.second>=2)
				max_val=x.first;
		cout<<max_val<<endl;
	}
	return 0;
}