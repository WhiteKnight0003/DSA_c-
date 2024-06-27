// tìm phần tử = hàm n.find(value)
/* - Hàm find() sẽ trả về trình lặp trỏ đến vị trí phần tử, nếu nó tồn tại trong multiset. 
     Và nếu phần tử đó không tồn tại, hàm sẽ trả về trình lặp trỏ đến vị trí cuối cùng trong multiset.

   - Bằng cách ứng dụng hàm find(), chúng ta có thể tìm ra vị trí của phần tử đó trong multiset, rồi kết hợp với hàm clear() để xóa nó đi 


#include<iostream>
#include<set>
using namespace std;

struct cmp{
	bool operator() (int a, int b){
		return a<b;
	}
};

int main(){
	multiset<int> num{1,2,3,2,5,2,7,2};
	auto itr = num.find(2); // tìm phần tử có gt bằng 2

	num.erase(itr); // xóa phần tử đó - chỉ xóa 1 phần tử dù cho giống nhau
	for(auto x: num)
		cout<<x<<" ";
	return 0;
}
*/

// tìm phần tử bằng hàm lower_bound 
/*Tìm phần tử trong multiset C++ bằng hàm lower_bound
  - Hàm lower_bound là một hàm thành viên trong class std::set, có tác dụng tìm vị trí phần tử đầu tiên trong multiset 
    có giá trị lớn hơn hoặc bằng với giá trị chỉ định.
  - cú pháp:  st.lower_bound(val);
  - Hàm lower_bound() sẽ trả về trình lặp trỏ đến vị trí vị trí phần tử đầu tiên có giá trị lớn hơn hoặc bằng với giá trị chỉ định.
    Và nếu không tìm thấy, hàm sẽ trả về trình lặp trỏ đến vị trí cuối cùng trong multiset.
  - Trong trường hợp chỉ có một phần tử trong multiset có giá trị giống với giá trị chỉ định thì hàm lower_bound sẽ trả về 
    con trỏ chỉ đến phần tử đó. Còn nếu có nhiều phần tử có giá trị giống với giá trị chỉ định, 
    vị trí của phần tử đầu tiên có giá trị lớn hơn giá trị chỉ định sẽ được hàm lower_bound() trả về.
 */

#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> num{1,2,3,3,4,5,3}; // 1 2 3 3 3 4 5
	auto itr1 = num.lower_bound(2); // con trỏ ở vị trí phần tử đầu tiên >=1
    auto itr2 = num.lower_bound(4); // con trỏ ở vị trí phần tử đầu tiên >=1
    num.erase(itr1, itr2); // xóa trong phạm vi [itr1, itr2)
    for(auto x: num)
    	cout<<x<<" ";
    return 0;
}
