/*Có 2 phương pháp để copy string 
- hàm copy 
- hàm substr */

/*Hàm copy : là 1 thành viên trong class std::string , có tác dụng sao chép 1 phần
or toàn bộ chuỗi string ban đầu bằng cách chỉ định vị trí cũng như số ký tự cần sao chép
 
=> cú nháp : str.copy(des,length,pos) 
des : mảng chứa ký tự kq 
pos : vị trí bắt đầu copy 
length : dộ dài cần copy 
- hàm copy sẽ trả về số ký tự đã copy từ str vào des
- vì copy sẽ k có \0 - nên cần thêm vào sao chuỗi kq
*/


/*Copy n kí tự đầu 
#include<iostream>
#include<string>
using namespace std; 

int main(){
	string str{"abcdefghijk"};
	char des[100]; //khai báo mảng kí tự chứa kq
	size_t length;
	length = str.copy(des,6); //copy 6 ký tự đầu từ str vào des
	des[length]='\0';  //thêm \0 vào cuối
	cout<<des<<endl;
	return 0;
} 
*/

/*Copy n kí tự từ vị trí m trong string
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"abcdefghijk"};

	char des[100];
	size_t length;

	length=str.copy(des,3,2);
	des[length]='\0';
	cout<<des<<endl;   //cde
	return 0;
}
*/


/*Copy toàn bộ chuỗi string 
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"abcdefghijk"};
	char des[100];
	size_t length;

	length=str.copy(des,str.size()); //copy toàn bộ chuỗi
	des[length] = '\0';
	cout<<des<<endl;
	return 0;
}
*/ 



/*copy = substr */
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str("abcdefghijk");
	string str1 =str.substr(1,6); //copy từ 1 đến 6 từ vị trí 0
	cout<<str1<<endl;
	return 0;
}