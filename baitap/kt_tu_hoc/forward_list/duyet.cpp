#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x;

	//for(auto x: num)  cout<<x<<" ";

	for(auto itr = num.begin() ; itr != num.end() ;itr++) 
		cout<<*itr<<" ";
	return 0;
}