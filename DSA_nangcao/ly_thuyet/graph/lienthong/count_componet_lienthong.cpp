#include<bits/stdc++.h>

std::vector<int> adj[1001];
int V,E;
bool visited[1001];
std::vector<int> vec;

void input(){
	std::cin>>V>>E;
	for(int i=0;i<E;i++){
		int m,n;
		std::cin>>m>>n;
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	memset(visited,false,sizeof(visited));
}



void dfs(int u){
	vec.push_back(u);

	visited[u] = true;
	sort(adj[u].begin(), adj[u].end());
	for(auto v: adj[u])
		if(!visited[v])
			dfs(v);

	for(auto x: vec)
		std::cout<<x<<" ";
	std::cout<<std::endl;
	vec.clear();
}

int main(){
	input();
	int count =0;
	for(int i=1;i<=V;i++){
		if(!visited[i]){
			dfs(i);
			++count;
		}
	}
	std::cout<<count<<"\n";
}