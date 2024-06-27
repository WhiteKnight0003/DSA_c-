/*Dùng 2 hàm 
hàm template 
hàm to_string*/

/*Chuyển float và int sang string bằng template - trước c++11
phải dùng typeid.name() để kiểm tra kiểu dữ liệu trc r ms đổi bằng template 

#include<iostream>
#include<sstream>
#include<typeinfo>
using namespace std;

template <typename T> string str(const T& t){
	ostringstream os;
	os <<t;
	return os.str();
}
int main(){
	int a=123;
	float b=3.45;

	cout<<typeid(a).name() <<endl;  // kiểu của a  //i
	cout<<typeid(b).name() <<endl; // kiểu của b   //f

	cout<<typeid(str(123)).name()<<endl;
	cout<<typeid(str(3.45)).name()<<endl;
	return 0;
}

*/


/*Chuyển int , float ,... sang string bằng to_string  - c++11 trở đi

=>> to_string(num)  hay   typeid(to_string(num)).name()  */

#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
	int a =123;
	float b= 3.45;

   cout<<typeid(to_string(a)).name()<<endl;
   cout<<typeid(to_string(b)).name()<<endl;
   return 0;
}