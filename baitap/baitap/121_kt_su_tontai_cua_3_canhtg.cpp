#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n){
	for(int i=n-1;i>=2;i--){
	int l=0,  r=i-1;
	while(l<r){
		if(a[l]+a[r]==a[i])
			return 1;
		else if(a[l]+a[r]<a[i]) ++l;
		else --r;
	}
    }
	return 0;
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a){
		cin>>x;
		x*=x;
	}
	sort(a,a+n);
	if(check(a,n)) 
		cout<<"YES";
	else cout<<"NO";
	return 0;
}