
/*
hàm lấy mã ascii  - cout<<int (char)
hàm chuyển mã ascii - cout<<char(num);
*/


/*Tìm kiếm chuỗi con 
strstr( str, keyword);  - thuộc thư viện "cstring" - trả về chuỗi từ đầu đoạn chuỗi con đc tìm kiếm đến hết chuỗi
str - chuỗi ban đầu
ví dụ : 
str : 123rtuirr
keyword : rtui =>    cout << strstr(123rtuirr, rtui) -> in ra chuỗi ( rtuirr )
keyword - kí tự cần tìm*/


/*copy toàn bộ chuỗi bao gồm cả \0- cũng thuộc "cstring" 
strcpy(targe , source)  tức chuỗi ch có gì , chuỗi cần sao chép
targe : chuỗi đích 
source : chuỗi nguồn
ví dụ 
char s1[30];
char s2[30] = "ABCDE";   strcpy(s1,s2); -> in ra s1 giống s2
*/


/*fgets - nhập vào 1 chuỗi có khoảng trắng - thuộc cstring
fgets(str , sizeof(str) +1 ,stdin)
sizeof(str)+1  +1 ở đây là trả chỗ của \0 
và hàm fgets đọc 1 dấu \n lên khi kết thúc hàm luôn xuống dòng */


/*Dùng fgets để đọc file
char *fgets( char *s,int n, FILE *fp);
*s - con trỏ dùng để lưu nội dung đọc từ file
n - số ký tự lớn nhất cớ thể đọc từ từng file - bao gồm cả \0
*fp con trỏ tới file cần đọc

#include <iostream>
#include <cstring>
using namespace std;
int main(){

    FILE *fp; 
    char buf[50]; 
    fp = fopen("test.txt","r");
    fgets(buf,30,fp);
    puts(buf);
    fclose(fp);    
    return 0;
}
*/
/*hàm pow(a,b) tính lúy thừa a^b - thuộc thư viện cmath  */

/*hàm puts(char) - xuất 1 kí tự  ví dụ putchar('A') = A */

/*hàm sqrt - căn bậc 2 - thuộc thư viện cmath  
setprecision(n) - làm tròn đến n số sau dấu . */