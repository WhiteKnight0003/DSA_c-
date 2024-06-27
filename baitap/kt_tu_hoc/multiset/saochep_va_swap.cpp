#include<iostream>
#include<set>
using namespace std;

struct cmp{
	bool operator() (int a, int b){
	return a<b;
}
};

int main(){
	multiset<int,cmp> num1{3,2,4};
	//multiset<int,cmp> num2(num1);  sao chép 1 sang 2

	multiset<int,cmp> num2{1,7,3};
	num2.swap(num1);
	for(auto x: num1)
		cout<<x<<" ";
	cout<<endl;
	for(auto x: num2)
		cout<<x<<" ";
	return 0;
}