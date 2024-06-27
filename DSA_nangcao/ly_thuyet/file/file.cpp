#include<bits/stdc++.h>
using namespace std;

// ifstream : đọc file
// ofstream : ghi file, tạo moi file
// fstream : cả đọc và ghi

int main(){
	ifstream in;
	ofstream out;
	in.open("input.txt",ios::in); // mở để đọc file
	out.open("output.txt",ios::out); // mở để ghi file
	
	// có thể chọn nhiều mode mở 1 lúc
	//in.open("F:/c++/DSA_nangcao/ly_thuyet/file",ios::in); // window là dấu / - và đây là mở bằng đường dẫn tuyệt đối

	if(in.is_open()) // ktra xem có mở đc file k
		cout<<"OK";

	// đọc file bằng toán tử nhập xuất
	int n; in>>n;
	int a[n];
	for(auto x: a){
		in>>x;
		out<<x<<" ";
	}
	in.close();
	out.close(); //hàm đóng file
	
	/*
	ios::in : đọc file
	ios::out : ghi file
	ios::binary : mở kiểu nhị phân
	ios::app : mở file lên nhưng ghi vào cuối file
	ios::ate : đặt vị trí của con trỏ file vào cuối file
	nếu node k được bật thì vị trí con trỏ sẽ ở đầu file
	ios::trunc : ở file để đọc , những nội dung trước đó trong file
	sẽ bị mất hết trước khi ghi nội dung mới
	*/
}