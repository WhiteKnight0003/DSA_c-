#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int find(int n){
	for(int i=2;i<=n;i++)
		if(n%i==0)
			return i; // chỉ in ra 1 lần
	return 0;
}

void solve(ll n, int k){
	for(int i=1;i<=k; i++)
		n= n+find(n);
	cout<<n<<endl;
}

// kq bài toán 
// n chẵn n = n+ k*2
// n lẻ : lần đầu n + f(n) ra số lẻ => kq = n+ ước nguyên dương lẻ nn của n + 2*(k-1 )
int find2(int n){
	for(int i=3; i<=n; i+=2)
		if(n%i==0)
			return i;
	return 0;
}

void solve2(ll n, int k){
	if(n%2==0)
		cout<<n+2*1ll*k<<endl;
	else 
	    cout<<n+find2(n)+2*1ll*(k+1)<<endl;
}
int main(){
	ll n ;
	int  k;
	cin>>n>>k;
	solve(n, k);
	return 0;
}