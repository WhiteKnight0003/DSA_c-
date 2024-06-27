// dùng sprintf() + itoa()

/*sprintf()  - 2 tách dụng - nối nhiều chuỗi + chuyển số -> chuỗi 
sprintf(target , format , num) 
target : chuỗi kq
format : định dạng số đó 
num : số cần chuyển

#include<iostream>
using namespace std;
 
int main(){
	float n;
	int m;

	cout<<"Nhap vao n : "; cin>>n;
	cout<<"Nhap vao m : "; cin>>m;

	char target1[100]; sprintf(target1 , "%f" , n);
	char target2[100]; sprintf(target2 , "%d", m);

	cout<<target1<<endl;
	cout<<target2<<endl;

	return 0;
}

*/

/*itoa - cũng giống như sprintf nhma thêm \0 vào cuối chuỗi 
itoa (num,target,base) 
base : cơ số chuyển đổi - nhằm xác định 1 gt số nguyên , chuyển đổi nó thành
1 giá trị cơ bản và lưu trữ nó trong một bộ đệm 
ví dụ như 2 8 10 16
- chỉ chuyển đc số nguyên*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	char target[100];

	cout<<"Nhap vao n : ";cin>>n;

	itoa(n,target , 2);  // ví dụ base = 2 => hàm chuyển số thành hệ cơ số 10 -> 2  (vì số là cơ số 10)

	cout<<target<<endl;
	return 0;

}