// cong thuc legendre
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define For(i,a,b) for(int i=a;i<=b;i++)

int tinh(int n,int p){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(n>pow(p,i)){
			sum+=int(n/pow(p,i));
		}
	}
	return sum;
}

int main(){
	fast;
	int q; cin>>q;
	while(q--){
		int n,q; cin>>n>>q;
		cout<<tinh(n,q)<<endl;
	}
	return 0;
}
