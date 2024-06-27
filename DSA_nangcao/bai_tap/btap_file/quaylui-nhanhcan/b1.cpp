#include<bits/stdc++.h>
using namespace std;

int n,k,s,ans=0;
int x[100];

void Try(int i){
	for(int j = x[i-1]+1 ; j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			int sum=0;
			for(int l =1;l<=k;l++){
				sum+=x[l];
			}
			if(sum==s)
				++ans;
		}
	  else Try(i+1);
	}
}

int main(){

	while(true){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0)
			break;
		ans=0;
		Try(1);
			cout<<ans<<endl;
	}
}