/**/
#include<iostream>
#include<list>
using namespace std;

void dump(list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);
	for(auto &x : num)
	cin>>x;

    //num.push_front(3); // thêm vào đầu
    num.emplace_front(3);

    //num.push_back(4); // thêm vào đuôi
    num.emplace_back(4);

    dump(num);
    return 0;
}


/* thêm vào vị trí bất kì 
#include<iostream>
#include<list>
using namespace std;

void dump(list<int>& v){
	for(auto x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	list<int> num(n);
	for(auto &x : num)
	cin>>x;
     
     int m=3; // thêm phần tử vào đằng trc index thứ m
     auto itr = num.begin();

     for(int i=1;i<=m;i++)
     	++itr;

     num.insert(itr,5);

    dump(num);
    return 0;
}

//Khác với vector hay map, do trong list chúng ta không thể truy cập vào vị trí ngẫu nhiên trong nó, nên để thay đổi trình lặp chỉ đến vị trí index thứ n
 trong list, chúng ta không thể đơn giản cộng n vào trình lặp, mà cần phải di chuyển lần lượt qua từng vị trí, bằng toán tử ++ với đủ số vòng lặp.
 */