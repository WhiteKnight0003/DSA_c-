// đồ thị là cây khi không có chu trình
#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
int high[1001]; // chieu cao cua not

void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	visited[u] = true;

	for(auto v: adj[u]){
		high[v] = high[u]++;
		if(!visited[v]){
			dfs(v);
		}
	}
}

int main(){
	input();
	dfs(1);
	for(int i=1 ; i<=n;i++){
		cout<<i<<"  "<<high[i]<<endl;
	}
}