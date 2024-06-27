//tương tự set nhma cho phép lặp phần tử
// ví dụ cho 1 multiset có các gt 100 100 200 200 nếu ms.erase(100) - nó sẽ xóa hết 100 cũ
// cho mảng có n phần tử và số k- với mọi dãy con liên tiếp có k phần tử
// in ra max của dãy con đó
// 
// ví dụ 10 3
// 1 2 3 1 4 5 1 8 9 10
// 3 4 5 5 8 9 10
// rbegin() trả con trỏ đến cuối set và cho nó chạy ngược về
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	int a[n];
	multiset<int> ms;
	for(auto &x: a)
		cin>>x;
	
	for(int i=0;i<k;i++)
		ms.insert(a[i]); // thêm k phần tử đầu tiên vào set

	for(int i=k;i<n;i++){
		cout<<*ms.rbegin()<<" "; // in ra phần tử cuối cùng trong cửa sổ con
		ms.erase(ms.find(a[i-k]));// xóa  phần tử đầu tiên nhỏ nhất  trong của sổ con
		ms.insert(a[i]); //thêm số mới vào 1 phần tử
	}
	cout<<*ms.rbegin()<<endl;
	return 0;
}