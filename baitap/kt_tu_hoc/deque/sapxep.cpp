// dùng hàm sort - thuộc class( algorithm ) - có chức năng sắp xếp

#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,5,6,2,3,9,5,4};
	sort(num.begin() , num.end());
	for(auto x: num)
		cout<<x<<" ";
	cout<<endl;


	sort(num.begin() , num.end(), greater<int>());
	for(auto x: num)
		cout<<x<<" ";
	return 0;
}

