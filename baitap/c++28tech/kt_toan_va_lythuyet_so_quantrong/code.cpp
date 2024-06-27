#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL);
	int n,k; cin>>n>>k;
	long int a[n];
	long int ans[n+1] ={};
		ans[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans[i]=ans[i-1]+a[i];
	}
	
	while(k--){
		int l,  r;
		cin>>l>>r;
		cout<<ans[r]-ans[l-1]<<endl;
	}
	return 0;
}