|  5  | 
|  3  | 
|  2  | 
|  1  | 
|_____|  // bị chặn 1 đầu cho vào cuối cùng lấy ra đầu

// Stack là một loại container adaptor, được thiết kế để hoạt động theo kiểu LIFO (Last - 
// in first - out) (vào sau ra trước), tức là một kiểu danh sách mà việc bổ sung và loại bỏ 
// một phần tử được thực hiển ở cuối danh sách. Vị trí cuối cùng của stack gọi là đỉnh 
// (top) của ngăn xếp. 

#include<bits/stdc++.h>
using namespace std;

int main(){
	s.size(); // kích thước
	s.empty(); // true stack nếu rỗng và ngược lại
	s.push(i);// thêm i vào stack;
	s.pop(); // loại bảo phần tử ở đỉnh của stack 
	s.top(); // truy cập tới phần tử ở đỉnh của stack - phần tử đc thêm vào sau nhất
    // tg chạy các hàm 0(1)
}


// lưu từ trong stack

string s;
getline(cin,s);
stringstream ss(s);
string token;
while(ss>>token){
	s.push(token);
}