// 1 số đẹp là 1 số mà str.begin() = 2* str.end() or ngc lai
// từ vị trí thứ 2 (tức i=1) đến gần cuối thỏa mãn là 1 số thuận nghịch hay số đối xứng

#include<bits/stdc++.h>
using namespace std;

int check(long long n){
	string str= to_string(n);
	int size = str.size();
	if(str[0]= 2*str[size -1] || 2*str[0] == str[size -1])
		return 1;
	return 0;
}

int deletee(long long n){
	string str = to_string(n);
	string kq = str;
	str.pop_back();// xóa phần tử cuối cùng 
	str.erase(str.begin()); // xóa phần tử đầu tiên 
	reverse(str.begin(), str.end()); // đảo ngược str

	kq.pop_back();
	kq.erase(kq.begin());

	if(str == kq)
		return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		if(check(n) && deletee(n))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}