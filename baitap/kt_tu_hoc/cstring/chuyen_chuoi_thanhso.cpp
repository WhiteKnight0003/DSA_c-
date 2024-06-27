/*Chuyển string sang int  - hàm atoi() - thuộc cstdlib
atoi(str) 
- nếu k thể chuyển - sẽ trả về 0
- nếu trong chuỗi có cả thành phần chuyển đc + k chuyển đc thì sẽ đc kq là phần chuyển đc
- nếu ở đầu chuỗi chỉ định có kí tự trắng thì hàm atoi sẽ bỏ qua cho đến khi tìm thấy kí tự khác kí tự trắng
 

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char str[20] = " \n123ab"; //123
	cout<<atoi(str)<<endl;
	return 0;
}
*/


/*Chuyển string sang long 
hàm atol - atol(str) cũng như hàm atoi 

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char str[20] = "aaa";
	cout<<atol(str)<<endl;
	return 0;
}

*/


/*chuyển string sang float
hàm atof(str) như hàm atoi*/
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char str[20]= "11.22abss";
	cout<<atof(str)<<endl; //11.22
	return 0;
}