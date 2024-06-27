/* kích thước struct là kích thước mà struct chiếm trong bộ nhớ máy tính 
    - được tính = byte
    - là tổng kích thước của tất cả thành viên của nó , cộng thêm 1 bộ nhớ đệm (padding memory) ở giữa các thành viên nhằm tăng tốc độ truy cập

*/

// cách lấy kích thước struct - sizeof (name) : name - tên thực thể của struct
// ví dụ 
#include<iostream>
using namespace std;

typedef struct {  // 41
	char name[20];
	char sex ;
	int age ;
	double height;
	double weight;
} persion_t;

int main(){
	persion_t p;
	cout<<"Size Name = " <<sizeof(p.name)<<endl;
	cout<<"Size sex = " <<sizeof(p.sex)<<endl;
	cout<<"Size age = " <<sizeof(p.age)<<endl;
	cout<<"Size height = " <<sizeof(p.height)<<endl;
	cout<<"Size weight = " <<sizeof(p.weight)<<endl;
	cout<<"Size persion_t = " <<sizeof(p)<<endl; // 48

	//ra 48 chứ kp 41 vì giữa các thành viên có 1 khoảng bộ nhớ trống (padding memory)
}