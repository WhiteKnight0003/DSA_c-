#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define se second
#define fi first

bool prime(int n){
	if(n<2)
		return false;
	for(int i=2;i<= sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

ll kq(int n){
	ll res=1;
	for(int i=2;i<=n;i++){
		int k=1;
		int dem=0;
		if(prime(i)){
			while(n >= pow(i,k)){
				dem+=n/pow(i,k);
				k++;
			}
		}
		res*=(dem+1);
	}
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<kq(n)<<endl;
	}
	return 0;
}