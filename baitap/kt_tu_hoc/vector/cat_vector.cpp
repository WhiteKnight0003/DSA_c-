/*Có 3 cách đơn giản để cắt vector
  - hàm front() cắt phần tử đầu tiên từ vector
  - hàm back()  cắt phần tử cuối cùng từ vector 
  - cắt 1 phạm vi 
 */


/*hàm front() 
  - là 1 thành viên trong class - có td tham chiếu đến phần tử đầu tiên trong vector
  - cú pháp : vt.front() 
  - k dùng front cho vector trống 

#include<iostream>
#include<vector>
using namespace  std;

int main(){
	vector<int> number{1,22,44,3};

	int a=number.front();
	cout<<a<<endl;

	// có thể thay đổi vị trí đấu tiên của vector
	number.front() = 5;
	for(auto itr = number.begin() ; itr != number.end() ;itr++)
		cout<<*itr<<" ";
	return 0;
}

*/

/*hàm back 
  - là 1 thành viên trong class - có td tham chiếu đến phần tử cuối cùng trong vector
  - cú pháp : vt.back() 
  - k dùng back cho vector trống 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5};

	int a=number.back();
	cout<<a<<endl;

	// thay đổi phần tử cuối cùng của vecto
	number.back() =10;
	for(auto x: number)
		cout<<x<<" ";
	return 0;
} 

*/



/*cắt 1 phạm vi trong vector - dùng hàm push_back() 
Để cắt một phạm vi từ vector ban đầu, chúng ta sử dụng vòng lặp hoặc trình lặp 
để truy cập tuần tự vào các phần tử trong vector để lấy các giá trị trong phạm vi cần cắt. 
Sau đó, chúng ta lưu các giá trị này vào vector kết quả là xong.

*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5,6};
	vector<int> kq;

	// khai báo phạm vi cắt
	int start =2,end =4;

	for(short i=start ; i<=end ;i++)
		kq.push_back(number[i]);

	for(auto x: kq)
		cout<<x<<" ";
	return 0;
}