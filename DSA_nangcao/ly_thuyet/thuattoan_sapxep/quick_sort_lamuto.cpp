#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r){
	int i=l-1;
	int pivot = a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);// đổi chỗ để pivot ra giữa
	return i; // trả về vị trí ở giữa
}

void quick_sort(int a[], int l, int r){
	if(l>=r) return ; // dừng khi nào
    int pivot = partition(a,l,r);
	quick_sort(a,l,pivot-1);
	quick_sort(a,pivot+1,r);
}
int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	quick_sort(a,0,n-1);
	for(auto x: a){
		cout<<x<<" ";
	}
	return 0;
}