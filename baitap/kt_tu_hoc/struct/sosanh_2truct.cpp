/*Có 2 cách để so sánh struct 
  - dùng strcmp để so sánh tuengf thành viên trong struct với nhau 
  - dùng memcmp để so sánh kích thước 2 struct */

// strcmp
#include<iostream>
#include<cstring>
using namespace std;

typedef struct {
	char name[100];
	char sex[5];
	int age;
	double height;
	double weight;
} person ;

int compare_struct(person *p1, person *p2){
	//return 1 : khác nhau 
	// return 0 : giống nhau

	// so sách các phần tử cùng loại 
	if(p1->age != p2-> age || p1->height != p2->height || p1->weight != p2->weight)
		return 1;
	if(strcmp(p1->name , p2->name) !=0 || strcmp(p1->sex , p2->sex) !=0)
		return 1;

	return 0;
}

int main(){
	person p1 = {"chung","m",30,179.2,60.2};
	person *pp1;
	pp1=&p1;
	person p2 = {"chungg","m",30,179.2,60.2};
	person *pp2;
	pp2=&p2;

	if(compare_struct(pp1,pp2) == 0) {
        cout << "struct1 giong struct2\n";
    } else {
        cout << "struct1 k giong struct2\n";
    }
    return 0;

}