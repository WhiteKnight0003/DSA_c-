#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define endl "\n"
#define se second
#define fi first
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define ll long long

int uocso(int a){
	int ans=0;
	int k=a;
	for(int i=2;i<=sqrt(a);i++){
		if(k%i==0){
			while(k%i==0){
				k/=i;
			}
			ans++;
		}
	}
	if(k>1)
		ans++;
	return ans;
}
bool stnghich(int n){
	int k=n;
	int num=0;
	while(k){
				num*=10;
		num+=k%10;
		k/=10;
	}
	if(n == num)
		return true;
	return false;
}
int main(){
	fast;
	int a,b;cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(stnghich(i) && uocso(i) >= 3)
			cout<<i<<" ";
	}
	return 0;
}