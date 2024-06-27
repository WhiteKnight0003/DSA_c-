
#include<bits/stdc++.h>
using namespace std;
const int maxn=1000000;
int a[maxn],n;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int res =0;
		for(int i=0;i<n;i++)
			res=__gcd(res,a[i]);

		int ans =0;
		for(int i=1;i<=sqrt(res);i++)
			if(res%i==0){
				++ans;
				if(i != res/i) ++ans;
			}
		cout<<ans-1<<endl;
	}
	return 0;
}