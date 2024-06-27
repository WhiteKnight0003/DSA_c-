#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	int res=0, cnt=0,b[n],dem=1;

	for(int i=1;i<n;i++){
		if(a[i]>a[i-1])
			++dem;
		else dem =1; 

		if(dem>res){
			res=dem;
			b[0] = i-res+1;
			cnt=1;
		}
		else if(dem==res){
			b[cnt] = i-res+1;
			++cnt; // tăng số lượng dãy con
		}
	}
	cout<<res<<endl;
	for(int i=0;i<cnt;i++){
		for(int j=0;j<res;j++)
			cout<<a[b[i]+j]<<" ";
		cout<<endl;
	}
	return 0;
}