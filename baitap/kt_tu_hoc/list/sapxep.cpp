#include<iostream>
#include<list>
using namespace std;

void dump(list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;

	num.sort(); // sắp xếp tăng dần
	dump(num);

	num.sort( greater<int>());  // sắp xếp giảm dần
	dump(num);
	return 0;
}