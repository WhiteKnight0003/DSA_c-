#include<bits/stdc++.h>
using namespace std;
// vector<kiểu dữ liệu > tên_vector
// push_back() - emplace_back() - thêm phần tử vào cuối vector
// front() cắt phần tử đầu tiên
// back() cắt phần tử cuối cùng
// dùng vòng lặp tại điểm muốn cắt và điểm kết thúc và dùng push_back để cắt 1 phạm vi
// size() lấy kích thước 
// pop_back() xóa phần tử cuối cùng
// erase(v.begin()+start , v.begin()+end) xóa phần tử trong phạm vi
// reverse(v.begin(), v.end()) // đảo ngược vector
// sort(a,a+n) // sắp xếp vector
// clear : làm trống vector
int main(){
	// duyệt vector
	for(auto x : tên_vector)
		cout x;
	// hoặc
	for(vector<int>::iterator it =v.begin(); it != end();++it)
		cout<<*it;
	// hoặc
	for(auto it =v.begin(); it != end();++it)
		cout<<*it;
	// in ra 1 vị trí bất kì
	// cout<<v[2]<<endl;
	// hay cout<<*(v.begin()+2)<<endl;
	 
	int n; cin>>n;
	vector<int> a(n); // vector có n phần tử
	for(auto &x: a)
		cin>>x;

    vector<int> a(n,100);// vector có n phần tử mỗi phần tử mang gt 100

    // cắt string vào vector
    string s ="ngon ngu  lap trinh java";
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss>tmp){
    	v.push_back(tmp); // thêm chuỗi chắn ra vào vector
    }
    for(string x :v)
    	cout<<x;
}