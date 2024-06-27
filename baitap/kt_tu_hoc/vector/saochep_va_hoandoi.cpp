/*sao chép 
 - deque trong c++ thuộc kiểu dữ liệu đối tượng
  do vậy khác với các kiểu dữ liệu nguyên thủy , cta k thể dùng toán tử = để gán 
  và so chép 1 vector vào 1 vector mới 

   cú pháp : vector<type> vt_dest(vt_src) 
   vt_src : vector nguồn để copy 
   vt_dest : vector đích để dán kq sao chép 

#include<iostream>
#include<vector>
using namespace std;

void dump(vector<int>& v){
	for(auto x: v)
		cout<<x<<" ";
}

int main(){
	vector<int> number{1,2,3,4,5,6,7};
	vector<int> kq(number);

	dump(kq);
	return 0;
}

*/


/*hoán đổi 2 vector 
deque swap - 1 thành viên trong class , có td hoán đổi 2 vector 
           - hoán đổi 2 vector cho nhau , làm thay đổi nội dung + độ dài của chúng 

          - cú pháp : vt1.swap(vt2); */

#include<iostream>
#include<vector>
using namespace std;

void dump(vector<int>& v){
	for(auto x: v)
		cout<<x<<" ";
}
int main(){
	vector<int> number1{1,2,6,7,8,9};
	vector<int> number2{3,4,5,6,7};

	number1.swap(number2);
	dump(number1);
	cout<<"\n";
	dump(number2);
	return 0;
 }
