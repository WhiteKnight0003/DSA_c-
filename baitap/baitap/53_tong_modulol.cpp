#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int n, int k){ // O(n)
	int sum =0; 
	for(int i=1;i<=n;i++)
		sum+=i%k;
	return sum;
}

// ví dụ n = 10 k =3
// với 1 2 3 4 5 6 7 8 9 10
//     1 2 0 1 2 0 1 2 0 1
// tính n/ k để ra số cụm 
// suy ra kq = sum( 1 đến n-1) *số cụm + phần dư

int solve2( ll n, int k){
	int x= n/k;
	int r= n%k;
	ll tong1= (k-1)*k/2; // tổng từ 1 -> k-1
	ll tong2=r*(r+1)/2; // tổng từ 1 -> n 
	return tong1*x+tong2;
} 
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<solve2(n,k)<<endl;
	}
	return 0;
}