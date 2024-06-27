#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];

void ql(int i, int j, string s){
	if(i==n-1 && j == n-1)
		cout<<s<<" ";

	if(i+1 <= n-1 && a[i+1][j]==1){
		ql(i+1,j,s+'D');
	}


	if(j+1 <= n-1 && a[i][j+1]==1){
		ql(i,j+1,s+'R');
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		ql(0,0,"");
		cout<<endl;
	}
}