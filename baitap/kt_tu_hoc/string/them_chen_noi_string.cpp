/*Có 3 cách để thêm or chèn str 
dùng push_back 
toán tử +=
dùng insert 
và dùng toán tử + để nối string */

/*Nối string - dùng toán tử + 
str = str1 + str2 + str3 +... ; 
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	string str1 = "Hello";
	string str2 = "\t";
	string str3 = "Viet nam";

	str = str1 + str2 + str3;
	cout<<str<<endl;
	return 0;
}

*/



/*thêm ký tự vào cuối chuỗi bằng push_back 
str.push_back(chr)   
- hàm push_back thuộc kiểu void do đó nó sẽ k trả về giá trị .
bỏi v nó sẽ thêm ký tự vào vị trí cuối chuỗi string chứ k trả về chuỗi kết quả

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"chun"};
	str.push_back('g');
	cout<<str<<endl;   // chung
	return 0;
}
*/

/*thêm 1 or 1 chuỗi ký tự vào cuối chuỗi bằng toán tử gán
str +=str1  

#include<iostream>
#include<string>
using namespace std;
int main(){
	string str{"abcd"};
	str+="e";
	cout<<str<<endl;  //abcde

	str+="gkh";
	cout<<str<<endl;  //abcdegkh
	return 0; 
}

*/

/*Chèn 1 ký tự vào vị trí chỉ định - hàm insert 
str.insert(p,chr)  
- str : string ban đầu
- p ; trình lặp trỏ đến vị trí cần chèn trong string
- chr : ký tự cần chèn 
- ở đây trình lặp iterator là 1 vòng lặp có tác dụng giống nhưu con trỏ
giúp truy cập đến các ký tự ở vị  trí cụ thể trong string 
- trong trg hợp cần chỉ đến vị trí index thứ n trong string , ta viết trình lặp
p như sau

str.begin() + i
- str.begin() chỉ đến vị trí đầu tiên trong string , và i là index của vị trí ký tự cần chỉ đến

=>>> công thức chuẩn  : str.inset(str.begin() + i, chr ) 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str ("abcd");
	str.insert(str.begin () +2, 'g'); // thêm g vào vị trí 2 tính từ vị trí 0
	cout<<str<<endl; //abgcd

	str.insert(str.begin() +4, 'H'); // thêm H vào trị trí 4 tính từ vị trí 0
	cout<<str<<endl;  //abgcHd
	return 0; // k thay đc char = string
}
*/


/*Chèn 1 chuỗi ký tự vào vị trí chỉ định = insert
str.insert( position , str1 )
- position : vị trí cần chèn 
- str1 : chuỗi cần chèn */

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"abcd"};
	string str1{"edv"};

	str.insert(3,str1);
	cout<<str<<endl; //abcedvd - thêm chuỗi 1 vào vị trí t3 tính từ 0
	return 0;
}