/*Hàm substr là một hàm thành viên trong class std:string
- có tác dụng cắt chuỗi con ra từ chuỗi string ban đầu bằng cách 
chỉ định vị trí và độ dài chuỗi cần cắt.
- hàm substr trong C++ không làm thay đổi chuỗi ban đầu mà sẽ lưu kết quả cắt vào một string mới.

- cú pháp : str.substr(start , length);
- str : chuỗi ban đầu
- start : vị trí cần cắt ( tính từ 0)
- length :  số kí tự cần cắt - nếu k chỉ định cắt đến hết chuỗi


#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"abcde  tyu zxc"};
	cout<<str.substr(3,5)<<endl;
	//de  t
}
*/



/*Cắt chuỗi con từ cuỗi lên đầu*/
#include <iostream>
#include <string>
using namespace std;
 
string substrBack(string str, size_t pos, size_t len) {
    //pos: vị trí cắt
    //len: số ký tự cần cắt từ pos về đầu chuỗi
    return str.substr(pos - len, len);
}
 
int main() {
    string str = "Hello World!";

    //Cắt từ vị trí index bằng 5 về đầu 2 ký tự
    string substr3 = substrBack(str, 5, 2);
    cout << substr3 << endl;        

    //Cắt từ vị trí index bằng 5 về đầu 5 ký tự
    string substr1 = substrBack(str, 5, 5);
    cout << substr1 << endl;

    //Cắt từ cuối chuỗi về đầu 6 ký tự  
    string substr2 = substrBack(str, str.length(), 6);
    cout << substr2 << endl;


    return 0;
}

/*Lưu ý : khi cắt chuỗi bằng substr : chúng ta cần lưu ý phép cắt bằng substr 
sẽ k làm thay đổi chuỗi ban đầu mà sẽ lưu kq cắt vào 1 string mới */