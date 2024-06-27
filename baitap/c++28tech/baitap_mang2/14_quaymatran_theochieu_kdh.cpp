#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin>>m>>n;
	int a[m][n];
	int h1=0,h2=m-1,c1=0,c2=n-1;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	while(h1<h2 && c1<c2){
		int pre=a[h1+1][c1];// lấy gt từ hàng 1 cột 0
		for(int i=c1;i<=c2;i++){
			int cur =a[h1][i];
			a[h1][i]=pre;
			pre=cur;
		}
		++h1;

		for(int i=h1;i<=h2;i++){
			int cur = a[i][c2];
			a[i][c2]=pre;
			pre=cur;
		}
		--c2;
		if(h1<=h2){
			for(int i=c2 ; i>=c1;i--){
				int cur = a[h2][i];
			    a[h2][i]=pre;
			    pre=cur;
			}
			--h2;
		}
	
		if(c1<=c2){
		for(int i=h1;i<=h2;i++){
			int cur = a[i][c1];
			a[i][c1]=pre;
			pre=cur;
		}
		++c1;
	  }
	}

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
	return 0;
}