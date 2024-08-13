// ví dụ bạn có 10 4 , 10 5 , 5 4 -> nó sẽ nhận ra ngay là có chu trình

#include<bits/stdc++.h>
using namespace std;

int n,m;
int parent[1001];

int find(int u){
	if(u==parent[u]) return u;
	return find(parent[u]);
}

bool Union(int a, int b){
	a = find(a);
    b = find(b);
    if(a==b) return false;
    (a<b)? parent[b]=a : parent[a]=b;
    return true;
}

void ktao(){
	for(int i=1;i<=n;i++)
		parent[i]=i;
}

int main(){
	cin>>n>>m;
	ktao();
	bool ok = false;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		if(!Union(x,y))
			ok = true; // co chu trinh
	}
	cout<<ok<<"  ";
}