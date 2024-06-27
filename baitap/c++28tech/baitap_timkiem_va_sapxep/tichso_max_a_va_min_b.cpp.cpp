#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int m, n;
		cin>>m>>n;
		int a[m],b[n];
		for(auto &x: a)
			cin>>x;
		sort(a,a+m);

		for(auto &x: b)
			cin>>x;
		sort(b,b+n);
	
		int i=0,j=0;

		vector<int> s;
		while(i<m && j<n){
			if(a[i]<b[j]){
				s.push_back(a[i]);
				++i;
			}
			else {
				s.push_back(b[j]);
				++j;
			}
		}

		while(i<m){
			s.push_back(a[i]);
			++i;
		}

		while(j<n){
			s.push_back(b[j]);
			++j;
		}

	for(auto x: s)
		cout<<x<<" ";
	}
	return 0;
}