#include<bits/stdc++.h>
using namespace std;

int n,m ,a[105][105];
int res;

void inp(){
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}

void Try(int i, int j){
	if(i==m-1 && j ==n-1){
		++res;
		return ;
	}
	if(i+1 <=m-1){
		Try(i+1,j);
	}
	if(j+1 <=n-1){
		Try(i,j+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		inp();
		res=0;
		Try(0,0);
		cout<<res<<endl;
	}
}