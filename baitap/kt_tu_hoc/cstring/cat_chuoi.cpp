/*Dùng hàm strncpy() - là hàm dùng để copy số lượng ký tự chỉ định
dùng strncpy để cắt chuỗi :
strncpy(target , source + begin , n);
begin : vị trí bắt đầu cắt trong source
n : số ký tự sẽ cắt từ vị trí begin
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[] = "0123456789";
	char *p;
	p=(char *)malloc((100+1)*sizeof(char));
	strncpy(p, str +3,5); // cắt 5 kí tự từ vị trí thứ 3 (tính từ vị trí 0)
	p[5]='\0';// gán kí tự cuối cùng = \0;
	cout<<p<<endl;
	//34567
}