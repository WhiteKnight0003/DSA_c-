#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int  x[100000], ok;

void ktao(int n){
	for(int i=1;i<=n;i++){
		x[i]=6;
	}
}

void sinh(int n){
	int i=n;
	while(i>=1 && x[i]==8){
		x[i]=6;
		--i;
	}
	if(i==0)
		ok=false;
	else x[i]=8;
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
		int num =2;
		int dem=0;
		bool dk = true;
		while(dk){
			ktao(num);
			ok = true;
			while(ok){
				if(dx(num)){
					for(int i=1;i<=num;i++)
						cout<<x[i];
					cout<<" ";
					++dem;
					if(dem==n){
						dk=false;
						break;
					}
				}
				sinh(num);
			}
			num+=2;
		}
		cout<<endl;
	}
	return 0;
}