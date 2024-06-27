/* Chúng ta quan tam đến 3 thành phần sử dụng trong c++
-Tham số (Parameter)
-Đối số (Argument)
-Giá trị trả về (Return values)

 Cũng cần qtam đến 3 khái niệm trong hàm c++
 -Đối số mặc định (default argument)
 -hàm nội tuyến trong C++ (Inline functions)
 -Nạp chồng hàm trong c++ (overload)

 Cũng cần làm chủ 3 loại hàm trong c++
 -Hàm main trong c++
 -Hàm có sẵn trong c++
 -Hàm c++ do ng dùng định nghĩa 
*/

/*Cấu trúc 
kiểu dữ liệu  tên hàm (kiểu dữ liệu 1- tham số 1, kiểu dữ liệu 2 - tham số 2 ...){
    câu lệnh 1;
    câu lệnh 2;
    ....
    return giá trị trả về;
}

- kiểu dữ liệu ví dụ như int ,char,....
- đối với hàm k trả về giá trị thì dùng void
- tham số - các biến sử dụng trong khai báo - cũng như để nhận truyền tham số 
- return : trả về giá trị cần trả về;

*/


/*void là kiểu dữ liệu biểu thị trạng thái không tồn tại kiểu dữ liệu.
Việc một dữ liệu lại không tồn tại kiểu dữ liệu là một việc vô cùng kỳ lạ. 
Tuy nhiên thì ý nghĩa của nó cũng dễ hiểu thôi, ví dụ đối với cuộc sống của chúng ta thì không tồn tại kiểu dữ liệu cũng giống như ý nghĩa của số 0 vậy.

void 
- Được dùng trong khai báo hàm
- được dùng con con trỏ void

*/

/*Để khai báo hàm nội tuyến trong C++,
 chúng ta chỉ cần thêm từ khóa inline vào trước khi khai báo một hàm thông thường là có thể biến hàm đó thành hàm nội tuyến rồi.*/
#include <iostream>

inline double square(double x)
{
    return x * x;
}

int main()
{
    std::cout << square(3.0) << std::endl;   // 9
}
