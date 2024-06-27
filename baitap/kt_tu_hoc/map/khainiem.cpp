/*- Map trong C++ là một tập hợp các phần tử được sắp xếp theo thứ tự cụ thể, 
    mà mỗi phần tử trong đó được hình thành bởi sự kết hợp của một cặp khóa và giá trị (key & value), với mỗi khóa là duy nhất trong map.
  - Trong map, các khóa (key) được sử dụng để sắp xếp và xác định giá trị (value) tương ứng được liên kết với nó.
    Mỗi khóa trong map là duy nhất và không được phép trùng lặp. Các giá trị trong map thì có thể trùng lặp,
    chúng có thể thay đổi giá trị, cũng như là được chèn hoặc xóa khỏi map.
  - Về mặt tốc độ xử lý thì map có khả năng tìm kiếm dữ liệu theo khóa với tốc độ cực khá cao là O(log N)

  -Nếu như lớp map quản lý cặp đối tượng key/value, vậy đối tượng nào sinh ra được cặp đối tượng đó.
   Để sinh ra cặp đối tượng key/value cần sử dụng lớp pair, lớp pair nằm  trong thư viện utility. 
   Trước khi tìm hiểu về lớp map cần biết về lớp pair.
*/

/*- Cấu trúc dữ liệu map trong C++ thuộc dạng Red–black tree (cây đỏ đen)
    một cây nhị phân, là một cấu trúc dữ liệu trong khoa học máy tính để tổ chức các thành phần dữ liệu có thể so sánh.

  - Chúng ta cần đặc biệt lưu ý 3 điểm sau đây về Cấu trúc dữ liệu map trong c++:
    + Trong các Node sẽ lưu giữ cặp khóa:giá trị (key & value) cũng như con trỏ của các Node con (trái, phải) của nó.
    + Các giá trị trong Node thỏa mãn điều kiện giá trị của Node con bên trái < Giá trị Node cha < Giá trị của Node con bên phải. 
      Do trong map không cho phép các khóa trùng nhau nên dấu < được sử dụng.
    + Độ sâu của các Node bằng nhau và cây Node thì cân bằng.

  - Nhờ vào cấu trúc dữ liệu kiểu này mà chúng ta có thể tìm kiếm nhị phân trong map, qua đó có thể tìm kiếm trong map với tốc độ cao O(Log N).
  - pair cho phép gộp 2 đối tượng thành 1 cặp, 2 đối tượng có thẻ cùng kiểu hoặc khác kiểu, với thuộc tính first là key và second là value.

  - Tuy vậy thì giữa chúng có 3 điểm khác biệt rất rõ ràng như sau:
    + Phần tử trong set tạo bởi 1 giá trị, trong khi trong map tạo bởi một cặp khóa và giá trị.
    + Phần tử trong set được sắp xếp theo giá trị của chúng, còn trong map thì theo khóa của chúng
    + Vùng bộ nhớ chứa set sẽ nhỏ hơn so với một map có cùng số phần tử, do trong map ngoài giá trị thì còn lưu trữ cả key nữa
*/

/*std::map - 
#include<map> 
using namespace std;
int main() {
map<std :: string, int> mp;
map<std :: char, double> mp
*/


/*Khai báo 1 map 
map< k_type, v_type> mp      // ví dụ : map<double , string> uses;
mp  : tên biến map
k_type : kiểu dữ liệu của key
v_type : kiểu dữ  liệu của value */

/*khai báo nhiều map  
map< k_type, v_type> mp ,mp2,mp3,...; 
*/ 

/*Gán gt 
mp[key] = value 
key và value là phần tử cần gán vào map 
ví dụ :  map<string , int > mp    - mp["chung"]= 3 
*/

/*Khởi tạo map 
map<k_type , v_type >   mp = {{k1,v1}, {k2, v2}, {k3,v3} , ...};
k, v : các cặp key và value 

- Lưu ý do mỗi khóa trong map là duy nhất, nên nếu chúng ta chỉ định các phần tử có cùng khóa
 thì dù giá trị của chúng có giống hay khác nhau thì chỉ có duy nhất phần tử viết đầu tiên sẽ được lưu vào trong map mà thôi.
*/

#include<iostream>
#include<map> 
using namespace std;

int main(){
	map<string , int> mp = {
		{"aaa",10},
		{"bbb",20},
	};

	for(auto x: mp)
		cout<<x.first<<" : "<<x.second<<'\n';
	return 0;
}