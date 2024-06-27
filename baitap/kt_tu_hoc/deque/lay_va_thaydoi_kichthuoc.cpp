// lấy kích thước - size()

#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5,6};
	cout<<number.size(); // kích thước
	number.resize(3);// thay đổi kích thước

	for(auto x: number)
		cout<<x<<" ";
	return 0;
}