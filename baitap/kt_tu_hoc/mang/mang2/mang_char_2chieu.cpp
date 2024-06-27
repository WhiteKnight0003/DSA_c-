#include <iostream>
using namespace std;
int main()
{
    char s[][4] = {"ABC", "DE", "FGH"};
     
    cout << s[0] <<endl; //ABC
    cout << s[1] <<endl; //DE
    cout << s[2] <<endl; //FGH
     
    return 0;
    Tuy nhiên khi sử dụng mảng 1 chiều để chứa chuỗi ký tự, cần lưu ý là trong một chuỗi ký tự, 
    ngoài các ký tự tạo nên chuỗi thì trong chuỗi còn tồn tại cả ký tự kết thúc chuỗi \0 nữa,
     cho nên chúng ta cần chỉ định độ dài của các mảng 1 chiều phải đủ để chứa cả ký tự \0 này.
}
