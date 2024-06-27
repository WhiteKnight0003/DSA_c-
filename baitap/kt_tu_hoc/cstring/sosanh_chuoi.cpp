/*Có 3 phương pháp để so sánh chuỗi 
- Toán tử so sánh : so sánh 2 ký tự 
- strcmp() : so sánh 2 chuỗi
- strncmp() : so sánh 2 chuỗi vs n kí tự chỉ định*/

/*1. Toán tử so sánh
'a' == 'a'    'a' > 'b' .....
'a' != 'b'

thường thì kí tự thg > kí tự in hoa của chính nó
và kí tự thường (hoa ) < kí tự tiếp theo thường (hoa) - theo mã ascii

cách lấy mã ascii :
int ('a') ;
*/


/*So sánh toàn bộ 2 chuỗi
strcmp(str1, str2) 

giá trị trả về        kết quả
     >0              str1 > str2
     =0              str1 = str2
     <0              str1 < str2


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s1[]= "ab";
	char s2 []= "aAb"; 

	int p=strcmp(s1,s2);
	cout<<p<<endl;

	if(p>0) cout<<"s1 > s2"<<endl;
	else if(p==0) cout<<"s1 = s2"<<endl;
	else  cout<<"s1 < s2"<<endl;
	return 0;
}

*/


/*So sánh n ký tự chỉ định 
strncmp(str1 , str2 ,n) - cũng như strcmp*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[]="abc";
	char str2[]="abBCcd";

	int n;
	cout<<"Nhap vao n can so sanh : ";
	cin>>n;
    
   int p=strncmp(str1, str2, n);
   if(p>0) cout<<n<<" Ky tu dau cua chuoi 1 > chuoi 2"<<endl;
   else if(p==0) cout<<n<<" Ky tu dau cua chuoi 1 = chuoi 2"<<endl;
   if(p<0) cout<<n<<" Ky tu dau cua chuoi 1 > chuoi 2"<<endl;

   return 0;
}


