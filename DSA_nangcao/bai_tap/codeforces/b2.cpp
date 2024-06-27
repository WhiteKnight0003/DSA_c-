#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

bool tangdan(vector<int> &a){
	for(int i=0;i<a.size()-1;i++)
		if(a[i]>a[i+1])
			return false;
	return true;
}
void xuly(int n,vector<int> & a){
	if(tangdan(a))
		cout<<"0"<<endl;
	int i=0;
	// a[l] a[a.size()-1] laf moocs gia tri
	// 1 n-2
	while(!tangdan(a) && i!= a.size()-1){
		if(a[i]> a[i+1]){
			a.insert(a.begin()+(i+1),1);
			a.insert(a.begin()+(i+2),a[i]-1);
			a.erase(a.begin()+i);
			i--;
		}
		if()
		i++;
	}
	for(auto x: a)
		cout<<x<<" ";
	cout<<endl;

}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(auto &x: v)
			cin>>x;
		xuly(n,v);
	}
	return 0;
}