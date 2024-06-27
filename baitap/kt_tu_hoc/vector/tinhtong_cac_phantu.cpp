/* dùng hàm accumulate - tính tổng các phần tử có trong một đối tượng C++ chứa nhiều phần tử.
   - Chúng ta có thể dùng std::accumulate không những để tính tổng các
    phần tử trong vector mà còn có thể tính tổng các phần tử trong các đối tượng khác như vector hay map  chẳng hạn
   - thuộc header numeric

   - cú pháp :   accumulate(v.begin(), v.end(), 0)
   0 - khởi tạo gt tổng =0;


#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
	vector<int> number{1,2,3,4,8,9};
	int sum = accumulate(number.begin(), number.end(), 0);
	cout<<sum<<endl;
	return 0;
}
*/


// tính tổng cách dùng vòng lặp
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> number{1,2,3,7,8,9};
	int sum =0;
	for(auto x: number)
		sum+=x;

	cout<<sum<<endl;
	return 0;
}