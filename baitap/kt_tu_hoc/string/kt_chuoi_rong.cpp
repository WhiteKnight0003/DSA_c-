/*Có 2 cách kiểm tra chuỗi rỗng 
- dùng hàm empty : kt trực tiếp 
- dùng hàm length or hàm size : kt chuỗi rỗng thông qua độ dài string */


/*hàm empty : 1 thành viên trong class std::string - có td kt chuỗi rỗng 
cú pháp : str.empty()  - hàm empty trả về 1 (true) và 0 (false)


#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1{"aaaaa"};
	cout<<str1.empty()<<endl; //0

	string str2;
	cout<<str2.empty()<<endl; //1
	return 0;
}*/


/*Dùng length và size*/
#include<iostream>
#include<string>
using namespace std;
int check(string str){
	int s=0;
    if(str.length()==0) 
    	s=0;
    else 
    s=1;
    return s;
}

void ccheck(string str){
	if(check(str)==0) cout<<"Chuoi rong"<<endl;
	if(check(str)==1) cout<<"Khong phai chuoi rong"<<endl;
}
int main(){
	string str1{"aaaa"};
	ccheck(str1);

	string str2;
	ccheck(str2);
	return 0;


}