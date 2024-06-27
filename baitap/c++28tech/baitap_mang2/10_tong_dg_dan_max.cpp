// chỉ dc di chuyển chéo or thẳng xuống
// 10 10 2 0  20 4
// 1  0  0 30 2  5
// 0  10 4 0  2  0
// 1  0  2 20 0  4  => 20+ 30 +4+ 20 
// // dùng 1 mảng dp[i][j] lưu sum
// cộng hàng dưới vs hàng trên r lấy gt lon nhat cộng tiếp

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];

	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0)
				a[i][j] += max(a[i-1][j], a[i-1][j+1]);
			else if(j==n-1)
				  a[i][j] += max(a[i-1][j-1],a[i-1][j]);
			else a[i][j] += max(a[i-1][j-1],max(a[i-1][i], a[i-1][j+1]));
		}
	}
	cout<<*max_element(a[m-1],a[m-1]+n) <<endl;
}