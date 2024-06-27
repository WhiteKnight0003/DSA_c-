#include<iostream>
#include<forward_list>
#include<numeric> // dùng cho dòng 17
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n ; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x;

	//int sum = accumulate(num.begin() , num.end() , 0);
	int sum = 0;
	for(auto x: num)
		sum+=x;
	cout<<sum<<endl;

	return 0;
}