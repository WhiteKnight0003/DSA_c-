#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r){
	int pivot = a[l];
	int i=l-1;
	int j=r+1;
	while(true){
		do{
			i++;
		}while(a[i]<pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j){
			swap(a[i],a[j]);
		}
		return j;
	}
}

void quick_sort(int a[], int l, int r){
	if(l>=r) return ;
	else {
		int p = partition(a,l,r);
		quick_sort(a,l,p);
		quick_sort(a,p+1,r);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	quick_sort(a,0,n-1);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}