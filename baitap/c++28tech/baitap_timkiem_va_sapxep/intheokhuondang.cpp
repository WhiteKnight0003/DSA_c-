// int mảng theo kiểu số lớn nhất số nhỏ nhất số lớn 2 số nhỏ 2
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	sort(a,a+n);
	int l=0;int r=n-1;
	while(l<=r){
		if(l==r){
			cout<<a[l];
			break;
		}
		else {
			cout<<a[r]<<" "<<a[l]<<" ";
			++l;
			--r;
	     }
    }
}
	return 0;
}
