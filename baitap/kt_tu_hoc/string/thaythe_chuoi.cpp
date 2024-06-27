/*Dùng hàm replace- là 1 thành viên trong class std::string 
- có tác dụng thay thế 1 phạm vi trong string ban đầu bằng 1 nội dung mới 
- phép thay thế chuỗi string bằng hàm replace 

=>> cú pháp : base.replace(pos,len,str) 

base : chuỗi ban đầu
pos : vị trí bắt đầu thay thế - nếu lược bỏ sẽ thay thế từ đầu chuỗi
len : số ký tự của phạm vi cần thay thế từ vị trí pos 
str : chuỗi ký tự dùng để thay thế phạm vi trên

- hàm replace sẽ thay thế 1 phạm vi bắt đầu từ vị trí pos và có độ dài len ký tự
,bằng chuỗi ms str , và trả về chuỗi ban đầu khi đc thay thế 
 
 ** độ dài của phạm vi cần thay thế và của chuỗi dùng thay thế có thể khác nhau 
 và hàm replace sẽ làm thay đổi trực tiếp giá trị của chuỗi string ban đầu 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string base{"aaaaaaaa"};
    string str{"bbb"};

    base.replace(3,2,str);
    cout<<base<<endl; //aaabbbaaa
    return 0;
}*/



//thay thế toàn bộ kí tự 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string base ="aaaaaa";
	base.replace(0,base.length(),"bbbbbbb");
	cout<<base<<endl; // in ra bbbbbb
	return 0;
}

