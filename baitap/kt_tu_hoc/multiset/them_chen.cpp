/*Để chèn phần tử vào multiset trong C++, chúng ta sử dụng tới hàm thành viên insert(). 
Do khi chèn phần tử vào multiset thì vị trí chèn sẽ được tự động quyết định tùy thuộc vào bộ sắp xếp trong multiset, 
nên lưu ý khác với các containers khác như list hay vector thì trong multiset không tồn tại</> các hàm push_back() hay push_front()
 để thêm phần tử vào đầu hay cuối multiset.
*/
#include<iostream>
#include<set>
using namespace std;

struct cmp{
	bool operator() (int a, int b){
		return a<b;
	}
};
int main(){
	multiset<int,cmp> num{1,6,3,4,2,1,3,2,1};

	// num.insert(5); thêm 1 phần tử 

	int num1[] ={5,9,2};

	num.insert(num1 , num1+3);
	for(auto x: num)
		cout<<x<<" ";
	return 0;
}