/* Cấu trúc
cin.ignore(n,delim);
 n- số ký tự cần trích xuất
 delim - kí tự phân tách cần tìm

 cin.getline(str, n [,delim]);
 str- biến lưu kq trích xuất
 n- số ký tự cần trích xuất
 delim - kí tự phân tách cần tìm
 *chú í - khi hàm bỏ delim thì mặc định kí tự thay delim là \n để quyết định khi nào dừng hàm
*/

/*
#include <iostream>
using namespace std;

int main () {
    char first, second,last;

    cout << "Nhap ho ten cach nhau boi dau cach:\n";

    first = cin.get();         //Dùng hàm get để lấy ký tự đầu tiên
    cin.ignore(256,' ');  //Bỏ qua cho tới khi tìm thấy dấu cách
    second = cin.get();
    cin.ignore(256,' ');
    last = cin.get();      //Dùng hàm get để lấy ký tự tiếp theo

    cout << "Ten viet tat cua ban: " << first << second<<last << '\n';

    return 0;

}

*/

#include <iostream>
using namespace std;

int main () {
    char name[256], title[256];

    cout << "Nhap ten ban: ";
    cin.getline (name,256);

    cout << "Nhap ten thu cung: ";
    cin.getline (title,256);

    cout << "Ten thu cung cua "<<name << " la "<< title;

    return 0;
}

