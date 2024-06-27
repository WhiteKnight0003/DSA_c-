#include<iostream>
#include<forward_list>
using namespace std;

void dump(forward_list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x;

	//num.pop_front(); // xóa phần tử đầu tiên 
	//dump(num);

	/* xóa phần tử đằng sau phần tử t2
	auto itr = num.begin();
	int m=2; // xóa phần tử đằng sau phần tử t2
	for(int i=1;i<=m;i++)
		++itr;
	num.erase_after(itr);
	dump(num);
	*/



	// xóa nhiều phần tử 

	auto itr_start = num.begin();
	auto itr_end =num.begin();
	int start =2 , end= 5;
	for(int i=1;i<=start ;i++)
		++itr_start;
	for(int i=1;i<=end;i++)
		++itr_end;

	num.erase_after(itr_start , itr_end); // cắt vị trí 3 4 - tức sau 2 và trc 5
	dump(num);
	return 0;
}