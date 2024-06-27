/*Dùng hàm strstr 
strstr(str ,keyword)  - keyword  chuỗi kí tự cần tìm
strchr(str ,keyword)  - keyword  kí tự cần tìm
 */
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[30] = "le tien chung";
	cout<<strstr(str,"tien")<<endl;
	//kq : tien chung - trả về vị trí đầu tiên tìm thấy chuỗi kí tự đến hết chuỗi
}