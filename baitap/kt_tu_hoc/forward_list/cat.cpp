// hàm back() không tồn tại trong forward_list C++, do forward_list chỉ là danh sách một chiều mà thôi.
#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x; 

	cout<<num.front()<<endl;  // lấy gt đầu tiên
	num.front() = 3; // thay đổi gt đầu tiên 
	for(auto x: num)
		cout<<x<<" ";
	cout<<endl;
	
    return 0;
}