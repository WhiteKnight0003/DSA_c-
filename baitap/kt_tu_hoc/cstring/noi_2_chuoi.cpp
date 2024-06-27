/*hàm strcat() copy toàn bộ nội dung của str2 sau đó gán vào vị trí cuối cùng
của str1
 str1(kq) = strcat(str1,str2) 

ví dụ : str1[20] = "le tie"
        str2[20] ="n chung"
        strcat(str1,str2);
        cout<<str1;   - le tien chung
**Lưu ý chúng ta cần chỉ định kích thước chuỗi đích đủ lớn để chứa đc kq 
tránh tràn bộ nhớ 
*/


/*Nối 2 chuỗi với số lượng ký tự chỉ định - strncat()
strncat(str1,str2,n)  
n là số ký tự tối đa được lấy tính từ kí tự đầu của str2 
sau đó gán vào vị trí cuối cùng của str1 

char str1[20] = "aaaaa";
char str2[10] = "abcde"
strncat(str1 , str2 , 3);
cout <<str1  // aaaaaabc
*/


/*Nối nhiều chuỗi - hàm sprintf() 
sprintf( target , *format , str1 , str2 , ...);
target - chuỗi đích
*format là chuỗi định dạng , là tập hợp các định dạng %s của chuỗi str
có bao nhiêu str có bấy nhiêu %s
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[10] = "Hello";
	char str2[10] = "C++";
	char str3[10] = "Would!";

	char target[100];

	sprintf(target, "%s %s %s\n",str1,str2,str3 );
	cout<<target;
	return 0;
	
}