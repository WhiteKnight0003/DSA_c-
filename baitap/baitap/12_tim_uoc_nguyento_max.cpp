#include<bits/stdc++.h>
using namespace std;

int analysis(int n){
	int res=0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			while(n%i==0){
				n/=i;
			}
	if(n!=1)
		res=n; // số cuối cùng là snt max
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<analysis(n)<<endl;
	}
	return 0;
}

