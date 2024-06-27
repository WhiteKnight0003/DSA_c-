#include<bits/stdc++.h>
using namespace std;

// áp dụng cho mang, vector đc sx, set, map
// lower_bound(iter1, iter2, key )  [iter1, iter2) => trả về vị trí đầu tiên >= key
// lower_bound(v.start(), v.end(),x); đối vs các vector set map ...
// upper_bound(iter 1 , iter2, key) [iter1, iter2) => trả về vị trí đầu tiên > key
// upper_bound(v.start(), v.end(),x) 
int main(){
	int n,x;
	cin>>n>>x;
	//int a[n];
	vector<int > v(n);
	for(auto &x : v)
		cin>>x;
/*
	auto it = lower_bound(a,a+n,x);
	cout<<*it<<endl; // in ra gt đầu tiên >= x
	cout<<it<<endl; // in ra địa chỉ 
	cout<<it-a<<endl; // in ra con trỏ tại vị trí đầu tiền >=x

	auto itt = upper_bound(a,a+n,x);
	cout<<*itt<<endl; // in ra gt đầu tiên > x
	cout<<itt<<endl; // in ra địa chỉ 
	cout<<itt-a<<endl; // in ra con trỏ tại vị trí đầu tiền >x
	*/
/*
  auto it = lower_bound(v.begin(), v.end(),x);
  if(it == v.end())
  	cout<<"no found"<<endl;
  else cout <<it-v.begin()<<endl; // in ra vị trí gt đầu >= x
          // *it : in ra giá trị đầu >=x
*/
	auto it = upper_bound(v.begin(), v.end(),x);
	if(it == v.end())
		cout<<"no found"<<endl;
	else cout<<it-v.begin()<<endl; // in ra vị trí gt đầu > x
	 // *it :  in ra giá trị đầu > x
	return 0;
}
