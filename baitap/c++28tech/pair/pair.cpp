#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int> v = make_pair(100,200);
	// pair<int,int> v = {100,200};
	// v.first - datatype 1
	// v.second - datatype2
	// make_pair trả về 1 pair có x.first = 100 và x.second =2 00
	tuple<int , int , int> t{1,2,3};
	cout<<get<vitri>(t)<<endl;
	
}