// xem xem trong n! có bn lần xh của các snt 
#include<bits/stdc++.h>
using namespace std;

// ct legre tính số ước 1 số x = n/p + n/p*p +... với p là số lần xh
// tìm số mũ của 1 ước nguyên tố 
int degree(int n, int p){ // dùng ct legre
	int ans=0;
	for(int i=p; i<=n; i*=p)
		ans+=n/i;
	return ans;
}
// sàng snt
int nt(int n){
	for(int i=2;i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return n>1;
}
// số ước
int countdivision(int  n){
	long long res =1; 
	for(int i=1; i<=n ;i++) // i là 1 ước nguyên tố 
		if(nt(i))
			res*=(degree(n,i)+1);  // tính số ước
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n ; cin>>n;
		cout<<countdivision(n)<<endl;
	}
	return 0;
}