#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll xuly(int n){
	if(n<=1)
		return 1;
	return n*xuly(n-1);
}
int main(){
	int n; cin>>n;
	cout<<xuly(n)<<endl;
}