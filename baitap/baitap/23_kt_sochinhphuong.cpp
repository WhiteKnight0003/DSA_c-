// so chinh phuong trong doan
#include<bits/stdc++.h>
using namespace std;

int so_chinh_phuong(long long n){
	int s= sqrt(n) + 0.5 ; // tránh sai số
	if(1ll*s*s == n)
		return 1;
	return 0;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long a, b;
       cin>>a>>b;
       int cnt=0;
		for(int i=a;i<=b;i++)
			if(so_chinh_phuong(i))
				++cnt;
		cout<<cnt<<endl;
	}
	return 0;
}