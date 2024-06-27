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

	int n;cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;
    /*
	num.pop_front();  // xóa phần tử đầu tiên
	dump(num);
	num.pop_back(); // xóa phần tử cuối cùng 
	dump(num);
    */


	/* xóa 1 vị trí 
	int m=2;
	auto itr= num.begin();
	for(int i=1;i<=m;i++)
		++itr;
	num.erase(itr);
	dump(num);
	*/

	/*xóa 1 phạm vi */
	int start =2 , end =5; // xóa từ 2 -> 4 

	auto itr_start = num.begin();
	auto itr_end = num.begin();

	for(int i=1;i<=start;i++)
		++itr_start;
	for(int i=1;i<=end;i++)
		++itr_end;

	num.erase(itr_start , itr_end);
	dump(num);
	return 0;

}