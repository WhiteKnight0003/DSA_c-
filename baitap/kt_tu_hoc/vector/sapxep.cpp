/* sắp xếp tăng dần với hàm sort vector
   - sort vector là 1 thành viên trong class - thuộc header : algorithm
   - có td sắp xếp tăng dần or giảm dần , và nó làm thay đổi vector ban đầu

   - cú pháp :  sort(v.begin() ,v.end() );

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dump(vector<int>& v){
	for(auto x: v)
		cout<<x<<" ";
}

int main(){
	vector<int> number{1,6,2,4,8,9,3};

	sort(number.begin() , number.end() );
	dump(number);
	return 0;
}

*/


//sắp xếp giảm dần với sort
// thêm đối số : greater<type>()
// cú pháp :      sort(v.begin() , v.end(), greater<type>() );

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dump(vector<int>& v){
	for(auto x: v)
		cout<<x<<" ";
}

int main(){
	vector<int> number{1,5,6,2,7,9,3,4};
	sort(number.begin() , number.end(), greater<int>());
	dump(number);
	return 0;
}

//vetor có các phần tử được tạo bởi các kiểu tham chiếu
 như class hay struct thì chúng ta cần dùng phương pháp khác mới có thể sắp xếp được chúng.