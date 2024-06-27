#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int n, x[100];
bool ok;

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=0 &&  x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0)
		ok=false;
	else x[i]=1;
}

bool check(){
	int k=n/2;
	for(int i=1;i<=k;i++){
		if(x[i] != x[n-i+1])
			return false;
	}
	return true;
}

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		cin>>n;
		ktao();
		ok=true;
		while(ok){
			if(check()){
				for(int i=1;i<=n;i++){
					cout<<x[i];
				}
				cout<<" ";
			}
			sinh(); 
		}
		cout<<endl;
	}
	return 0;
}