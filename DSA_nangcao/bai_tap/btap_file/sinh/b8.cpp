#include<bits/stdc++.h>
using namespace std;

int n,k, x[100];
bool check;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void ktao(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		--i;
	}
	if(i==0){
		check=false;
	}
	else x[i]=1;
}
int main(){
	fast;
	int t; cin>>t; 
	while(t--){
		cin>>n>>k;
		check=true;
		while(check){
			int dem=0;
			for(int i=1;i<=n;i++){
				if(x[i]==1)
					dem++;
			}
			if(dem==k){
				for(int i=1;i<=n;i++){
					cout<<x[i];
				}
				cout<<endl;
			}
			sinh();
		}
	}
	return 0;
}