#include<bits/stdc++.h>
using namespace std;

long long find(char a[],long long b){
	long long res =0;
	for(int i=0;i<strlen(a);i++)
		res=(res*10 +a[i] -'0')%b;
	return res;
}

long long powMod(long long a,long long b, long long m){
	long long res =1;
	while(b){
		if(b%2==1){
			res *=a;
			res %=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		char a[1001];
		long long b,m ;
		cin>>a>>b>>m;
		long long du= find(a,m);
		cout<<powMod(du,b,m)<<endl;
	}
	return 0;
}