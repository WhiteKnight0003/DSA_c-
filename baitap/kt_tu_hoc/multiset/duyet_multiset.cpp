/*Trong bài multiset trong C++ chúng ta đã biết khác với vector hay mảng, do multiset có kiểu cấu trúc dạng cây nhị phân được tạo ra bởi các Node nên chúng ta không thể truy cập ngẫu nhiên vào phần tử bất kỳ trong một multiset. Do đó chúng ta cũng không thể sử dụng index của các phần tử để truy cập vào nó theo cách thông thường được. */

// duyệt bằng vòng lặp dựa trên phạm vi và iterator
#include<iostream>
#include<set>
using namespace std;

struct cmp{
	bool operator() (int a, int b){
	return a<b;// sắp xếp nhỏ đến lớn 
   }
};
int main(){
	multiset<int> num{1,2,3,1,2,4,2,5,5};
	//for(auto x: num)
	//	cout<<x<<" ";

	for(auto itr = num.begin() ; itr != num.end() ;itr++)
		cout<<*itr;
	return 0;
}