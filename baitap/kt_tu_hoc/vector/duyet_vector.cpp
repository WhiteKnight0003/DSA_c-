/*Có 3 cách duyệt vector 
 - dùng vòng lặp và index 
 - dùng vòng lặp dựa trên phạm vi 
 - dùng iterator */

/* dùng vòng lặp và index
   - Bằng cách sử dụng vòng lặp for và hàm size() để lấy số phần tử trong vector và chỉ định số vòng lặp, 
     chúng ta có thể truy xuất lần lượt tới các phần tử trong vector và thực hiện việc duyệt vector


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{2,7,11,9};
	for(int i=0; i< number.size() ;i++)
		cout<<number[i]<<endl;

	return 0;
}

*/


/*dùng vòng lặp dựa trên phạm vi 
for( auto &x : v){
	// xử lý 
}

v : tên vector 
x : là tên 1 biến dùng để gán từng phần tử đc lấy từ vector
auto : kiểu suy luận giúp tự xác định kiểu dữ liệu


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{2,8,99,4};
	for(auto x: number)
		cout<<x<<endl;
	return 0;
}

*/

/*dùng iterator 
   - Trong C++, các kiểu dữ liệu như vector, list, map đều được thêm một
    chức năng là iterator nhằm giúp biến chúng thành các trình lặp để dễ dàng xử lý.


     for(auto itr = v.begin() ; itr != v.end() ; itr++){
	    // xử lý
     }

     v : tên vector
     itr : iterator 
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> name{22,5,6,7,8};
	for(auto itr =name.begin() ; itr != name.end() ;itr++)
		cout<<*itr<<endl;
	return 0;
}