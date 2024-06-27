// tim so cac so nguyen to cung nhau voi n 

#include<bits/stdc++.h>
using namespace std;

// kq = n*(1-1/p)  - p là các snt
#define ll long long
ll kq(int n){
	int res=n;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0){
			while(n%i==0)
				n/=i;
			res-=res/i;
			// res = res*(1-1/i) => res - res/i tại (1-1/i) sẽ bị sai
		}
	if(n!=1)
		res-=res/n;
	return res;
}

int main(){
	int n; cin>>n;
	cout<<kq(n)<<endl;
	return 0;
}