// Hàm random - thuộc cstdlib

/*random từ 0 đến 4, 
 num = rand() % (max_number + 1 - minimum_number) + minimum_number
 */

/*Số ngẫu nhiên khi dùng rand
min+(int)( rand ()*(max - min + 1.0)/(1.0 + RAND_MAX));
min -max - phạm vi min - max
*/ 

/*Nhược điểm
các số ngẫu nhiên được tạo ra trong các lần chạy hàm đều giống nhau ( bị lặp) 
-  trên cùng 1 môi trg lập trình
*/

/*Cách khắc phục nhược điểm
thêm thư viện "ctime"
thêm hàm srand((unsinged int )time(NULL)); 
Thêm ttime để mỗi lần chạy hàm sẽ tính theo giây khác nhau kéo theo giá trị num khác nhau
*/ 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int Getrandom(int min, int max){ // tạo hàm để chỉ định phạm vi sinh số ngẫu nhiên
    return min +(int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main(){
    srand((unsigned int)time(NULL)); 
    //sử dụng srand để thay đổi số nguồn sử dụng trong rand

    for(int i=0;i<10;i++)
        cout<<Getrandom(1,6)<<endl;
    return 0;
}
//đã có sự khác nhau giữa các lần chạy