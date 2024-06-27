/*Có 2 phương pháp để tìm kiếm chuỗi 
- hàm find() : tìm 1 ký tự or 1 chuỗi ký tự từ đầu string
- hàm rfind() : tìm 1 ký tự or 1 chuỗi ký tự từ cuối string */


/*Tìm kiếm bằng find() - là 1 hàm trong class std::string  
- có tác dụng tìm vị trí xuất hiện đầu tiên của 1 or 1 chuỗi ký tự chỉ định từ đầu
đến cuối string 
=>> cú pháp : base.find(str,pos) 

base : chuỗi ban đầu
str : ký tự or chuỗi ký tự
pos : vị trí tìm kiếm - nếu bỏ pos : mặc định tìm từ đầu dãy
- hàm find sẽ trả về vị trí index tìm thấy đầu tiên của đối tượng cần tìm kiếm
trong string ban đầu . Và nếu đối tượng đó k tồn tại trong string , giá trị lớn nhất
của kiểu dữ liệu size_t sẽ đc trả về 

#include<iostream>
#include<string>
using namespace std;

int main(){
	string str{"letienchung"};
	cout<<str.find('e',3)<<endl; // tìm ký tự e đầu tiên xuất hiện từ vị trí thứ 3(từ kí tự t)

	cout<<str.find('e')<<endl; // tìm ký tự e đầu tiên xuất hiện từ đầu chuỗi 

	//kq khi k tìm thấy ký tự or chuỗi chỉ định
	cout<<str.find("aaa")<<endl;
	return 0; // 4294967295  
}

*/


/*Hàm rfind Hàm rfind là một hàm thành viên trong class std:string, 
có tác dụng vị trí xuất hiện đầu tiên của một hoặc một chuỗi ký tự chỉ định từ cuối lên đầu string 
tìm kiếm một đối tượng từ phải qua trái trong string chỉ định.
=>> cú pháp base.rfind(str,pos) - như hàm find*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string base = "Good School";
    //Tìm vị trí xuất hiện đầu tiên từ cuối string của ký tự
    cout << base.rfind('o') << endl;

    //Tìm vị trí xuất hiện đầu tiên từ đầu string của chuỗi ký tự
    cout << base.rfind("oo") << endl;
    
    //Tìm vị trí xuất hiện đầu tiên từ vị trí thứ 3 lên đầu string
    cout << base.rfind("oo", 3) << endl;

    //Kết quả khi không tìm thấy ký tự chỉ định trong string
    cout << base.rfind("m") << endl;


    return 0;
}