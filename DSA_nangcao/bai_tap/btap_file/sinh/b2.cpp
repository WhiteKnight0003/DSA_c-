#include<bits/stdc++.h>
using namespace std;

int n, k,x[1000];
void ktao(){
	for(int i=1;i<=k;i++){
		cin>>x[i];
	}
}
void sinh(){
	int i=k;
	while(i>=1 && x[i]==n-k+i){
		--i;
	}
	if(i==0){
		for(int i=1;i<=k;i++)
			x[i]=i;
	}
	else{
		x[i]++;
		for(int j=i+1;j<=k;j++)
			x[j]=x[j-1]+1;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		ktao();
		sinh();
		for(int i=1;i<=k;i++)
			cout<<x[i]<<" ";
		cout<<endl;
	}
	return 0;
}