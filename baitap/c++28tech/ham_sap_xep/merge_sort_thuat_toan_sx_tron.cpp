// độ phức tạp O(nlogn)
// dùng chia để chị
//  6 5 12 10 9 1
//  6 5 12        10 9 1
//  6   5 12   10   9 1
//  6  5 12    10  1 9
//  5 6 12   1 9 10 chia ra r cho các dãy về 2 dãy tăng dần và gộp 
//  1 5 6 9 10 12 

#include<bits/stdc++.h>
using namespace std;
// trộn 2 dãy con tăng dần day 1[L,m] dãy 2 [m+1, r]
void merge(int a[], int l, int m, int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<y[j]) {
			a[l]=x[i];
			++l;++i;
		}
		else {
		a[l]=y[j];
		++l;++j;
	   }
	}
	while(i<x.size()){
		a[l] = x[i];
			++l;
	        ++i;
	}
	while(j<y.size()){
		a[l]= y[j];
		++l;++j;
	}
}

void mergeSort(int a[], int l , int r){
	if(l>=r) 
		return ;
	int m=(l+r)/2;
	mergeSort(a,l,m);  // sắp xệp nửa đầu
	mergeSort(a,m+1,r); // sắp xếp nửa sau 
	merge(a,l,m,r); //trộn 2 nửa 
}

int main(){
	int n=10;
	int a[10];
	srand(time(NULL));
	for(int i=0;i<n;i++)
		a[i]=rand()%1000;
	mergeSort(a,0,n-1);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}