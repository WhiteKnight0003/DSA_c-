#include<iostream>
#include<set>
#include<vector>
#include<numeric> //dùng cho dòng 14
using namespace std;

struct cmp{
	bool operator() (int a, int b){
		return a<b;
	}
};
/*
int main(){
	multiset<int,cmp> num{1,2,5,6,7,3,4};
	//int sum = accumulate(num.begin(), num.end(), 0);
	int sum=0;
	for(auto x: num)
		sum+=x;
	cout<<sum<<endl;
	return 0;
}
