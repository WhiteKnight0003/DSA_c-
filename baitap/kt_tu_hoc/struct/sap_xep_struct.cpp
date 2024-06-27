/*logic sắp xếp 
  - sắp xếp struct là sắp xếp các struct là phần tử của 1 mảng cấu trúc
*/

// ví dụ 
#include<iostream>
using namespace std;

#define swap(type,x,y) do{type temp=x;x=y;y=temp;}while(0)

typedef struct {
	char name[20];
	char sex;
	int age;
	double height;
	double weight;
} person;


#include <iostream>
#include <cstring>
using namespace std;

/*Định nghĩa macro SWAP để hoán đổi phần tử trong mảng chỉ định*/
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)

#define PERSON_NUM 5

//Khai báo kiểu cấu trúc
typedef struct {   
    char name[20];
    char sex; 
    int age;
    double height; 
    double weight; 
} person_t;

//Tạo hàm in kiểu cấu trúc
void show_struct(person array[], int n){
    for (short i = 0; i < PERSON_NUM; i++) {
      cout <<array[i].name<<' '<<array[i].sex<<' '<<array[i].age<<' '<<array[i].height<<' '<< array[i].weight<<endl;
   }
    cout <<endl;
}

// sap xếp tăng dần theo chiều cao 
void arc_order_height(person array[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1;j<n;j++)
			if(array[i].height < array[j].weight)
				swap(person, array[i], array[j]);
}

int main(){
	person p[3] = {{"Bob", 'M', 19, 165.4, 72.5},
                  {"Ali", 'F', 19, 161.7, 44.2},
                  {"Tom", 'M', 20, 175.2, 66.3}};
    arc_order_height( p, 3);
    show_struct( p, 3);
    return 0;

}
 //chúng ta có thể sắp xếp các struct có trong mảng theo các tiêu chí như chiều cao, cân nặng, hoặc là tên người theo thứ tự
