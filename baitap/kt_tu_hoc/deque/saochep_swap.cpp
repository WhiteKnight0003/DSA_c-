// sao chép - dùng hàm dest()
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,2,3,4,5};
	deque<int> kq(num);
	deque<int> num1{6,7,8};
	
	for(auto x: kq)
		cout<<x<<" ";
	cout<<endl;
	num1.swap(num);

	for(auto x: num)
		cout<<x<<" ";
	cout<<endl;

	for(auto x: num1)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}