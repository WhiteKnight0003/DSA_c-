// đảo ngược bằng reverse - thuộc algorithm
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,2,3,4,5,6,7};
	reverse(num.begin(), num.end());

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}