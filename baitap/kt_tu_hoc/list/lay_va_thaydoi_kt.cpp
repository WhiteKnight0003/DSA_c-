#include<iostream>
#include<list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;

	cout<<num.size()<<endl;
	num.resize(3);

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}