/*Kiểm tra một ký tự có phải khoảng trắng hay k
hàm isspace()  - isspace(char);  - char : kí tự cần kiểm tra
kq = 1 nếu ký tự đó là khoảng trắng 
   = 0 là k phải 

  kí tự được tra về kq =1 khi

ký hiệu         code         ý nghĩa
   \t           0x09        tab ngang(TAB)
   \n           0x0A        dòng mới(LF)
   \v           0x0B        tab dọc(VT)
   \f           0x0C        ngắt trang(FF)
   \r           0x0D        hồi quy(CR)
    ..          0x20        khoảng trắng(SPACE)
 
// kt 1 kí tự có phải khoang trắng hay k
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char chr[5] ={'\n', '2', '1', ' ', ','};
	for(int i=0;i<5;i++)
		if(isspace(chr[i]))
			cout<<"Nhung vi tri la khoang trang : "<<i<<endl;
	return 0;
}


//kt ký tự chỉ định trong chuỗi có phải khoảng trắng 
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[] ="abc\tbgh";
	int n;
	cout<<"Nhap vao vi tri ky tu can kiem tra : ";
	cin>>n;

	if(isspace(str[n]))
		cout<<"Ky tu nay la khoang trang "<<endl;
	else cout<<"Ky tu nay khong la khoang trang "<<endl;
}
*/

//dem so khoang trang
#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
	char str[100] = "aa\nk ll k\t";

	/*char str[100] ;
	cout<<"Nhap str  : ";
	gets(str);
	*/
    int  dem=0;
   const  int len = strlen(str);
     for(int i=0;i<len;i++){
     	if(isspace(str[i]))
     		dem++;
     }
	cout<<"So khoang trang : "<<dem<<endl;
	return 0;
}

/*  "\t " đc tính là 1
    hay " \n"
    ** khi gán chuỗi thì nhận \n
    khi nhập chuỗi bằng gets hay fgets đều k nhận \n và sau nó??
*/