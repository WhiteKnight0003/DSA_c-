/*Có 2 pp sao chép mảng : 
- sao chép từng phần tử của mảng
- dùng hàm memcpy() */

/*sao chép từng phần tử 
#include<iostream>
using namespace std;
int main(){
   short a[10] ;   //short c++ (- 32746 -> 32746)
   for(int i=0;i<10;i++){
   	cout<<"Nhap Phan tu thu "<<i<<" :";
   	cin>>a[i];
   }

   short b[10];
   for(int i=0;i<10;i++)
   	b[i]=a[i];

   for(int i=0;i<10;i++)
   	cout<<b[i]<<"\t";
   return 0;
}
*/


/*memcpy() 
Hàm memcpy() là một hàm có sẵn trong header file string.h, giúp chúng ta copy bộ nhớ trong máy tính.
 Ứng dụng hàm memcpy vào việc copy mảng, thì thay vì copy mảng chúng ta sẽ copy vùng
  bộ nhớ chứa mảng ban đầu sang một vùng khác chứa mảng kết quả.

  =>> cấu trúc : memcpy ((void*)dest , (void *)src, sizeof(src) );

  (void*)dest : con trỏ chỉ địa chỉ vị trí đầu bộ nhớ chuỗi đích dest
  (void*)src  : con trỏ chỉ địa chỉ vị trí đầu bộ nhớ chuỗi nguồn src 
  sizeof(src) ; kích thước cần copy từ bộ nhớ chuỗi nguồn
  */

#include<iostream>
#include<string>
using namespace std;

int main(){
	short str[10] = {5,4,3,6,7,8,1,2,3,9};
	short dest[10] ;

	memcpy((void*)dest , (void*)str, sizeof(str));

	for(int i=0;i<10;i++)
		cout<<dest[i]<<"  ";
	return 0;
}
