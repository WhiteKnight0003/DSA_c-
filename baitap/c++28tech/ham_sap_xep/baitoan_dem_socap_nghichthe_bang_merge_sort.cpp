// cawpj nghịch thế : ai > aj và i<j
// chia mảng thành 2 mảng con đã sắp xếp 
// ví dụ : 
// 1 8 9 10 : left
// 2 3 4 12 : right
// nếu như 1 phần tử dãy trên lớn hơn dãy dưới
// ví dụ 8>2 thì dễ thế 9 10 cũng lớn hơn 2 
// <=> cặp nghịch thế (8,2) (9,2) (10,2)
// trước khi trộn ta cũng sẽ tính đc số nghịch thế từng bên 
#include<bits/stdc++.h>
using namespace std;

int merge(int a[], int l , int r, int m){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	int cnt=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<y[j]){
			a[l]=x[i];
			++l; ++i;
		}
		else {
			cnt+=x.size()-i; // tính số cặp nếu lớn hơn
			a[l]=y[j];
			++l;++j;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		++l;++i;
	}
	while(j<y.size()){
		a[l] = y[j];
		++l;++j;
	}
	return cnt;
}

int  mergeSort(int a[], int l , int r){
	int dem=0;
	if(l<r){
	int m=(l+r)/2;
	dem+=mergeSort(a,l,m);
	dem+=mergeSort(a,m+1,r);
	dem+=merge(a,l,r,m);
    }
    return dem;
}

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	cout<<mergeSort(a,0,n-1)<<endl;
	return 0;
}