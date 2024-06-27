// tính tổng bằng accumulate - thuộc numeric 
#include<iostream>
#include<deque>
#include<numeric>
using namespace std;

int main(){
	deque<int> num{1,2,3,4,6};
	//  int a= accumulate(num.begin(), num.end(), 0); // 0 giá trị ban đầu của tổng
	// cout<<a;
	int sum=0;
	for(auto x: num)
		sum+=x;
	cout<<sum;
	return 0;
}