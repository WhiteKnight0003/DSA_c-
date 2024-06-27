//Lưu ý là khác với list thì do forward_list là danh sách một chiều nên không tồn tại hàm push_back để thêm phần tử vào cuối forward_list.
#include<iostream>
#include<forward_list>
using namespace std;

void dump(forward_list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	forward_list<int> num(n);

	for(auto &x: num)
		cin>>x;

	//num.push_front(3);  thêm phần tử vào đầu 
	num.emplace_front(3);
	dump(num);

	auto itr=num.begin();
	int m=2;
	for(int i=1;i<=m;i++)
		++itr;
	num.insert_after(itr,77);  // thêm vào sau vị trí t2
	dump(num);
	return 0; 
}