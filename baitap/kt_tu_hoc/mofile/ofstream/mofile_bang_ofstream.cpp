// là 1 class cung cấp chức năng của 1 luồng file dầu ra

// 1 số mode bắt buộc phải dùng y như v
// std::ios::out : mở file để ghi - và xóa nội dung cũ
// std::ios::in  : mở để đọc 
// std::ios::app : mở để ghi chèn
// std::ios::ate : sau khi mở thì di chuyển về vị trí cuối file
// std::ios::trunc: mở để ghi tương tự out
// std::ios::binary: mở file nhị phân


// lấy và thay đổi vị trí đọc file
// Để lấy và thay đổi vị trí đang đọc và ghi file hiện tại, chúng ta sử dụng tới hàm thành viên seekp() trong class ofstream.
// std::ios::beg : di chuyển tới đầu file
// std::ios::cur : lấy vị trí hiện tại trong file
// std::ios::end : di chuyển tới cuối file


#include<bits/stdc++.h>
using namespace std;

int main(){
	ofstream ofs;  // khai báo stream
	ofs.open("same.txt"); // mở file
	if(!ofs) cout<<"mo file that bai\n"; // k mở đc file
	//else ofs<<"abc"<<std::endl; // mở đc thì ghi vào
	cout<<"vi tri hien tai "<<ofs.tellp()<<endl;
	ofs<<"\nabc"<<endl;
	cout<<"vi tri hien tai "<<ofs.tellp()<<endl;
	ofs.seekp(-2,ios::cur); // dịch chuyển vị trí lùi 2 ô
	cout<<"vi tri hien tai "<<ofs.tellp()<<endl;
	//ofs.close();// đóng file
}
