/*dùng 3 hàm 
- hàm front() : cắt ký tự đầu tiên  từ string
- hàm back() : cắt ký tự cuối cùng từ string
- hàm substr() : cắt 1 phạm vi từ string
*/ 


/*hàm front : cắt ký tự đầu tiên- là 1 thành viên trong class std::string
có tác dụng tham chiếu đến ký tự đầu tiên trong chuỗi
- nhờ hàm front : t k những có thể cắt ra giá trị của ký tự đầu tiên trong string,
mà nó còn có thể thay đổi giá trị của ký tự đầu tiên đó 

=>>   str.front() 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str ="Hello world";

	// tạo tham chiếu đến kí tự đầu tiên của chuỗi string
	//char strr =str.front();
	//cout<<strr<<endl; //H

	cout<<str.front()<<endl; //H
	// thây đổi kí tự đầu tiên 
	str.front()= 'K';
	cout<<str<<endl; //Kello world
	return 0;
}

*/



/*Cắt chuỗi cuỗi ký tự bằng hàm back - là 1 thành viên thuộc class std::string
có tác dụng tham chiếu đến ký tự cuối cùng trong chuỗi string
- k những có thể dùng back để cắt kí tự cuối cùng mà còn có thể thay đổi giá trị cuối cùng đó

=>>  str.back() 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str ="Helllo";

	//tạo tham chiếu đến cị trí cuối cùng
	char str1 =str.back();
	cout<<str1<<endl;
	//cout<<str.back()<<endl; //o

     //thay đổi kí tự cuối cùng
	str.back()='d'; //Hellld
	cout<<str<<endl;
	return 0;
}
*/


/*Cắt 1 phạm vi string = substr */
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str="abcdefghijk";
	cout<<str.substr(3,5)<<endl; // cắt từ vị trí 3 và 5 ký tự
	return 0;
}
