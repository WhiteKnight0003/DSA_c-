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

int p[1000001];

void sang(){
	for(int i=1;i<=1000000;i++)
		p[i]=i;
	for(int i=2;i<=1000000;i++)
		if(p[i]==i){
			p[i]=i-1;
			for(int j=2*i;j<=1000000;j+=i)
				p[j] -= p[j]/i;
		}
}
int main(){
	sang();
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<p[n]<<endl;
	}
	return 0;
}