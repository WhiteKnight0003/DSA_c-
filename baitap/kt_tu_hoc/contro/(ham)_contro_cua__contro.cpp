/*-con trỏ cũng là một biến, nên bản thân biến con trỏ cũng được gán một địa chỉ ở đâu đó trong bộ nhớ.
 Và bạn cũng có thể tạo một con trỏ khác để lưu trữ địa chỉ của biến con trỏ này. 
 Đây được gọi là con trỏ của con trỏ trong C++.


 -Bằng cách sử dụng con trỏ của con trỏ, 
 chúng ta có thể tiến hành các tham chiếu gián tiếp kép tới giá trị của một biến thông qua địa chỉ của nó trong chương trình.
 */


/*gán con trỏ của con trỏ
type **p 
 - ví dụ int **p1;  char **p2;
cú pháp : p1=&p2;    - p2 là con trỏ sẽ được gán cho con trỏ p1


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p1 = &x;  //gán con trỏ vs giá trị của x

    cout << "x = "<< x<<endl;
    cout << "p1= "<< p1 <<endl; // in ra đại chỉ giá trị của con trỏ p1  // ví dụ địa chỉ ở đây là 1
    int **p2=&p1; 
    cout << "p2= "<< p2;  //in ra p2 ( in ra địa chỉ con trỏ ) - in ra **p2 (in ra giá trị con trỏ p2)  // p2 là con trỏ của p1 => in ra địa chỉ +4 byte (hay 5) vì kiểu int

    return 0;
}
 */


/*Sử dụng con trỏ của con trỏ
//ví dụ 1 : lấy giá trị địa chỉ trong con trỏ của con trỏ

#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *p1=&x;
    int **p2=&p1;

    cout<<p1<<endl;    //in ra địa chỉ của con trỏ p1
    cout<<&p1<<endl;   // 2 dòng dưới in ra địa chỉ của p2
    cout<<p2<<endl; 
    return 0;
}


// ví dụ 2 : Dịch chuyển địa chỉ được gán trên bộ nhớ
#include <iostream>
using namespace std;
int main(){
    int x=10;
    int *p1=&x;
    int **p2=&p1;

    cout<<"p2 before : "<<p2<<endl; // int có kích thước 4byte +1 => dịch chuyển giá trị địa chỉ lên thêm 4 đơn vị
    p2+=1;
    cout<<"p2 after : "<<p2<<endl;
    return 0;
} 

*/