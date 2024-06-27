#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	stable_sort(a,a+n);
	cout<<a[1]-a[0]<<endl;
	return 0;
}