#include<bits/stdc++.h>
using namespace std;

int cnt[1000002];
int main(){
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		memset(cnt,0,sizeof(cnt));
		int a[n];
		for(auto &x: a){
			cin>>x;
			cnt[x]=1;
		}
		sort(a,a+n);
		
		int ans=0;
		int l= a[0], r=a[n-1];
		for(int i= l; i<=r;i++)
			if(cnt[i] ==0){
				++ans;
			}
		cout<<ans<<endl;
		
	}
	return 0;
}