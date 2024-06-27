#include<bits/stdc++.h>
using namespace std;

// pair<data_type1, data_type2> p;
// make_pair(x,y) trả về 1 pair tu cap x,y
#define se second 
#define fi first
int main(){
	/*
	pair<int,int> p = make_pair(100,200); // khởi tạo p.fi = 100 , p.second =200;
	cout<<p.fi<<" "<<p.se;

	pair<int, int> a[4];
	for(auto &x: a)
		cin>>x.fi>>x.se;
	for(auto x: a)
		cout<<x.fi<<" "<<x.se;
	*/

	/*
	vector<pair<int,int>> v;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y}); // v.push_back(make_pair(x,y));
	}
	for(auto x: v)
		cout<<x.fi<<" "<<x.se<<endl;


	// đối với sort - cũng so sánh như set
	sort()
*/

	set<pair<int,int>> s;
	s.insert({1,2});
	s.insert({3,4});
	s.insert({1,1});
	s.insert({3,4});
	for(auto x: s)
		cout<<x.fi<<" "<<x.se<<" ";
	// trùng nhau khi cả fi và se có cùng value
	// so sánh fi trước nhỏ hơn đảo lên đầu 
	// fi bằng nhau so sánh se



   // có cả pair<vector<int>,int> 
   // pair<pair<int,int>, int> p ; // vi du ((x,y),z) p.fi.fi = x
}