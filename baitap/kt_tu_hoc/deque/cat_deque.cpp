/* cắt phần tử đầu tiên 

#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5};
    int a = number.front();  // lấy gt đầu tiên 
    cout<<a<<endl;

    number.front() = 3; // thay đổi gt đầu tiên

    for(auto x: number)
    	cout<<x<<" ";
    return 0;
}

*/

/*cắt phần tử cuối cùng 
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5};
    int a = number.back();  // lấy gt đầu tiên 
    cout<<a<<endl;

    number.back() = 3; // thay đổi gt đầu tiên

    for(auto x: number)
    	cout<<x<<" ";
    return 0;
}

*/


// cắt trong 1 phạm vi : push_back()
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> number{1,2,3,4,5,6};
	deque<int> kq;

	for(int i=2;i<= 4 ;i++)
		kq.push_back(number[i]);

	for(auto x: kq)
		cout<<x<<" ";
	return 0;
}