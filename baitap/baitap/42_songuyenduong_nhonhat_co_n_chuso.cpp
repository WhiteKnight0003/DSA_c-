#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// dùng vs số nhỏ
ll solve( int x, int y, int z , int n ){
	for(ll i= pow(10, n-1) ; i<pow(10, n); i++)
		if(i%x ==0 && i%y ==0 && i%z==0)
			return i;
	return -1;
}

// n chữ số = 10 ^(n-1)
// dùng cho số lớn
ll lcm(int x, int y, int z, int n){
	ll a= 1ll*x*y/ __gcd(x,y);
	ll b=z;
	ll temp = a*b/__gcd(a,b); // bcnn

	// ct của số nhỏ nhất chia hết cho temp là : 
	// ví dụ x>=14 và x%6==0  => x= int (14+6-1)/6 *6 
	// tức x = int ((pow(10,n-1))+temp-1)/ temp *temp

	ll kq = ((ll)((pow(10,n-1) + temp-1)/temp)) *temp;
	return kq;
}
int main(){
	int x,y,z;
	ll n;
	cin>>x>>y>>z>>n;
	cout<<lcm(x,y,z,n)<<endl;
	return 0;
}