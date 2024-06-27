/*Lấy kích thước vector bằng size 
   hàm size là 1 thành viên trong class -có tác dụng lấy kích thước 
   // cú pháp  vt.size() 

   vt : vector cần kiểm tra  

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> name{22,12,4,5,6};
	cout<<name.size()<<endl;
	return 0;
}

*/

/*Thay đổi kích thước bằng resize 
    vt.resizesize(n)  
n - kích thước cần thay đổi
- if(n<size) các phần tử thừa sẽ bị xóa
- if(n>size) thì các giá trị mặc định của kiểu dữ liệu sẽ đc thêm vào 
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> name{1,2,3,4,5,6,7,8,9};
	cout<<name.size()<<endl;
	name.resize(5);

	for(auto itr = name.begin() ; itr != name.end(); itr++)
		cout<<*itr<<" ";
	cout<<endl;

	name.resize(10);
	for(auto itr = name.begin() ; itr != name.end();  itr++)
		cout<<*itr<<" ";
	cout<<endl;
	return 0;
}