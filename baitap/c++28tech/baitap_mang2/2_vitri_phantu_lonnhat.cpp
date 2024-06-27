#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; 
	while(t--){
	int m,n; cin>>m>>n;
	int a[m][n];
	int max_val=-1e9;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];

	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			max_val = max(max_val,a[i][j]);
	cout<<max_val<<endl;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(max_val == a[i][j])
				cout<<"Vi tri xuat hien : A["<<i<<"]"<<"["<<j<<"]"<<endl;
     }
return 0;
}