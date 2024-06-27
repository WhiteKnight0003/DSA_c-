/*Có 3 cách để xóa ký tự : 
- hàm pos_back : xóa ký tự cuối cùng 
- erase : xóa ký tự tại vị trí chỉ định 
- erase(first , last) : xóa ký tự trong phạm vi chỉ định */

/*Xóa ký tự cuối cùng bằng pos_back - ký tự cuối cùng k bao gồm \0 
- hàm pop_back thuộc kiểu void , do đó nó sẽ k trả về giá trị . Bởi v nó sẽ xóa ký tự cuối 
cùng trong string chứ k trả về ký tự đó 
- trong trg hợp muốn lấy kí tự cuối cùng ta dùng hàm back () để thay thế

- cú pháp :  str.pop_back()

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"chung1"};
	str.pop_back();
	cout<<str<<endl; //chung
	return 0;
}
*/

/*Xóa 1 ký tự bằng erase 
- là hàm thuộc class std::string 
- có tác dụng xóa một or nhiều ký tự trong string cưng như làm giảm độ dài tương ứng cảu nó

=> cú pháp để xóa 1 kí tự : str.erase(p) 
str : chuỗi ban đầu
p: trình lặp trỏ đến vị trí cần xóa trong string 
- ở đây trình lặp trỏ (iterator) là 1 vòng lặp có tác dụng giống như con trỏ , giúp truy cập
đến các ký tự ở vị trí cụ thể 
- trong trg hợp chỉ đến vị trí index thứ n trong string , cta sẽ viết vòng lặp : 

=> str.begin() + i ;

=>> ct chung nhất để xóa 11 ký tự tại vị trí chỉ định (tính từ 0)
str.erase(str.begin() +i) 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"chuuung"};
	str.erase(str.begin()+3); // xóa ký tự ở vị trí thứ 3 tính từ 0
	cout<<str<<endl; //chuung

	str.erase(str.begin()+4); // xóa ký tự ở vị trí thứ 4
	cout<<str<<endl;  //chuug
	return 0;
}
*/



/*Xóa các ký tự trong phạm vi chỉ định 
str.erase( iterator_first , iterator_last) ;
tương tự như xóa 1 ký tự ở trên

=>> ct xóa các ký tự trong phạm vi 
str.erase(str.begin() + start , str.begin() +end );
start  và end là 2 vị trí index của phạm vi xóa trong string
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"abcdefghijk"};
	str.erase(str.begin()+ 3 , str.begin() +8 ); // xóa từ trí 3 -> vị trí 8 tính từ 0
	// hay xóa từ vị trí 3 đến 7
	cout<<str<<endl; // abcijk
	return 0;
}