/*Sao chép 
#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	forward_list<int> num{1,2,3,4,5};

	forward_list<int> kq(num);
	for(auto x: kq)
		cout<<x<<" ";
	return 0;
}
*/

// hoán đổi 
#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	forward_list<int> num{1,2,3,4,5};
	forward_list<int> kq{2,3,4};
	kq.swap(num);
	for(auto x: num)
		cout<<x<<" ";
	cout<<endl;
	for(auto x: kq)
		cout<<x<<" ";
	return 0;
}