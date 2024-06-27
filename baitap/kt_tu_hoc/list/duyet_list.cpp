// trong list , cta k thể sd index của các phần tử để truy cập nó theo cách thông thường
/* chỉ có thể duyệt bằng 
+ vòng lặp dựa trên phạm vi
+ interator
*/

// duyệt bằng vòng lặp dựa trên phạm vi và iterator
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

	//for(auto &x: num)
	//	cout<<x<<" ";

	for(auto itr = num.begin() ; itr != num.end() ;++itr)
		cout<<*itr<<" ";
	return 0;
}

