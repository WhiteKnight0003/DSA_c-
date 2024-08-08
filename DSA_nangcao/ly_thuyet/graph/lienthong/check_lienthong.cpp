// chạy dfs- or bfs rồi check visited - nếu có cái nào = false thì nó k liên thông 

#include<bits/stdc++.h>

std::vector<int> adj[1001];
int V,E;
bool visited[1001];

void input(){
	std::cin>>V>>E;
	for(int i=0;i<E;i++){
		int m,n;
		std::cin>>m>>n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	memset(visited,false, sizeof(visited));
}

void bfs(int u){
	std::queue<int> q;
	q.push(u);
	visited[u] = true;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		std::cout<<v<<" ";
		sort(adj[v].begin(), adj[v].end());
		for(auto x: adj[v])
			if(!visited[x]){
				q.push(x);
				visited[x]= true;
			}
	}
}


int main(){
	input();
	bfs(1);
	for(int i=1;i<=V;i++)
		if(!visited[i]){
			std::cout<<"không liên thông"<<"\n";
			return 0;
		}
	std::cout<<"Liên thông\n";
}
