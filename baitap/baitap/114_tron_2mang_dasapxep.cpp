#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>n>>m;
	int a[n], b[m];
	int i=0,j=0,d=0,c[m+n];
	for(auto &x: a)
		cin>>x;
	for(auto &x: b)
		cin>>x;
	while(i<n && j<m){
		if(a[i]<b[j]){
			c[d++] = a[i];
			++i;
		}
		else{
			c[d++]=b[j];
			++j;
		}
	}
	while(i<n)
		c[d++]=a[i++];
	while(j<m)
		c[d++]=b[j++];
	for(int i=0;i<n+m;i++)
		cout<<c[i]<<" ";
	return 0;
}