/*Hàm strcpy() - copy toàn bộ chuỗi ban đầu bao gồm cả \0
strcpy(str2,str1);
str2- chuỗi kq
str1 -  chuỗi ban đầu cần sao chép

**Lưu ý : Hiện tượng tràn bộ nhớ khi dùng hàm strcpy
phải chú í đến kích thước chuỗi kq
*/


/*hàm strcpy_c() - sẽ k xảy ra hiện tượng tràn bộ nhớ
cũng copy toàn bộ chuỗi bao gồm cả \0

strcpy_c(str2, rsize_t , str1);
rsize_t : kích thước chuỗi kq  */


/*Copy số lượng kí tự chỉ định từ chuỗi ban đầu 
hàm strncpy () 

strncpy( str2 , str1 , n); 
n - số kí tự lớn nhất có thể copy 

**Lưu ý : nếu giá trị n nhỏ hơn độ dài str1 , khi dùng strncpy thì ký tự 
kết thúc chuỗi \0 sẽ k đc copy vào chuỗi đích , do đó ta cần thêm kí tự này 
vào str2   
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[30] ="le tien chung";
	char str2[30];

	strncpy(str2,str1,6);  // copy nhiều nhất 6 kí tự 
	str2[6]='\0';  // gán kí tự kết thúc chuỗi là \0
	cout<<str2<<endl;
}