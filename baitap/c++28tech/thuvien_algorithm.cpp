#include<bits/stdc++.h>
using namespace std; 

// MM viết thay cho (a,a+n) hay (x.begin(), x.end())

// min : tính gtnn - min(10,20) - min{(1,2,3,4)} 
// max tương tự min nhưng tính gtln

// min_element : tính gtnn trong vector *min_element(MM) - buộc phải *  để giải tham chiếu
// max_element tương tự min_element nhưng tính gtln  

// accumulate : tính tổng mảng , vector : accumulate(MM,0)   với 0 là giá trị gán cho sum ban đầu

// swap : đổi chỗ các phần tử :  swap(x,y)

// sort: sắp xếp mảng theo tăng dần, vector - sort(MM) 
// sort(MM, greater<tên dữ liệu muốn sắp xếp>())
// sort(MM, cmp) với cmp là hàm tự viết để có thứ tự sắp xếp 
// stable_sort : có thêm tính ổn định của stable và giữ nguyên thứ tự tương đối của các phần tử nhất có công dụng như sort

// find : tìm kiếm trong mảng và vector trả về con trỏ nếu tìm thấy k trả về vị trí cuối cùng 
// find(MM,x) - x giá trị cần tìm kiếm 

//binary_search() áp dụng cho mảng vector đã đc sắp xếp , set , map
// độ phức tạp o(logn) - trả về true nếu tìm thấy và false nếu ngc lại
// binary_search(MM,x)  có thể thay đổi đoạn tìm kiếm 

// lower_bound() // tìm kiếm phần tử đầu tiên >= x
// auto it = lower_bound(MM,x) 
// viết *it trả về gt đầu tiên >=x   viết (it-tên mảng) or it - (tên vector.begin()) in ra con trỏ tại vị trí tìm thấy

// upper_bound() tương tự lower_bound nhma tìm kiếm phần tử đầu tiên > x

// memset : gán tất cả phần tử trong mảng = 1 gt x nào đó
// memset(tên mảng ,x,sizeof(tên mảng)) - có thể dùng cho vector nhma nó phải ch đc gán gt

// fill như memset nhưng có thể thay đổi vector nếu đã gán giá trị trc
// fill(MM,x);

// merge trộn 2 vector or 2 mảng đã sắp xếp tăng dần
// merge(a,a+n,b,b+n,c);  

// reverse : đảo ngược mảng or vector or string
// reverse(MM);

//set_union : gộp 2 mảng đã sắp xếp thành 1 set hay là phép toán a hợp b
// gọi mảng a[m] , b[n] và vector<> c(m+n)
// auto it = set_union(a,a+m,b,b+n,c.begin());
// u.resize(it-u.begin()) // đặt lại kích thước vector vì các phần tử trùng nhau làm mất số lượng phần tử

//set_difference : thuộc a nhưng k thuộc b cách viết như trên

//set_intersection : a giao b các viết như trên

//set_symmetric_difference() : chỉ thuộc a k thuộc b + chỉ thuộc b k thuộc a
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m] ,b[n], c[m+n];
	for(auto &x: a)
		cin>>x;
	for(auto &x: b)
		cin>>x;
	merge(a,a+n,b,b+n,c); // hàm gộp 2 mảng đã sắp xếp 
	for(auto x: c)
		cout<<x<<" ";
	return 0;
} 