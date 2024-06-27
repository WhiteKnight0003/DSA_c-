/*1 ký tự char (hay character ) - có kích thước 1 byte
string là 1 chuỗi cha*/ 

/*Sự khác nhau của 2 thư viện ctring và string
- với c++ ctring chứa các func của c
- còn string là head chứa class string của c++ */

/*std::string : là 1 class với các chức năng linh hoạt được sử dung
làm tiêu chuẩn để xử lý chuỗi trong c++ 
- ưu điểm lớn nhất của std::string  - là tự thay đổi kích thước*/

/*Cách khai báo
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1;
	string str2;
}
*/

/*Gán string - str = value 
string name ;
name = "LOve"
name = {'l', 'm', 'o'}
*/



/*Khởi tạo 1 string 
+ sử dụng cặp dấu ngoặc {}
string str {value}  - ví dụ : string name {"Chung"}
+ sử dung toán tử 
string str = value  - ví dụ : string name = "Chung"
+ khởi tạo 1 string với n ký tự lặp lại 
string str(n , chr); - ví dụ : string name(5 , 'a');

#include<iostream>
#include<string>
using namespace std;

int main(){
	string name{"chung"};
	string age = "21";
	string str(5, 'a'); ///aaaaa

	cout<<name <<"   "<<age<<endl;
	cout<<str<<endl;
	return 0;
}
*/


/*Truy xuất kí tự từ string 
-str[index] - index - vị trí kí tự cần truy xuất 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"LOVE"};
	cout<<str[0]<<endl; L
	cout<<str[1]<<endl; O
	cout<<str[2]<<endl; V
	cout<<str[3]<<endl; E
	cout<<str[4]<<endl; \0
	return 0;
}
*/


/*Chi tiết về sự khác biệt cstring và string
     cstring                  |          string
+ một tập hợp các biến        |   + một clas dùng để xử lý chuỗi
có kiểu dữ liệu kí tự         | 
+ có kích thước cố định       |  + tự thay đổi kích thước
+ k phải là kiểu dữ liệu      |   + là kiểu dữ liệu string
+ k thể tính toán = toán tử   |   + có thể dùng toán tử để tính toán trực tiếp
+ tốc độ nhanh nhưng          |   + Xử lý linh hoạt nhưng tốc  
xử lý bất tiện                |    độ chậm hơn 1 chút
*/

