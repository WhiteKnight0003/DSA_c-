#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<a[0]<<" ";
	for(int i=1;i<n;i++)
		if(a[i]>a[i-1])
			cout<<a[i]<<" ";
	return 0;
}
*/

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>=max)
			cout<<a[i]<<" ";
		if(a[i]>max) max=a[i];
	}
	return 0;
	// ví dụ 1 4 8 2 9 5 -> 1 4 8 9 
}