#include<bits/stdc++.h>
using namespace std;
typedef long long ll;;
ll lcm(int p, int n){
	ll ans= 1ll*p*n/ __gcd(p,n);
	return ans;
}
ll lcmsum1(int n){
	int sum=0;
	for(int i=1; i<=n;i++)
		sum+=lcm(i,n);
	return sum;
}

// code 2
// dùng phi hàm eluer
// kq bài toán = (W(d*Q(d)) +1)*n/2
// ví dụ n =6  kq = (1*Q(1) + 2*q(2) + 3*q(3) +6*q(6) +1) *6 /2
// w : tổng xích ma
// Q : ct của phi hàm eluer

ll p[1000001];
ll res[1000001];

void sieve(){
	for(int i=1; i<=1000000;i++)
		p[i]=i;
	for(int i=2; i<=1000000;i++)
		if(p[i]==i){
			p[i]=i-1;
			for(int j= i*2; j<=1000001; j+=i)
				p[j] = p[j] - p[j]/i;
		}
}

void sieve2(){
	for(int i=1;i<=1000000;i++)
		for(int j=i;j<=1000000;j+=i)
			res[j]+=1ll*i*p[i];
}
int main(){
	int t; cin>>t;
	sieve();
	sieve2();
	while(t--){
		int n; cin>>n;
		//cout<<lcmsum1(n)<<endl;
		cout<<1ll*(res[n]+1)*n/2 <<endl;
	}
	return 0;
}