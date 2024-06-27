// set là 1 mảng k cho chứa các phần tử trùng nhau
// tất cả các hàm đều có tốc độ o(logn)
// find() : dùng để tìm kiếm - trả về itr
// count() : đếm - trả về gt
// erase() : xóa phần tử
#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> s;
	s.insert(100);// thêm phần tử vào set
	s.size();// kích thước set
	if(s.count(giá trị cần tìm) !=0) // tìm xem phần tử xh trong set k
	if(s.find(giá trị cần tìm) != s.end())
	s.erace(giá trị muốn xóa);
    // or s.erase(s.begin()+i)
    

    int n; cin>>n;
    set<int> s;
    cin.ignore(); // với string
    for(int i=0;i<n;i++){
    	int x; cin>>x;
    	s.insert(x); // thêm x vào set - các phần tử giống nhau chỉ đc tính 1 lần xh

    	string str;
    	getline(cin,str);
    	s.insert(str); // thêm chuỗi vào set
    }
}

