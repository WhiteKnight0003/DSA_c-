// - dùng màu để đánh dấu 2 phía
// mấu chốt để check - 2 đỉnh kề nhauu k được cùng màu
// chỉ áp dụng cho vô hướng

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
int color[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(color,0, sizeof(color));
}

// mau1 : do
// mau2 : xanh
bool dfs(int u, int par){
	color[u] = 3 = color[par]; // nếu cha nó màu 1 thì con phải màu 2 và ngược lại
	for(int v: adj[u]){
		if(color[v] ==0){
			if(!dfs(v,u)) return false; // k phải đồ thị 2 phía
		}
		else if(color[v] == color[u]) // trùng màu => k phải 2 phía 
			return false;
	}
	return true;
}

int main(){
	inp();
	bool ok = true;
	color[0]=2;
	for(int i=1;i<=n;i++)
		if(color[i]==0){
		    if(!dfs(i,0)) 
			    ok = false;
		}
	cout<<ok<<endl;
}
