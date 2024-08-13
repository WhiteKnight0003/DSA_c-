#include<bits/stdc++.h>
using namespace std;

int n,m;
int parent[1001];

int find(int u){
	if(u == parent[u]) return u; // u = cha của nó
	return find(parent[u]); // chưa bằng thì phải lần ngược lại
}

/*
ví dụ có 1 tập đỉnh với
parent[1] = 1
parent[2] = 1
parent[3] = 2
parent[4] = 3
thì phải cho nó về chung cha 
*/

bool Union(int a, int b){// gộp 2 phần tử 
	a = find(a);
	b = find(b);
	if(a==b) return false; // cùng 1 tập hợp nên bỏ qua
	(a<b) ? parent[b]=a : parent[a]=b;
	return true;
}

void ktao(){
	for(int i=1;i<=n;i++)
		parent[i] = i;
}

int main(){
	cin>>n>>m;
	ktao();
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		Union(x,y);
	}
	for(int i=1;i<=n;i++)
		cout<<find(i)<<"  ";
}