#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n==0 || n==1)
		return false ;
	for(int i=2;i<sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		int m,n; cin>>m>>n;
		int a[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];

		map<int,int> mp;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if(prime(a[i][j]) && mp[a[i][j]] ==0 ){ // chưa gặp nó lần nào
				    cout<<a[i][j]<<" ";
					mp[a[i][j]]=1;
				}
		cout<<endl;
	}
	return 0;
}