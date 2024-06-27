#include<bits/stdc++.h>
using namespace std;

// làm tbhg
void sum1(int a[], int n, int k){
	long long res= -1e9;
	int idx;
	for(int i=0;i<n-k;i++){
		long long sum=0;
		for(int j=0;j<k;j++)
			sum+=a[i+j];
		if(sum>res){
		res=sum;
		idx =i;
	}
	}
	
	cout<<res<<endl;
	for(int i=0;i<k;i++)
		cout<<a[i+idx]<<" ";

}

// kỹ thuật cửa sổ trượt 
/* ví dụ 1 2 4 4 8 1  k=3
của sổ đầu = 1+2+4 = 7 
cứa sổ 2 =    7         - 1+4  
           sum cửa sổ 1 - phần tử bị loại ra + phần tử đc thêm vào    */
int sum(int a[], int n, int k){
	long long res =0; // lưu cửa sổ đầu tiên có k phần tử
	long long idx=0, sum=0;
	for(int i=0;i<k;i++)
		sum+=a[i];
	res=sum;
	for(int i=1;i<=n-k;i++){ //hay n-k+1
		sum+= -a[i-1] +a[i-1+k]; // trừ phần tử đầu + phần tử mới thêm vào
		if(sum>res)
			res=sum;
	}
	return sum;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n];
	for(auto &x: a)
		cin>>x;
   cout<< sum(a,n,k);
}