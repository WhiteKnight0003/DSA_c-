// truy cập phần tử trong map bằng toán tử [] - mp[key]
/* Nếu như key tồn tại trong map, giá trị tương ứng của key sẽ được trả về. Tuy nhiên nếu không tồn tại, giá trị 0 sẽ được trả về
#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string, int> mp;
	mp["chung"] =1;

	cout<<mp["chung"]<<endl;  // 1
	cout<<mp["aaa"]<<endl;  //0
	return 0;
}
*/

/* Truy cập phần tử trong map bằng hàm at()
- Hàm at() trong C++ là một hàm thành viên trong class std:map, có tác dụng truy cập vào phần tử trong map thông qua key của nó.
- Nếu như key tồn tại trong map, giá trị tương ứng của key sẽ được trả về. Tuy nhiên nếu không tồn tại, hàm at() sẽ trả về lỗi out_of_range.

- Cú pháp :  mp.at(key);
*/

#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string, int> mp;
	mp["chung"] = 3;

	cout<<mp.at("chung")<<endl;  // 3
	cout<<mp.at("aaa")<<endl;  // in ra lỗi
	return 0;
}
