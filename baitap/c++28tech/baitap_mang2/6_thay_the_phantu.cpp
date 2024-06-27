// thay thế 1 ô = tổng 8 ô xung quanh + nó
// 1 2 3      12 21 16
// 4 5 6  ->  27 45 33
// 7 8 9      24 39 28
// lưu chỉ số thay đổi vào 2 mảng i và j
// i-1    i-1     i-1          j-1  j  j+1
// i       i       i           j-1  j  j+1
// i+1    i+1     i+1          j-1  j  j+1
// {-1 0 1 -1 0 1 -1 0 1}
// {-1 -1 -1 0 0 0 1 1 1 }

#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1, 0, 1, -1, 1, -1, 0, 1}; //i
int dy[8]={-1, -1, -1, 0, 0, 1, 1, 1}; //j
//i + dx[0]
//j + dy[0]
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];

		int res[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int sum=a[i][j]; 
				for(int k=0;k<8;k++){
					int imoi=i+dx[k];
					int jmoi=j+dy[k];
					if(imoi>=0 && imoi<n && jmoi>=0 && jmoi<n)
						sum+=a[imoi][jmoi];
				}
				res[i][j]=sum;
			}
		}	

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<res[i][j]<<" ";
			cout<<endl;
	}	
	}
	
	return 0;
}