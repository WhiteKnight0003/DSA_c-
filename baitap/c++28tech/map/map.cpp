// các thao tác trong map có độ phức tạp o(logn)
// các khóa giống nhau thêm các gt khác nhau thì gt mới mất sẽ đc cập nhật
// count(key) : xem key có xuất hiện k
// erase(key) // xóa khóa + gt 
#include<bits/stdc++.h>
using namespace std;

// (key, value)
// int main(){
// 	map<int,int> mp;
// 	mp.insert({100,200});// thêm 1 key và value

// 	duyệt  nếu it k trả về vị trí
// 	for(auto x: mp)
// 		cout<<x.first<<" "<<x.second;
// 	for(auto it =mp.begin(); it!= mp.end();it++)
// 		cout<<*it.first<<" "<<*it.second<<endl;
// }

int main(){
	int n; cin>>n;
	map<int,int> mp;
	map<string,int> s;
	for(int i=1;i<=n;i++){ // viết gộp
		int x; cin>>x;
		string s; cin>>s;
		mp[x]++;
		mp[s++];
	}
	for(auto x: mp)
		cout<<x.first<<" "<<x.second<<endl;
}