// ví dụ
// 2 3 10 6 4 8 1
// 2 2 2  4 2 2 1
//   1 8  2 2 6
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_val=a[0] , res=-1e9;
		for(int i=1;i<n;i++){
			if(a[i]>min_val)
				res=max(res,a[i]-min_val);
			min_val=min(a[i],min_val);
		}
		if(res==-1e9)
			cout<<"-1"<<endl;
		else cout<<res<<endl;
	}
	return 0;
}