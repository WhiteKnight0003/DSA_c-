#include<bits/stdc++.h>
using namespace std;


/*
vector<kieu du lieu> ten_vector
size() : tra ve kich thuoc vector
push_back(x) : đẩy phần tử x vào cuối vector
front() : lấy phần tử đầu tiên của dãy - tương đương a[0]
back() : lấy phần tử cuối dãy - tương đương a[a.size()-1]
pop_back() : xóa phần tử ở vị trí cuối cùng trong mảng
erase(a.begin()+i) - xóa phần tử tại vị trí i
duyện bằng auto hoặc duyệt bằng i or iterator

đổi số ll x thành string -> hàm to_string(x);
chuyển 1 string về 1 số int -> hàm stoi(x)
chuyển 1 string về 1 số ll -> hàm stoll(x)


reverse(a.begin(), a.end()) // đảo ngược xâu
*/
int main(){
	vector<int> a ; // vector giúp mở rộng mảng và xóa phần tử 1 cách dễ hơn
	a.push_back(2);
	cout<<a[0];
	return 0;
}