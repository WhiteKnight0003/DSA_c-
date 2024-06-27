// (a+b) mod m = ((a mod m) + (b mod m)) mod m
// (a-b) mod m = ((a mod m) - (b mod m)) mod m
// (a*b) mod m = ((a mod m) * (b mod m)) mod m
// (a^b) mod m = ( (a mod m)^b ) mod m


// ví dụ tính số dư của tích cacs phần tử trong mảng vs 10^9 +7

#include<bits/stdc++.h>
using namespace std;

const int mod = (int) 1e9+7;
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	int ans=1;
	for(int i=0;i<n;i++){
		ans*=( a[i] %mod);
		ans %= mod; // phải chia dư kq luôn
	}
	cout<<ans<<endl;
	return 0;
}