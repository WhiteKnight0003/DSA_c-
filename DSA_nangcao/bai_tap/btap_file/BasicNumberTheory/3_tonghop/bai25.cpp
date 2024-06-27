#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int xuly(int n, int k){
	int num=n;
	int j=0;
	for(int i=2;i<=sqrt(n);i++){
		if(num%i==0){
			while(num%i==0){
				j++;
				if(j==k){
					return i;
					break;
				}
				num/=i;
			}
		}
	}
	if(num!=1){
		j++;
		if(j==k){
			return num;
		}
	}
	return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		cout<<xuly(n,k)<<endl;
	}
}