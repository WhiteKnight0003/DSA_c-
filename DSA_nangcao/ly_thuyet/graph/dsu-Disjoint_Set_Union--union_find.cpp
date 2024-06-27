// ktra 1 phần tử thuộc tập hợp nào , và kiểm tra 2 phần tử có cùng 1 tập hợp hay k

// Disjoint Set : duy trì cho mỗi phần có 1 đỉnh đại diện , có thể dùng để check chu trình

// có 5 đỉnh riêng biệt 1 2 3 4 5 và đại diện của mỗi đỉnh là chính nó
// bạn muốn nối bất kì 1 đỉnh nào với nhau ví dụ đỉnh 1 và đỉnh 3 thì nó phải tìm đại diện của đỉnh 1 và đỉnh 3
// nếu chúng có cùng đại diện => cùng 1 tập hợp và Ngược lại 
// khi gộp 2 thành phần liên thông riêng biệt , cái nào chứa nhiều thành phần liên thông hơn thì nên lấy đại diện của nó để đặt

// code max cho dsu
#include<bits/stdc++.h>
using namespace std;

int n,m;
int parent[1001], size[maxn];

int find(int u){ // tìm đại diện của u
	if(u == parent[u]) // 1 đỉnh có cha là chính nó
		return u;
	return parent[u] = find(parent[u]); // để cho nó lần ngược lại
}
 
bool Union(int a, int b){ // gộp 2 thành phần 
	a = find(a);
	b = find(b);
	if(a==b) return false; // cùng 1 thành phần k gộp 

	if(size[a] > size[b]){ // cập nhật theo size
		parent[b] = a;
		size[a] += size[b];
	}
	else{
		parent[a] = b;
		size[b] += size[a];
	}

	return true;
}
void ktao(){
	for(int i=1;i<=n ;i++){
		parent[i] = i;
		size[i] =1; // mỗi thành phần ban đầu có số đỉnh là 1
	}
}

int main(){
	cin>>n>>m;
	ktao();
	bool ok = false; // check chu trình

	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		if(Union(x,y ) == false){
			ok = true; // có chu trình
		}
	}

	if(ok) ...
	
	for(int i=1;i<=n;i++)
		cout<<i<<"  " <<find(i)<<endl;

	// để ktra số thành phần riêng biệt trogn 1 đồ thị  ans = 0;   for(i=1;i<n;i++) if(i==parent[i]) ans++;
}