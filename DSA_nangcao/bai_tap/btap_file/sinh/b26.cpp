#include<bits/stdc++.h>
using namespace  std;

int n, k, ok, a[100];
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void next(){
	int i=k;
	while(i>=1 && a[i] == n-k+ i){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin>>n>>k;
	vector<int> v;
	set<int> s;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		s.insert(x);
	}
	for(auto x: s){
		v.push_back(x);
	}
	n=v.size();
	ktao();
	ok=1;
	while(ok){
		for(int i=1;i<=k;i++){
			cout<<v[a[i]-1]<<" ";
		}
		cout<<endl;
		next();
	}
	return 0;
}