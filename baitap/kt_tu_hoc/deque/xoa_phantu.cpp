// xóa phần tử đầu tiên - pop_front() - thuộc class
#include<iostream>
#include<deque>
using namespace std;

void dump(deque<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>> n;
	deque<int> num(n);

	for(auto &x: num)
		cin>>x;

	num.pop_front(); // xóa phần tử đầu tiên
	dump(num);
	num.pop_back(); // xóa phần tử cuối cùng
	dump(num);

	//v.erase(v.begin() +i)
	num.erase(num.begin() +3); // xóa phần tử ở vị trí chỉ định 
	dump(num);

	num.erase(num.begin() +2, num.begin() +5); // xóa phần tử từ index 2->4
	dump(num);
	return 0;
}