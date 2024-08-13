#include<bits/stdc++.h>
using namespace std;

int n,m;
int parent[1001], sz[1001];

int find(int u){
	if(u == parent[u]) return u; // u = cha của nó
	return parant[u] = find(parent[u]);  // đồng bộ ngay lập tức
}

bool Union(int a, int b){// gộp 2 phần tử 
	a = find(a);
	b = find(b);
	if(a==b) return false; // cùng 1 tập hợp nên bỏ qua
	if(sz[a]>sz[b]) { // gộp cái nhỏ hơn vào
		parent[b]=a; // cập nhật lại đại diện
		sz[a]+=sz[b]; // cập nhật lại sz
	}
	else {
		parent[a]=b; 
		sz[b]+=sz[a];
	}
	return true;
}

void ktao(){
	for(int i=1;i<=n;i++){
		parent[i] = i;
		sz[i]=1;
	}
}

// dùng để đếm số liên thông cho đoạn main
int main(){
	cin>>n>>m;
	ktao();
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		Union(x,y);
	}
	int ans=0; 
	for(int i=1;i<=n;i++)
		if(i==parent[i])
			++ans;
	cout<<ans;
}