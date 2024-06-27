#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int sumcc=0;
	int sumcp=0;

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(i==j) 
				sumcc+=a[i][j];
			else if(i+j==n-1)
			  sumcp+=a[i][j];
		}

	int max_val =-1e9;
	for(int i=0;i<n;i++){
		int hieu=sumcc-sumcp;
		for(int j=0;j<n;j++){
			max_val=max(max_val,hieu);
			if(i==j)
				sumcc-=a[i][j];
			else if(i+j==n-1)
				  sumcp-=a[i][j];
		}
	}
	cout<<max_val<<endl;
	return 0;
}

