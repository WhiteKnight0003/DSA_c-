/*Có 22 cách để sao chép struct 
   - sử dụng toán tử 
   - sử dụng con trỏ 
  */

/* sử dụng toán tử 
#include<iostream>
using namespace std;

typedef struct {
	char name[20];
	char sex[10];
	int age;
	double height;
	double weight;
} person;


int main(){
	person p1 = {"Tom", "M", 19, 180.2 , 70.5};
	person p2;

	p2=p1; // sao chép 1 sang 2 ;

	cout<<p2.name<<" "<<p2.sex<<" "<<p2.age<<" "<<p2.height<<" "<<p2.weight<<endl;
	return 0;
}
*/


// sử dụng con trỏ 
#include<iostream>
using namespace std;

typedef struct{
	char name[20];
	char sex;
	int age ;
	double height;
	double weight;
} person;

int main(){
	person chung1 = {"chung",'M',21,173.6,55};
	person *p1;
	p1=&chung1;

	person chung2,*p2;
	p2=&chung2;

	*p2=*p1;
	cout<<chung2.name<<" "<<chung2.sex<<" "<<chung2.age<<" "<<chung2.height<<" "<<chung2.weight<<endl;
	return 0;
}