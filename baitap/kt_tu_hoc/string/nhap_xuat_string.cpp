/*Nhập xuất string k có khoảng trắng
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	cin>>str;
	cout<<str<<endl;
	return 0;
}
*/


/*Nhập string có khoảng trắng = getline() 
getline(cin,str,delimiter )
cin - để chỉ định stream nhận dữ liệu , giúp ta nhận đầu vào tiêu 
chuẩn từ bàn phím
str - tên biến string
delimiter - ký tự phân tách đc sử dụng để tách string nhập vào
nếu delimiter bị bược bỏ thì sử dụng giá trị mặc định là kí tự /n
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string str;
	getline(cin,str,' '); 
	cout<< "Chuoi vua nhap la : ";
	cout<<str;
	return 0;

	/* ví dụ delimeter = ' '
	chuỗi nhâp vào :   aaa bbb ccc
	thì cắt chuỗi từ kí tự ' 'đầu tiên chở về đầu chuỗi
	hay ra kq : aaa
	*/
}
