/* Vòng lặp vô hạn trong C++
- là một chuỗi các lệnh mà khi được viết ra sẽ kéo dài vô tận
- trừ khi có sự can thiệp từ bên ngoài. 
- Vòng lặp vô hạn có thể được thực hiện một cách có chủ đích.

Đại diện tiêu biểu cho vòng lặp vô hạn trong C++ là 
lệnh while true trong C++ khi không được kèm điều kiện để thoát vòng lặ


//ví dụ
#include <iostream>
using namespace std;
int main(){
    while(1==1){
      cout << "hello\n";
    }
    return 0;
} */



/*Cách tạo ra vòng lặp vô hạn trong C++
Ngoại trừ những trường hợp đặc biệt thì trong phần lớn các trường hợp, 
chúng ta đã vô tình tạo ra vòng lặp vô hạn trong C++ trong các lỗi logic khi xử lý vòng lặp.
*/
#include <iostream>
using namespace std;
int main(){
    int num = 0;
    while( num < 4 ){
        if (num == 2){
             cout << "!!CONTINUE!!\n";
            continue;
        }
        cout << num << endl;
        num ++;
    }
    return 0;
}


//> 0
//> 1
//> !!CONTINUE!!
//> !!CONTINUE!!
//> !!CONTINUE!!
//>> ...........
//>> ...........


/* Lưu í - Dùng ctrl + c để thoát khỏi vòng lặp vô hạn*/ 
