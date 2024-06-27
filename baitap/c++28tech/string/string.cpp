#include<bits/stdc++.h>
using namespace std;

// lấy độ dài bằng s.length() và s.size()
// có thể truy cập bằng for(auto x: s)
// nối 2 string a b = cách c= a+b or a+=b
// so sánh string như char - cái nào có kí tự giống nhau nhma độ dài dài hơn thì lớn hơn
// hàm a.compare(b) // so sánh a và b 
// nếu a>b trả về 1 - a=b trả về 0  - a<b trả về -1
// b=a.substr(vị trí muốn bát đầu cắt, cắt n kí tự ) // cắt 1 xâu con 
// stoi chuyển string thành số 
int main(){
	//int n; cin>>n; // có 1 dấu cách
	//cin.ignore();// xóa x kí tự trong bộ đệm bàn phám 
	string s;
	getline(cin,s); // nhập string 
	//cout<<s[1]<<endl;  //b  - in ra ký tự tại vị trí i
	//int x=stoi(a); // chuyển string thành int 
	//int s=stoll(a); // chuyển string thành long long

	//string m = to_string(n);// chuyển số thành chuỗi

	stringstream ss(s); 
	// hàm stringstream có tên ss
	string tmp;
	int cnt=0;
	while(ss>>tmp){ // mặc định cắt dấu cách
		// muốn cắt bằng kí tự ngăn cách khác 
		// (ss,tmp,' ') - kí tự ngăn cách vào nằm trong ''
		cout<<tmp<<endl; // cắt các từ trong xâu ra từng dòng
		++cnt; // đếm các từ trong xâu 

	}
	cout<<cnt<<endl;
	return 0;

}