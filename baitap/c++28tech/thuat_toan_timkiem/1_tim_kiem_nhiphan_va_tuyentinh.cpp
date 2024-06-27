#include<bits/stdc++.h>
using namespace std;

// linear search o(n); - tìm kiếm tuyến tính
// cho mảng a[] nếu a[i] = x thì trả về đúng 

 
// binary search o(logn) - tìm kiếm nhị phân 
// điều kiện các phần tử trong mảng phải đc sắp xếp 

// duy trì 2 chỉ số left và right với left = 0 và right = n-1
// duy trì chỉ số midder m= (l+r)/2 
// nếu tìm thấy dừng lại luôn 
// nếu nó nhỏ hơn túc số cần tìm nằm bên trái và cho l=m+1; else cho r=m-1

// ví dụ 10 3
// 1 2 3 4 5 6 7 8 9 10
// m=5 mà a[m]=4 >3 => r = m-1 = 4 bỏ hết đằng sau m
// r=4 l=1 => m=2 mà a[m]=3 dừng

/* bool bs(int a[], int n, int x){
	int l=0, r=n-1;
	while(l <= r){
		int m =(l+r)/2; // vị trí ở giữa
		if(a[m]==m)
			return true;
		else if(a[m]<x) 
			  l=m+1;
		else r=m-1;
	}
	return false;
} 
*/
// hoặc
// hàm binary_search có sẵn trong algolothm
// binary_search(a+x,a+y,key) =>a[x] =>a[y-1] - binary_search(a+1,a+4,key)
// binary_search (v.begin(),v.end(),key) 
// binary_search  (v.begin() +x,v.end() +y,key) => v[x] => v[y-1]
bool binary_search(int a[], int l, int r, int x){
	if(l>r)
		return false;
	int m=(l+r)/2;
	if(a[m]== x)
		return true;
	else if(a[m]<x) 
		  return binary_search(a,m+1,r,x);
	else return binary_search(a,l,m-1,x);
}
int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(binary_search(a,0,n-1,k))
		cout<<"found"<<endl;
	else cout<<"NO found"<<endl;


}