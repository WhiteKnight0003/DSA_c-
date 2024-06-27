#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
	int s,d;
	cin>>s>>d;
	if(s>d*9){
		cout<<"-1"<<endl;
	}

	int res[d];
	--s; // giam di 1 don vi truoc
	for(int i=d-1;i>=0;i--){
		if(s>=9){
			res[i]=9;
			s-=9;
		}
		else{
			res[i]=s;
			s=0;
		}
	}
	res[0]+=1; // tra 1 don vi ve  dau
	for(int i=0;i<d;i++){
		cout<<res[i];
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}