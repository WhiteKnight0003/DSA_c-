/* xoá phần tử cuối cùng - dùng hàm pop.back()  
   - là 1 thành viên trong class  : có tác dụng xóa phần tử cuối cùng trong vector
     cũng như giảm độ dài của nó đi 1 đơn vị 

   - cú pháp : v.pop_back() 

   - Hàm pop_back thuộc kiểu void, do đó nó sẽ không trả giá trị. 
     Bởi vậy nó sẽ xóa phần tử cuối cùng trong vector chứ không trả về phần tử đó. 
     Trong trường hợp muốn lấy phần tử cuối cùng trong vector, hãy sử dụng tới hàm back để thay thế.
   

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5};
	int a= number.back(); // lấy phần tử cuối cùng 
	number.pop_back() ;  // xóa phần tử cuối cùng 
	cout<<a<<endl;
	for(auto x: number)
		cout<<x<<" ";
	return 0;
}

*/


/*xóa 1 phần tử tại vị trí i bằng hàm erase  
   - là 1 thành viên trong class  : có tác dụng xóa 1 or nhiều phần tử trong vector
     cũng như giảm độ dài của nó đi 1 đơn vị 

     cú pháp : v.erase( v.begin()+i ) 

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5,6};

	number.erase(number.begin() + 3);
	for(auto itr = number.begin() ; itr != number.end() ; itr++)
		cout<<*itr<<" ";

	return 0;
}

*/


/*xóa các phần tử trong 1 phạm vi bằng hàm erase 
  cú pháp : v.erase( v.begin() + start ,v.begin()+end ) 
  // cắt từ vị trí start đến end-1 
  */

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,5,6,7};
	number.erase(number.begin() + 2 , number.begin()+ 4);

	for(auto x: number)
		cout<<x<<" ";
	return 0;
}