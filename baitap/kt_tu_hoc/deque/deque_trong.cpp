/* kiểm tra deque có trống hay k - hàm empty - trả về kq 0 1 - thuộc class
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,2,3};
	deque<int> kq;

	if(num.empty()) 
		cout<<"empty"<<endl;
	else cout<<"no empty"<<endl;

	if(kq.empty()) 
		cout<<"empty"<<endl;
	else cout<<"no empty"<<endl;
	return 0;
}

*/

//làm trống 1 hàm = clear() và giải phóng bộ nhớ = shrink_to_fit() 
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> num{1,2,3};
	num.clear();
	num.shrink_to_fit();
	return 0;
}