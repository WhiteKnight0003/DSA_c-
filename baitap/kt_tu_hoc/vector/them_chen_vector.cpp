/*Có 3 cách thêm chèn vector 
  - hàm push_back
  - hàm emplace_back
  - hàm insert*/

/*hàm push_back 
  - là 1 thành viên trong class , có td thêm 1 phần tử vào vị trí cuối cùng trong vector
    và tăng độ dài của nó lên 1 , bằng cách copy or di chuyển gt sang phần tử khâc 

    // cú pháp : v.push_back(value)
    v tên vector
    value gt sẽ đc copy 
    - Nếu phần tử thêm vào có kiểu khác với kiểu của vector thì nó sẽ được chuyển về kiểu của vector trước khi được thêm vào.
    - Hàm push_back thuộc kiểu void, do đó nó sẽ không trả giá trị. Bởi vậy nó sẽ thêm phần tử vào vị trí cuối cùng trong vector chứ không trả về chuỗi kết quả.


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4};
	number.push_back(5);

	for(auto x:  number)
		cout<<x<<" ";
	return 0;
}

*/


/*hàm emplace_back
  - là 1 thành viên trong class , có td thêm 1 phần tử vào vị trí cuối cùng trong vector
    và tăng độ dài của nó lên 1 , bằng cách sử dụng hàm tạo của kiểu của gt đc thêm

    // cú pháp : v.emplace_back(args)
    v tên vector
    args : thông tin đc sử dụng trong hàm tạo value_type tương ứng kiểu gt để tạo nên phần tử 
    - Nếu phần tử thêm vào có kiểu khác với kiểu của vector thì nó sẽ được chuyển về kiểu của vector trước khi được thêm vào.
    - Hàm emplace_back thuộc kiểu void, do đó nó sẽ không trả giá trị. Bởi vậy nó sẽ thêm phần tử vào vị trí cuối cùng trong vector chứ không trả về chuỗi kết quả.
    

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4};
	number.emplace_back(99);
	for(auto x: number)
		cout<<x<<" ";
	return 0;

}
*/


/*Chèn 1 phần tử vào vị trí chỉ định bằng insert 
  // cú pháp : v.insert(p,value) 

  v : vector ban đầu
  value : phần tử cần chèn
  p : trình lặp trỉ đến vị trí cần chèn trong vector

  - Ở đây trình lặp (iterator) là một vòng lặp có tác dụng giống như con trỏ, giúp truy cập đến các phần tử ở vị trí cụ thể trong vector.
  Trong trường hợp cần chỉ đến vị trí index thứ n trong vector, chúng ta sẽ viết trình lặp p như sau:  
       v.begin() +i
       - v.begin() chỉ đến vị trí đầu tiên trong vector, và i là index của vị trí phần tử cần chỉ đến.


       =>> ct đầy đủ    v.insert(v.begin()+i, value);
  */

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5};

	number.insert((number.begin()+4),99);
	for(auto x: number)
		cout<<x<<" ";
	return 0;
}