#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n ; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x;

	if(num.empty())
		cout<<"empty"<<endl;
	else 
	  cout<<"no empty"<<endl;

	  num.clear();
	  for(auto x: num)
	  	cout<<x<<endl;
	return 0;
}