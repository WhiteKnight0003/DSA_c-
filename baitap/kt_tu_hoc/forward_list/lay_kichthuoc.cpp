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

	cout<< distance(num.begin(), num.end())<<endl; // lấy kích thước

	num.resize(3);

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}
