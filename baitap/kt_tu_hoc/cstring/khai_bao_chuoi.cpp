// char (kiểu ký tự) - có kích thước 1 byte

/* khởi tạo chuỗi  char s[length] = string;
s: tên chuỗi 
length : độ dài chuỗi 
string : chuỗi kí tự ban đầu được gán cho chuỗi s
*/

/*hàm tính độ dài 
strlen(str) - tính độ dài k bao gồm \0  - thuộc thư viện cstring
*/

/*con trỏ chuỗi
cấu trúc :   char *p

#include <iostream>
using namespace std;
int main(){
    char str[] = "Hello", *p;
    p = str;
    cout << p <<endl;  // gán địa chỉ chuỗi từ kí tự đầu tiên 
    cout << p +1 <<endl;  // gán địa chỉ chuỗi từ kí tự thứ hai 
    cout << p +2 <<endl;  // gán địa chỉ chuỗi từ kí tự thứ ba

    return 0;
}
*/

/*Truy xuất các ký tự trong chuỗi bằng con trỏ
*(p+ index)
- index là index của kí tự cần lấy giá trị trong chuỗi 
- p là con trỏ chuỗi
- p+ index có ý nghĩa tăng con trỏ 1 số index đơn vị ,
 nhằm chỉ định địa chỉ của ký tự cần truy cập trên bộ nhớ 
 - *(P + index) nhằm lấy giá trị này

 index       truy xuất bằng chuỗi      truy xuất bằng con trỏ
   0                a[0]                    *p
   1                a[1]                    *(p + 1)
   2                a[2]                    *(p + 2)
  ...               ...                       ...
   n                a[n]                    *(p + n)

#include<iostream>
using namespace std;
int main(){
	char a[] = "Hello",*p;  // tính chuỗi a[0]
	p=a;

	cout<<a[2]<<endl;      //l
	cout<<*(p + 2)<<endl;  //l

	cout<< a[4]<<endl;     //o
	cout<<*(p + 4)<<endl;  //o
	return 0;
}
*/


/*Nhập xuất chuỗi bằng con trỏ
char str[100],*p;
p=str;
cin>>p;

- để cuất chuỗi bằng con trỏ - cta cần dịch chuyển
vị trí con trỏ lần lượt từ đầu đến cuối chuỗi và in lần lượt các kí tự tại đó 
while(*p != '0'){
	cout<<*p;
	++p;
}
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[256], *p;
	p=a;

	//nhập chuỗi bằng con trỏ 
	cout<<"Nhap chuoi : "; cin >>p;

	//Xuất chuoi bằng con trỏ 
	cout<<"Xuat chuoi : "; 
	while(*p != '\0'){
		cout<< *p;
		++p;
	}
	return 0;
}
