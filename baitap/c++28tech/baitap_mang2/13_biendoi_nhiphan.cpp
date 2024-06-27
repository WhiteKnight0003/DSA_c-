// cho ma trận chỉ toàn 0 và 1 
// nếu bằng 1 thì hàng và cột của nó bằng 1 hết
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin>>m>>n;
	int a[m][n],b[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]= a[i][j];
		}

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]){
				for(int k=0;k<m;k++)
					b[k][j]=1;
				for(int k=0;k<n;k++)
					b[i][k]=1;
			}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}