#include<bits/stdc++.h>
using namespace std;

// dem tan xuat xuat hien cua cac phan tu trong mang1
// int dem[10000001]
// -500 dem[-500] ++    => runtime error
// dem[10000000000]++   => khong the
 
/*  map - mỗi key là duy nhất
map<data_type1,data_type2> m
size() - lấy kích thước - O(1) - còn đâu o(logn)
insert({a,b}); - insert(make_pair(a,b));
my[key] = value
find : trả về iterator
count : đếm xem có bn key
erase : xóa phan tu theo key
*/

/* multimap
có các hàm như map - chỉ không dùng được mp[key] = value
có nhiều key giống nhau
count - sẽ đếm số key đó
find- trả về vị trí key đó xuất hiện lần đầu tiên
erase - xóa all key đó  - or xóa iterator
*/

/* unordered_map - không lưu theo thứ tự
các hàm của nó tốt nhất O(1) - xấu nhất O(n) - và lưu giá trị lung tung*/
#define se second 
#define fi first
/*
int main(){
	map<int,int> mp;
	mp.insert({1,5});  // mp[1] = 5 - thay đổi value theo key
	mp.insert({2,3});
	mp.insert({2,5});
	mp.insert({1,4});
	mp.insert({5,10});
	for(auto x: mp)
		cout<<x.fi<<" "<<x.se<<endl; // cout<<x.fi<<" "<<mp[x.fi]<<endl;
	// không thể có cùng key value
	// và lưu key theo thứ tự tăng dần
	for(auto it = mp.begin(); it != mp.end(); it++)
		cout<<(*it).fi<<" "<<(*it).se<<endl;
}
*/

int main(){
	map<int,int> mp;
	mp[100]++; 
	mp[100]++; // tang so luong
	mp[30] =3;
	auto pos = mp.find(100);
	// ++pos; để nhảy sang vị trí đằng sau
	if(pos != mp.end()){
		cout<<mp.count(100)<<endl; // tìm thấy in ra số lượng
	    cout<<(*pos).fi<<" "<<(*pos).se<<endl; // vij trí - phải giải tham chiếu 
	 // (*pos).fi or (*pos)->fi
	}

	auto it = mp.begin() ; // phần tử đầu tiên
	auto it1 = mp.rbegin(); // phần tử cuối cùng 


	
}