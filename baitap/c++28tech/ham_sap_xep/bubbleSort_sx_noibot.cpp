#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	bubbleSort(a,n);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}