// ví dụ 1234 %5 = (((12%5)*10+3)%5)*10+4
#include<bits/stdc++.h>
using namespace std;

int solve(char n[], long long m){
	long long res =0;
	for(int i=0;i<strlen(n);i++)
		res = (res*10 +n[i]-'0')%m;
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		char c[1002];
		long long n;
		cin>>c>>n;
		cout<<solve(c,n)<<endl;
	}
}