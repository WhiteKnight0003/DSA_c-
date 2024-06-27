/*Để xóa phần tử trong set trong C++, chúng ta sử dụng tới hàm thành viên erase().
 Do khi xóa phần tử trong set thì các phần tử còn lại sẽ được tự động sắp xếp, nên lưu ý khác với các containers
  khác như set hay vector thì trong set không tồn tại</> các hàm pop_front() hay pop_back() để xóa phần tử ở đầu hay cuối set. */

/* cú pháp :   v.erase(itr)  or v.erase(value) 
Nếu sử dụng erase(itr) thì hàm sẽ xóa đi phần tử tại vị trí mà trình lặp xác định bởi itr chỉ đến.
Và nếu sử dụng erase(value) thì hàm sẽ tìm phần tử có giá trị bằng với value trong list và tiến hành xóa nó đi.
*/

/* xóa 1 phần tử 
#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> num{1,2,3,4,5,6,7};

	auto itr=num.begin();
	int n = 3;
	for(int i=1;i<=n;i++){
			++itr;
	}
	
	num.erase(itr);

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}
*/ 

 //xóa nhiều phần tử 
#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> num{1,2,3,4,5,6,7};

	auto itr_start =num.begin();
	auto itr_end = num.begin();
	int start = 2, end =4;
	for(int i=1;i<=start;i++)
			++itr_start;
	for(int i=1 ;i<=end;i++)
		++itr_end;

	
	num.erase(itr_start, itr_end); // xóa vị trí 2 3 tức  2<= itr<4

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}

