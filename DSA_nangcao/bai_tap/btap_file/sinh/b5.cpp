#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n,k, x[100];
bool ok;

void ktao(){
	for(int i=1;i<=k;i++){
		x[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>=1 && x[i]==n-k+i){
		--i;
	}
	if(i==0){
		ok = false;
	}
	else{
		x[i]++;
		for(int j=i+1;j<=k;j++)
			x[j]=x[j-1]+1;
	}
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ktao();
		ok = true;
		while(ok){
			for(int i=1;i<=k;i++){
				cout<<x[i];
			}
			sinh();
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}