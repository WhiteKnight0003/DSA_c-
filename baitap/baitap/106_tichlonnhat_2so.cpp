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
	/*
	int max=-1e9;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]*a[j]>max)
				max= a[i]*a[j];
	cout<<max;
	*/

	sort(a,a+n);
	cout<<a[n-1]*a[n-2];
	return 0;
}