#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long
const int  nmax = 93;
ll f[nmax];

void fibo(){
	f[0]=0;
	f[1] =1;
	for(int i=2;i<=92;i++){
	  f[i] = f[i-1]+f[i-2];
    }
}

int main(){
	fast;
	fibo();
	int n;cin>>n;
	for(int i=1;i<n;i++)
		cout<<f[i]<<" ";
	return 0;
}