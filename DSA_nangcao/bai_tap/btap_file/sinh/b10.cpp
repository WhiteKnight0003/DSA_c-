#include<bits/stdc++.h>
using namespace std;

int n, x[100], res[100], ok;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i] = 0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else {
		x[i]=1;
	}
	res[1]=x[1];
	for(int i=2;i<=n;i++){
		res[i] = x[i] ^ x[i-1];
	}
}


int main(){
	fast;
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=1;
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<res[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<endl;
	}
	return 0;
}