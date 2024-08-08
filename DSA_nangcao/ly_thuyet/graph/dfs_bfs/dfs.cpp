// depth first search
// tìm kiếm theo chiều sâu : Ưu Tiên duyệt xuống nhất có thể trước khi quay lại

/*
dfs(u){
	<Thăm đỉnh u>;
	visited[u] = true; - đánh dấu u đã được duyệt
	// duyêt các đỉnh kề với u
	for(v :adj[u]){
		if(!visited[v])
			dfs(v);
	}
}


- độ phức tạp phụ thuộc vào cách biểu diễn ma trận
- đồ thị G = <V, E>
- biểu diễn = ma trận kề : O(V*V)
- biểu diễn = danh sách cạnh : O(V*E)
- biểu diễn = danh sách kề : O(V+E)
*/

#include<bits/stdc++.h>

std::vector<int> adj[1001];
int V,E,u;
bool visited[1001];

void input(){
	std::cin>>V>>E>>u;
	for(int i=0;i<E;i++){
		int m,n;
		std::cin>>m>>n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	memset(visited,false, sizeof(visited));
}

void dfs(int u){
	visited[u] = true;
	std::cout<<u<<" ";
	sort(adj[u].begin(), adj[u].end());
	for(auto v: adj[u])
		if(!visited[v])
			dfs(v);
}

int main(){
	input();
	dfs(u);
	return 0;
}

/*input
5 5 3 
5 2
3 2
5 4
5 3
5 1
*/

/*ouput
3 2 5 1 4 
*/