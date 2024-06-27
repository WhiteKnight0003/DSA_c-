/*khai báo con trỏ hàm 
type (*fp) (para_type_1 , para_type_2, para_type_3, ...);

fp : tên con trỏ hàm 
type - kiểu dữ liệu của con trỏ
para_type - kiểu của các đối số được truyền vào hàm

ví dụ : void (*po1)(int ,int );
*/


/*gán địa chỉ của hàm cho con trỏ hàm 
cú pháp   fp = funct;
fp là tên con trỏ hàm 
funct tên hàm ( function) cần  gán địa chỉ 

ví dụ 

int add(int a, int b){
	return a+b;
}

int main(){
	int (*fp) (int , int);   Khai báo con trỏ hàm 
     fp = add                Gán địa chỉ hàm cho con trỏ
}
*/


/*Gọi 1 hàm bằng con trỏ hàm 
(*fp) (para_1, para_2, para_3,...); 
fp là tên con trỏ hàm 
para là các đối số (parameter) được truyền vào hàm . */

#include<iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}
int main(){
	int m=2, n=5,sum;
	int (*fp)(int ,int); // khai báo con trỏ hàm 
	fp = add;            // Gán địa chỉ hàm cho con trỏ
	sum =(*fp)(m,n);     // gọi hàm bằng con trỏ hàm 
	cout<<sum<<endl;
	return 0;
	// 7
}