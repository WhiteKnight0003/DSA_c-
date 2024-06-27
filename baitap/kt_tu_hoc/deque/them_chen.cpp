/* dùng push_front() or emplace_front() - thuộc class - thêm phần tử vào đầu mảng

#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5};
	number.push_front(4); // thêm 4 vào đầu mảng
	number.emplace_front(5); // thêm 5 vào đầu mảng
	for(auto x: number)
		cout<<x<<" ";
	return 0 ;
}
*/

/*dùng push_back() or emplace_back() - thuộc class - thêm phần tử cuối cùng 
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,2,3,4,5,6,7};

	num.push_back(1);
	num.emplace_back(2);

	for(auto x: num)
		cout<<x<<" ";
	return 0;
}

*/

// thêm phần tử vào vị trí bất kì vs insert 
#include<iostream>
#include<deque>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;cin>>n;
	deque<int> num(n);

	for(auto &x: num)
		cin>>x;

	num.insert( num.begin() +3, 6 );

	for(auto x: num)
		cout<<x<<" ";

	return 0;
}