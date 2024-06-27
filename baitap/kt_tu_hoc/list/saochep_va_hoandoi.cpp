// sao chép bằng v.dest

#include<iostream>
#include<list>
using namespace std;

void dump(list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	list<int> num1{1,2,3,4};
	list<int> num2(num1); // sao chép 2 từ 1
	dump(num2);
	list<int> num3{2,3,4,5};

	//swap(num1,num3);  // đổi 1 vs 3
	num1.swap(num3); 
	dump(num1);
	dump(num3);
	return 0;
}
