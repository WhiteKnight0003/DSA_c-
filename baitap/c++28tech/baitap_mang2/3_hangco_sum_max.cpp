#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t; 
	while(t--){
	int m,n; cin>>m>>n;
	int a[m][n];
	long long max_sum=-1e9;
	vector<int> row; // lưu các hàng có sum max
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];

	for(int i=1;i<=m;i++){
		long long sum=0;
		for(int j=1;j<=n;j++)
			sum+=a[i][j];
		if(sum>max_sum){
			max_sum=sum;
			row.clear();  // ví dụ có 3 thg có cùng tổng 20
			// nếu có 1 tổng =25 thì xóa hết và thêm vào
			row.push_back(i);
		} else if(sum==max_sum)
		     row.push_back(i);
	}
	cout<<max_sum<<endl;
	
	for(auto x: row)
		cout<<x<<" ";
	cout<<endl;
     }
return 0;
}