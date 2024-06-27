#include<bits/stdc++.h>
using namespace std;

int count(map<int,int> &A, int n){
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		A[x]++;
	}
	int ans=0;
	for(auto x: A)
		if(x.second>=2)
			ans+=x.second;
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	map<int,int> a;
	cout<<count(a,n)<<endl;
}
	return 0;
}