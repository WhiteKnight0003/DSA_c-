/*Mảng cấu trúc 
   - là mảng chứa các thực thể được tạo ra từ 1 kiểu cấu trúc 
   -do đó chúng ta có thể truy cập vào các thực thể trong mảng cấu trúc thông qua index
      cũng như là truy cập vào các thành viên của từng thực thể theo cách thông thường.
*/



// khai báo mảng cấu trúc  struct_name array_name[length] = {value1 , value2, value3, ....}; 
// struct name : tên kiểu cấu trúc        array_name : tên mảng 
#include<iostream>
using namespace std;

typedef struct {
	char name[20];
	char sex;
	int age ;
	double height;
	double weight;
} person_t;

int main(){
	person_t p[3] = {{"Bob" , 'M', 19 , 170.2 , 60.5},
	                 {"Tom" , 'W', 22 , 180.6 , 81.2},
	                 {"Alice" , 'M', 9 , 120.6 , 32.1}};

	// truy cập vào thực thể trong mảng cấu trúc và gán thực thể vào m biến
	person_t p0 = p[0];

	/*truy cập thành viên của thực thể trên và gán vào 1 mảng chuỗi 
	string name = p0.name; // string name = p[0].name 
	int age = p0.age;
	cout<<name<<age;
	*/

	double height_sum =0, weight_sum=0;

	for(short i=0 ; i<3 ;i++){
		height_sum += p[i].height;
		weight_sum += p[i].weight;
	}

	double height_medium = height_sum/3;
	double weight_medium = weight_sum/3;

	cout<< "Chieu cao trung binh = "<< height_medium <<endl;
	cout<< "can nang trung binh = "<< weight_medium <<endl;
	return 0; 
}


