#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
	for(int i=0;i<n-1;i++)
		if(a[i+1]!=a[i]+1)
			return false;
	return true;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(check(a,n))
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}