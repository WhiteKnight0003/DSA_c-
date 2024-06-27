/* 3 ngôi - hay điều kiện 
là 1 toán tử được cấu tạo bởi 3 đối số gồm biểu thức điều kiện ,kq khi đk đúng và kq khi đk sai

- Cấu trúc :  condition ? true_value : false_value;
condition - biểu thức điều kiện
true_value giá trị trả về khi điều kiện đúng
false_value giá trị trả về khi điều kiện sai

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
/*	int n=8;
	string x;
	x= (n==10) ?"OK" :"NG";  nếu n==10 kq true ( in ra OK ) else ỉn ra (NG)
	cout<<x;
	*/

int x=101;
int s;
s=(x%2==0) ? x+2 : x-2; //nếu x lẻ (s=x+2) else s=x-2
 cout <<s;
}