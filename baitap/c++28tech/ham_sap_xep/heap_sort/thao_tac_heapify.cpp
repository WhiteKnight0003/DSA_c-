// thực hiện với nốt có chỉ số i trong mảng 
// dùng max_head để tạo ra mid_head

#include<bits/stdc++.h>
using namespace std;

// xét tại 1 nốt cha có vị trí i
void heapify(int arr[], int n , int i ){
	int largest = i;
	int left = 2*i+1; // vị trí nốt con bên trái 
	int right = 2*i+2; // vị trí nốt con bên phải
	if(left < n && arr[left] > arr[largest]) // nếu như nó ch nằm ở cuối mảng và phần tử con lớn hơn phần tử cha
		largest= left;  // cập nhật vị trí lớn nhất là con
	if(right < n && arr[right] > arr[largest])
		largest=right;

	if(largest != i){ // nếu chỉ số phần tử lớn nhất k phải ở nốt cha
		swap(arr[i], arr[largest]); // đổi cho phần tử con lên làm cha
		heapify(arr, n , largest); // chạy nốt mới
	}
}

// cây thỏa mãn thuộc tính max_heap , nên mục lớn nhất đc lưu trữ tại nút gốc
// hoán đổi : loại bỏ phần tử gốc và đặt ở cuối mảng
// giảm kích thước của heap đi 1
// heapitf lại phần tử gốc để chúng ta có phần tử cao nhất ở gốc 
// quá trình này đc lặp lại cho đến khi tất cả các mục của danh sách đc sắp xếp 
void heapsort(int arr[], int n){
	for(int i=n/2 -1 ; i>=0;i--)
       heapify(arr,n,i);
 // ví dụ  : 1 12 9 5 6 10
 // với n =6 => i=2 tức vị trí của 9
 // hay có cây
 //        1
 //    12     9        i=2 hay giá trị 9
 //   5  6    10   
 //   sắp xếp lại 9 và 10  1 12 10 5 6 9
 //   quay về 12 k cần sx vì nó thỏa mãn nốt cha > 2 nốt con
 //   quay về 1 - 1< 12 cập nhật lại 12 1 10 5 6 9
 //   nó sẽ tự cập nhật các nốt ở dưới => 12 6 10 5 1 9
     for(int i=n-1;i>=0;i--){
     	swap(arr[0], arr[i]);
        heapify(arr, i, 0); 
     // ví dụ như 12 6 10 5 1 9
     // đảo 12 và 9
     // heapify để k xét 12 nữa mà sẽ xét 9 6 10 5 1
     // dần dần cho đến khi hết 
   }
}

int main(){
	int n; cin>>n;
	int arr[n];
	for(auto &x: arr)
		cin>>x;
	heapsort(arr,n);
    for(int i=0;i<n;i++)
  	   cout<<arr[i]<<" ";
     return 0;
 }