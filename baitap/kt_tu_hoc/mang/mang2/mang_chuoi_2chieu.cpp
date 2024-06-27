/* 
- là mảng ký tự 2 chiều trong C++ hoặc là mảng char 2 chiều trong C++,
- là loại mảng 2 chiều với các phần tử của mảng đều có chung kiểu char, và được sử dụng để lưu giữ nhiều chuỗi ký tự cùng lúc trong cùng một mảng.

ví dụ char s[][4] = {"ABC" , "DE" , "FGH"};
được biểu diễn 
    0     1     2    3
0   A     B     c   \0
1   D     E    \0   \0
2   F     G     H   \0   
*/

/* cách khai báo 
char name[y][x]  
- name : tên mảng 2 chiều 
- y : số lượng chuỗi ký tự trong mảng
- x : độ dài ( số ký tự )

- ví dụ : char int_arr[5][3] ....
*/

/* Cách khởi tạo 
char name [y][x] = {"string1", "string2","string3" ,...};
ví dụ : char s1[5][4] = {"ABC" , "DE", "FGH" , "abc" , "xyz"};

*/

// truy cập phần tử trong mảng chuỗi 2 chiều
// ví dụ 

#include<iostream>
using namespace std;

int main(){
	char fruits[][10] = {"Apple","Kiwi", "Lemon", "Orange"};
	//truy cập vào 1 chuỗi ký tự cụ thể 
	cout<<fruits[2]<<endl;

    //lấy độ dài
    int y = sizeof(fruits)/ sizeof(fruits[0]);

    // in ra toàn bộ phần tử
    for(short i=0;i<y;i++)
    	cout<<fruits[i]<<endl;

	return 0;
}