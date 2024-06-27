#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int  x[100], ok;

void ktao(int n){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(int n){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0)
		ok=false;
	else x[i]=1;
}

bool dx(int n){
	int k=n/2;
	for(int i=1;i<=k;i++){
		if(x[i] != x[n-i+1])
			return false;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int num=2;
		while(num<=n){
			ktao(num);
			ok=true;
			while(ok){
				if(dx(num)){
					for(int i=1;i<=num;i++){
						cout<<x[i];
					}
					cout<<" ";
				}
				sinh(num);
			}
			num+=2;
		}
	}
	return 0;
}