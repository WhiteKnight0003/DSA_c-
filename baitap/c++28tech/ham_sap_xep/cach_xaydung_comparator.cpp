#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return abs(a)<abs(b);  // a<b sx tăng dần a>b sx giảm dần 
	
}

bool cmp1(string a, string b){
	if(a.size() != b.size()){ // ví dụ sắp xếp 1 string có n phần tử nếu có kích thước bằng nhau in ra cái nhỏ hơn trước 
		return a<b;
	}
	else return a<b;
}
int main(){
	/*
	
	int a[n];
	for(auto &x: a)
		cin>>x;
	sort(a,a+n,cmp);
	for(auto x: a)
		cout<<x<<" ";

	*/
     int n; cin>>n;
    string a[n];
    for(auto &x : a)
    	cin>>x;
    sort(a,a+n, cmp1);
    for(auto x: a)
    	cout<<x<<" ";
    return 0;
}