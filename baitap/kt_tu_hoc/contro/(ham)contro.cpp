/* Con trỏ và địa chỉ 
-Con trỏ là 1 biến dùng dể lưu trữ địa chỉ của dữ liệu trong bộ nhớ máy tính
-Con trỏ là một biến dùng để lưu giữ địa chỉ của dữ liệu,
 và địa chỉ này chính là điểm đầu của vùng chứa dữ liệu đó trong bộ nhớ máy tính.
*/



/* con trỏ trong C++ sẽ được dùng để làm 1 trong 2 công việc sau đây trong chương trình:
- Thao tác với địa chỉ bằng các phép tính toán với số được lưu trong nó
- Thao tác với giá trị tại địa chỉ mà nó lưu mà thôi.
*/



/*Dưới đây là bốn lợi ích rõ nhất mà con trỏ trong C++ mang lại cho chúng ta như sau:
- Bằng cách sử dụng một con trỏ, chúng ta có thể lấy hoặc thay đổi giá trị được lưu tại địa chỉ.
 Đặc biệt, nếu bạn sử dụng con trỏ hàm trong C++, bạn có thể thay đổi nhiều biến đồng loạt chỉ với một hàm.

- Bằng cách sử dụng chỉ một biến con trỏ trong mảng trong C++, chúng ta cũng có thể nhận và thay đổi toàn bộ phần tử trong mảng

- Một biến con trỏ duy nhất cũng có thể nhận hoặc thay đổi giá trị của tất cả các phần tử của một struct (cấu trúc) trong C++. 
Do đó giúp chúng ta có thể đỡ rắc rối khi phải xử lý từng phần tử của struct.

- Với một biến con trỏ, bạn có thể chọn hàm trong danh sách nhiều hàm để sử dụng, và giúp việc thay đổi nội dung xử lý sau đó dễ dàng hơn.
*/

/* Khai báo con trỏ    type *p or type* p
có thể khai báo        type *p1,*p2,*p3,... ( khai báo con trỏ có cùng kiểu dữ liệu)

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p1 = &x;

    cout << "x = "<< x<<endl;
    cout << "p1= "<< p1 <<endl;

    int **p2;
    p2 = &p1;

    cout << "p2= "<< p2;

    return 0;
}
*/
/*
Cách lấy địa chỉ của 1 biến &tenbien - ví dụ &num
#include <iostream>
using namespace std;
 
int main() {
    int num = 10;
    int *p;
    p = &num;
    
    cout << "pointer: "<< p <<endl;
    cout << "num    :"<< num;
 
    return 0;
  kq :: pointer : 0xc131ff8c4;
          num   :  10;
}
*/
   

/*Khởi tạo con trỏ 
type *p = &va
p; tên con trỏ
va : tên biến 
&va địa chỉ của biến

#include <iostream>
using namespace std;
 
int main() {
    int num = 10;
    int *p = &num;
    
    cout << "pointer: "<< p <<endl;
    cout << "num    :"<< num;
 
    return 0;
}
//pointer: 0xbd621ff7a4
//num    :10

*/


/*Lấy giá trị tại địa chỉ lưu trong con trỏ
cú pháp *p; */

#include<iostream>
using namespace std;

int main(){
	int x=10;
	int *p=&x;// Lấy giá trị tại địa chỉ trong con trỏ 
	cout<<"Gia tri : "<< *p;  // nếu in ra p ( sẽ in địa chỉ ) -*p in ra giá trị X ĐÃ GÁN CHO CON TRỎ 	return 0;
}



/*Thao tác với địa chỉ lưu trong con trỏ
-Đây là tính chất rất quan trọng giúp chúng ta có thể ứng dụng con trỏ trong xử lý hàm, mảng , struct hay là chuỗi trong C++
-Lưu ý là việc thêm 1 đơn vị vào con trỏ không có nghĩa là địa chỉ mà con trỏ đang lưu giữ cũng sẽ được thêm 1 đơn vị. 
Do đơn vị nhỏ nhất trong bộ nhớ là 1 byte, và tùy thuộc kiểu dữ liệu lại được chứa bởi kích thước bộ nhớ khác nhau, 
ví dụ như char là 1 byte còn int là 4 byte, nên khi con trỏ dịch chuyển 1 đơn vị, thì trên bộ nhớ sẽ dịch chuyển đúng bằng số đơn vị byte nhỏ nhất tạo nên kiểu dữ liệu đó.



#include <iostream>
using namespace std;
 
int main() {
  char chr = 'a';
  int num = 1;

  char *p1 = &chr;
  int *p2 = &num;
  
  cout << "Gia tri ban dau cua con tro kieu char: "<<p1<< endl; ví dụ địa chỉ biến là 123 
  p1 += 1; 
  cout << "Gia tri sau do cua con tro kieu char : "<< p1<< endl ; kiểu char có kích thước 1byte nên khi +1 nó sẽ lên 124


  cout << "\nGia tri ban dau cua con tro kieu int : "<<p2 << endl;  ví dụ địa chỉ biến là 123 
  p2 += 1;
  cout << "Gia tri sau do cua con tro kieu int  : "<<p2 << endl;    kiểu int có kích thước 4 byte nên khi +1 nó sẽ lên 127

  return 0;
} 

*/