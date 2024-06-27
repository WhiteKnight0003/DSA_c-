/*hàm length - thuộc string - str.length() -str : tên biến theo string 
- hàm length sẽ trả về tổng số byte đc tạo thành từ các ký tự tạo chuỗi
- lưu ý : đây l phải kích thước thật của string trong bộ nhớ 
mà là kích thước được tính từ tổng các thành phần tạo nên string
- ví dụ 1 string đc tạo bởi 2 kí tự - mỗi ký tự 1 byte => length =2

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1{"adfghjk"};
	cout<<str1.length()<<endl;
	return 0;
}
*/


/*Lấy kích thước string = hàm size 
- là 1 thành viên trong class std::string
- có tác dụng lấy kích thước string trong c++ dưới dạng byte
- cú pháp str.size() strowr đây là tên biến string
- là cách tính kích thước cũng giống length

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"zxzczx"};
	cout<<str.size()<<endl;
	return 0;
}

*/

/*chú ý khi lấy kích thước string  với chuỗi tạo bởi ksy tự UTF-8
ví dụ đối với tiếng việt hay chữ kanji của nhật nên k thể dùng 
length và size để tính chính xác */
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"Hà Nội"};  // =9 hay "Haf Nooji"
	cout<<str.length()<<endl;
	return 0;
}


/*Thông thường 
hàm length để tính kích thước string
còn size cũng để tính kích thước nhma nó còn có thêm 
tính tương hỗ khi sử dụng với vecto trong c++ 
*/