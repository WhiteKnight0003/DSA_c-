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

	int n; cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;
/*
	cout<<num.front()<<endl;  // in ra giá trị đầu tiên
	num.front() = 3; // thay đổi gt đầu tiên 
	dump(num);

	cout<<num.back()<<endl;  //in ra giá trị cuối cùng
	num.back() = 5;  // thay đổi gt cuối cùng 
	dump(num);
 */    
	list<int> kq;
     int count = 0;
    for(auto x: num){
    	if(count >=2 && count <=4 ) // lấy từ vị trí  2 -> 4
    		kq.push_back(x);
    	++count ;
    }
    dump(kq);
	return 0;
}