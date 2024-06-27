#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// quick_sort lamuto
int patition_l(int a[], int l, int r){
	int i=l-1;
	int pivot = a[r];
	for(int j=l;j<=r;j++){
		if(a[j]<pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	return i;
}

void quick_sort_lamuto(int a[], int l, int r){
	if(l>=r) return ;
	int p = patition_l(a,l,r);
	quick_sort_lamuto(a,l,p-1);
	quick_sort_lamuto(a,p+1,r);
}


int partition_h(int a[], int l, int r){
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
		else break;
	}
	return j;
}

void quick_sort_hoare(int a[], int l, int r){
	if(l>=r) return ;
	int p=partition_h(a,l,r);
	quick_sort_hoare(a,l,p);
	quick_sort_hoare(a,p+1,r);
}

void mergesort(int a[], int b[], int m, int n){
	vector<int> c;
	int i=0;
	int j=0;
	while(i<m && j<n){
		if(a[i]<=b[j]){
			c.push_back(a[i]);
			++i;
		}
		else{
			c.push_back(b[j]);
			++j;
		}
	}
	while(i!=m){
		c.push_back(a[i]);
		++i;
	}
	while(j!=n){
		c.push_back(b[j]);
		++j;
	}
	
	for(auto x: c)
		cout<<x<<" ";
}

void heapify(int a[], int i, int n){
	int l= 2*i+1;
	int r = 2*i+2;
	int largest = i;
	if(l<n && a[l] > a[largest])
		largest = l;
	if(r<n && a[r]> a[largest])
		largest=r;
	if(largest!=i){
		swap(a[i],a[largest]);
		heapify(a,largest,n);
	}
}

void heapsort(int a[], int n){
	for(int i= (int)n/2 -1;i>=0;i--)
		heapify(a,i,n);
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heapify(a,0,i);
	}
}
int main(){
	fast;
	int n;
	cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	heapsort(a,n);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}