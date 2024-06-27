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
	int cnt=0;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(__gcd(a[i],a[j])==1)
				++cnt;
	cout<<cnt;
	return 0;
}