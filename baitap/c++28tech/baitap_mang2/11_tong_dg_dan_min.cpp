// chỉ đc di chuyển sang phải or thẳng xuóng
// 1 3 1                       1 4 5
// 1 5 1              cộng  -> 2 7 6
// 4 2 1 => 1 3 1 1 1          6 8 7
// 7 = 5+2 // xem ô trên và cạnh trái xem ô nào nhỏ hơn thì cộng
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; 
	while(t--){
	int m,n; cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int dp[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(i==0 && j==0 )
				dp[i][j] = a[i][j];
			else if(j==0)
				dp[i][j] =dp[i-1][j]+a[i][j];
			else if(i==0)
				dp[i][j] =dp[i][j-1]+a[i][j];
			else 
				dp[i][j] =min(dp[i-1][j],dp[i][j-1]) +a[i][j];// min ô trên và ô cạnh trái 
		}
		 cout<<dp[m-1][n-1]<<endl;
   } 

   return 0;
}