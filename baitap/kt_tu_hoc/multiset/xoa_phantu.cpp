#include<iostream>
#include<set>
using namespace std;

struct cmp{
  bool operator() (int a, int b){
  	return a<b;
  }
};

int main(){
	multiset<int,cmp> num{1,2,3,4,2,3,6,7};   // 1 2 2 3 3 4 6 7 
/*  xóa 1 phần tử 
	auto itr = num.begin();
	int n=3;

	for(int i=1;i<=n;i++)
		++itr;

     num.erase(itr); - xóa vị trí 
*/
//	num.erase(3); // xóa số 3

	// xóa nhiều phần tử
	auto itr_start = num.begin();
	auto itr_end = num.begin();
	int start =2 , end =5;
	for(int i=1;i<=start;i++)
		++itr_start;
	for(int i=1;i<=end;i++)
		++itr_end;

	num.erase(itr_start , itr_end); // xóa phần tử vị trí start đến end-1
	for(auto x: num)
		cout<<x<<" ";

	return 0;
}