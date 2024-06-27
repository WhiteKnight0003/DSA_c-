// vẫn sẽ chia mảng ra làm 2
// tìm cặp nghịch thế r đổi chỗ chúng 
// cho mảng 4 8 4 1 1 3 8 6 2
//        i                   j

// ví dụ chọn pivot = 4 số đầu tiên 
// while(a[i] <pivot) ++i; tức là nằm đúng vị trí
// while(a[j]> pivot) --j;
// else đổi chỗ a[i] a[j] khi i<j

#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r){
	int pivot = a[l];
	int i=l-1, j=r+1;
	while(true){
		do{
			++i;
		}while(a[i]< pivot);

		do{
			--j;
		}while(a[j] > pivot);

		if(i<j)
			swap(a[i], a[j]);
		else return j; // trả về vị trí phân hoạch
	}
}

void quicksort(int a[], int l, int r){
	if(l>=r) return ;
	int p=partition(a,l,r);
	quicksort(a,l,p);
	quicksort(a,p+1,r);
}

int main(){
	int n; cin>>n;
	int a[n];
	for(auto &x: a)
		cin>>x;
	quicksort(a,0,n-1);
	for(auto x: a)
		cout<<x<<" ";
	return 0;
}
