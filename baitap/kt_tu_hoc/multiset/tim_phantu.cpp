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


// tìm phần tử giống nhau bằng hàm equal_range và xóa chúng 
/* - Hàm equal_range là một hàm thành viên trong class std:multiset, có tác dụng tìm phạm vi của tất cả các phần
 tử giống với giá trị chỉ định trong multiset.
   - cú pháp : st.equal_range(val); 
   - Hàm equal_range() sẽ trả về một cặp giá trị, với giá trị đầu tiên trỏ đến đầu phạm vi, 
     và giá trị thứ hai trỏ đến cuối phạm vi chứa tất cả các phần tử có giá trị giống giá trị chỉ định.

#include<iostream>
#include<set>
using namespace std;

// có thể dùng
 typedef multiset<int>::iterator It;

int main(){
	multiset<int> num{1,2,3,2,7,2,5,2};

	// tìm phạm vi chứa phần tử có gt 2
	pair<It, It> ret = num.equal_range(2);
	num.erase(ret.first, ret.second);
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

#include<iostream>
#include<set>
using namespace std;

int main(){
	multiset<int> num{1,2,3,3,4,5,3}; // 1 2 3 3 3 4 5
	auto itr1 = num.lower_bound(1); // con trỏ ở vị trí phần tử đầu tiên >=1
    auto itr2 = num.upper_bound(4); // con trỏ ở vị trí phần tử cuối cùng  

    num.erase(itr1, itr2); // xóa trong phạm vi [itr1, itr2]
    for(auto x: num)
    	cout<<x<<" ";
    return 0;
}
*/


// tìm phần tử bằng hàm upper_bound 
/* - Hàm upper_bound là một hàm thành viên trong class std::multiset, có tác dụng tìm vị trí phần tử đầu tiên 
     có giá trị lớn hơn giá trị chỉ định trong multiset.
   - cú pháp: st.upper_bound(key); 
   - Hàm upper_bound() sẽ trả về trình lặp trỏ đến vị trí phần tử đầu tiên có giá trị lớn hơn giá trị chỉ định. 
   Và nếu không tìm thấy, hàm sẽ trả về trình lặp trỏ đến vị trí cuối cùng trong map.
   - Trong trường hợp chỉ có một phần tử trong multiset có giá trị giống với giá trị chỉ định thì hàm upper_bound sẽ trả về
    con trỏ chỉ đến phần tử ngay sau nó. Còn nếu có nhiều phần tử có giá trị giống với giá trị chỉ định,
     vị trí của phần tử đầu tiên có giá trị lớn hơn giá trị chỉ định sẽ được hàm upper_bound() trả về.
   - Bằng cách ứng dụng hàm upper_bound() kết hợp hàm upper_bound() mà Kiyoshi đã hướng dẫn ở trên, 
   chúng ta có thể tìm ra 2 vị trí rồi xuất ra các phần tử có trong phạm vi xác định bởi vị trí đó như ví dụ sau:
*/



// đếm số lần xuaats hiện
/*Hàm count là một hàm thành viên trong class std::set, 
có tác dụng đếm số lần xuất hiện của phần tử trong multiset C++
   cú pháp: st.count(val);    */

#include<iostream>
#include<set>
using namespace std;

int main(){
	multiset<int> num{1,2,3,2,7,2,5,2};
	int a= num.count(2);
	cout<<a<<endl;
	//for(auto x: num)
	//	cout<<x<<" ";
	return 0;
}