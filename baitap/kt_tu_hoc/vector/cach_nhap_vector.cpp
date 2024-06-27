#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;  cin>>n;
	vector<int> array(n);

	for(auto &x: array)
		cin>>x;

	return 0;
}