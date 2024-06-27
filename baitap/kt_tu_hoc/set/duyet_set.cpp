/*do set có kiểu cấu trúc dạng cây nhị phân được tạo ra bởi các Node nên chúng ta không thể truy cập ngẫu nhiên vào phần tử bất kỳ trong một set.
   Do đó chúng ta cũng không thể sử dụng index của các phần tử để truy cập vào nó theo cách thông thường được.
*/

#include<iostream>
#include<set>
using namespace std;

struct cmp{
	bool operator() (int a,int b){
		//return a>b;  sắp xếp giảm
		return a<b; // sắp xếp tăng 
	}
};

int main(){
	set<int,cmp> num;
	num.insert(1); // thêm phần tử
	num.insert(7);
	num.insert(4);
	num.insert(9);

	//for(auto x: num)
	//	cout<<x<<" ";

	for(auto itr =num.begin() ; itr != num.end() ; itr++)
		cout<<*itr<<" ";

	return 0;
}