#include<iostream>
#include<list>
#include<algorithm> // dùng cho dòng 24
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

	//num.reverse();  - đảo ngược bằng list reverse - là class thuộc std::list
	reverse(num.begin(), num.end()); // đây là 1 hàm function template - thuộc algorithm
	dump(num);
	return 0;
}