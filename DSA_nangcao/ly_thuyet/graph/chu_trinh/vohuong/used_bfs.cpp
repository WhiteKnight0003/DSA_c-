#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

bool bfs(int u){ 
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x: adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				parent[x] = v; // đánh dấu cha của x là v
			}
			else if(x != parent[v])
				return true;
		}
	}
	return false;
}

int main(){
	inp();
	bool ok = false;
	for(int i=1;i<=n;i++)
		if(!visited[i] && bfs(i)){ // check đỉnh đó đã đc thăm ch và có chu trình k 
			ok = true;
			break;
		}
	cout<<ok<<endl;
}

