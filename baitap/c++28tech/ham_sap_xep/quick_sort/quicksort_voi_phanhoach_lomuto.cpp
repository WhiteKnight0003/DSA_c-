// dựa trên chia để trị và cũng chia mảng ra 2 nửa để xét
// cấu trúc :
// quicksort(a,p,r) // sắp xếp tại vị trí q kết thúc tại vị trí r
// if(p<r){
//    q = partition(a,p,r);  phân mảng thành 2 nửa 
//    quicksort(a,p,q-1);
//    quicksort(a,q+1,r);
// }


// ví dụ 
// 9 -3 5 2 6 8 -6 1 3 
// ban đầu sẽ có 1 con tró đứng ở vị trí -1
// chọn pivot là số cuối cùng và k xét nó x
// cách để lọc ra phần tử <= pivot :
// 9> 3 số đc bỏ qua
// -3 lấy 
// 5 > 3 số đc bỏ qua
// 2 lấy và nó chỗ cho số đc bỏ qua đầu tiên trong dãy hay 2 -3 5 9 6 8 -6 1
// 6 số đc bỏ qua
// 8 số đc bỏ qua
// -6 lấy và nó chỗ cho số đc bỏ qua đầu tiên trong dãy hay 2 -3 -6 9 6 8 5 1
// 1 lấy và nó chỗ cho số số đc bỏ qua đầu tiên trong dãy 2 -3 5 9 6 8 -6 1
// ta đc 2 mảng con  2 -3 5 9    3   6 8 -6 1
// r tiếp tục lấy pivot là các phần tử con và cho chạy 
// k cần phải gộp 2 mảng mà nó sẽ tự gộp

#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l , int r){
	int pivot = a[r] ;// phần tử cuối cùng bên phải
	int i=l-1;
	for(int j=l;j<r;j++)
		if(a[j]<= pivot){
			++i;
			swap(a[i],a[j]); // đổi chỗ 
		}
	++i; // đưa pivot về giữa
	swap(a[i],a[r]);// đưa chốt về giữa 
	return i; // vị trí chốt
}

void quicksort(int a[], int l , int r){
	if(l>=r) return ; // dừng lệnh
	int p= partition(a,l,r);
	quicksort(a,l,p-1);  // quicksort đến vị trí mảng <= vipot k tính chính nó
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
