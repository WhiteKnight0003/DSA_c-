// dãy con liên túc các phân tử trùng nhau dài nhất

#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int res=1,dem=1;
		for(int i=1;i<n;i++){
			if(a[i] == a[i-1])
				++dem;
			else dem=1;
			res=max(res,dem);
		}
		cout<<n-res<<endl;
	}
	return 0;
}