/* con trỏ cấu trúc có tác dụng 
   - sử dụng nó để truy cập vào địa chỉ của các thực thể trong bộ nhớ
   - khai báo cũng như lấy giá trị các thành viên trong nó 
*/

/* cú pháp :
instance_pointer -> member 
instance_pointer : con trỏ để lưu địa chỉ của thực thể instance 
member : tên thành viên cần truy cập của thực thể đó
*/

/*  ví dụ
#include<iostream>
using namespace std;

typedef struct person_t{
	char sex;
	string name; 
	int age;
	string add;
	string jod;
} person1;

int main(){
	//khai báo thực thể (p) + con trỏ 
   person1 p , *p1;

   // gán địa chỉ 
   p1 = &p;

   // truy cập và gán giá trị vào thành viên trong con trỏ cấu trúc
   p1 -> name = "chunggg";
   p1 -> age = 20 ;
   p1 -> sex = 'M';
   p1 -> jod = "student";
   p1 -> add = "Vinh Phuc";

   cout<<p.name<<' '<<p.age<<' '<<p.sex<<' '<<p.jod<<' '<<p.add<<endl;

   person1 k , *p2;
   p2 = &k;

   // copy thực thể p1 vào p2
   *p2 = *p1;
   cout<<k.name<<' '<<k.age<<' '<<k.sex<<' '<<k.jod<<' '<<k.add<<endl;
   //kq như nhau
   return 0;
}

*/


// sử dungh con trỏ cấu trúc
/* truyền gián tiếp cáu trúc xử lý 
   - Một là mất ít thời gian hơn để chỉ truyền giá trị con trỏ so với giá trị của toàn bộ cấu trúc. 
   Điều này rất quan trọng đối với việc sử dụng hiệu quả bộ nhớ và thời gian thực thi
   - Hai là dễ dàng thay đổi nội dung của cấu trúc từ bên ngoài hàm
*/

// ví dụ
#include<iostream>
using namespace std;

typedef struct {
	double re;  // phần thực 
	double im;  // phần ảo
} complex_t ;

// hàm tính tổng phần thực và phần nguyê
void addComplexPtr(complex_t *a, complex_t *b, complex_t *c){
	(*c).re = (*a).re + (*b).re;
	(*c).im = (*a).im + (*b).im;
}

void printcomlpex(complex_t c){
	cout<<c.re<<"+"<<c.im<<'i';
}

int main(){
	//khởi tạo các thực thể
	complex_t x ={1.2 , 2.6};
	complex_t y ={5.6 , 7.4};
	complex_t z;

	complex_t *p1 = &x;
	complex_t *p2 = &y;
	complex_t *p3 = &z;

	addComplexPtr(p1,p2,p3);
	printcomlpex(z); 

	return 0;
}