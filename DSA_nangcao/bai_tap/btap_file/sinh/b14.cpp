#include<bits/stdc++.h>
using namespace std;

int n,k, x[100], res[100];
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void ktao(){
	for(int i=1;i<=k;i++){
		cin>>x[i];
		res[i] = x[i];
	}
}

void sinh(){
	int i=k;
	while(i>=1 && x[i]==n-k+i){
		--i;
	}
	if(i==0){
		for(int i=1;i<=k;i++)
			x[i]=0;
			
		check=false;
	}
	else {
		x[i]++;
		for(int j=i+1;j<=k;j++)
			x[j]=x[j-1]+1;
	}
}

int resss(){
	int dem=0;
	int i=1;
	int j=1;
	while(i<=k && j<=k){
		if(x[i]<res[j])
			++i;
		if(x[i]>res[j])
			++j;
		if(x[i]==res[j]){
			++dem;
			++i;
			++j;
		}
	}
	return dem;
}
int main(){
	fast;
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ktao();
		sinh();
		cout<<k-resss()<<endl;
	}
	return 0;
}