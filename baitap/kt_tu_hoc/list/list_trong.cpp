/*Kiểm tra list có trống k 
#include<iostream>
#include<list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;

	if(num.empty())
		cout<<"empty"<<endl;
	else 
	   cout<<"empty"<<endl;
   
    return 0;

}

*/

#include<iostream>
#include<list>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);

	for(auto &x: num)
		cin>>x;

	num.clear();
	return 0;
}
