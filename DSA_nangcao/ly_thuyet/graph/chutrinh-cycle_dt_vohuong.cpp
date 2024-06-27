// với đồ thị vô hướng - phải check cạnh ngược , nếu 1 đỉnh có quan hệ và k phải cha trực tiếp => có chu trình
#include<bits/stdc++.h>
using namespace std;

int n,m,s;
bool visited[1001];
vector<int> adj[1001];
int parent[1001]; // dung voi bfs
void input(){
	cin >> n>>m>>s;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false, sizeof(visited));
}

bool dfs(int u, int parent){
	visited[u] = true;
	for(auto v: adj[u]){
		if(!visited[v])
		    {
			    if(dfs(v,u)) return true; // phải đưa ra điều kiện nếu k nó sẽ sai
	        }
			//đỉnh v đã được thăm nhưng v không phải cha trực tiếp của u
		else if(v != parent)
			return true;
	}
	return false;
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
				parent[x] = v;
			}
			else if(x != parent[v])
				return true;
		}
	}
	return false;
}

int main(){
	input();

	/* dfs
	bool ok= false;
	for(int i=1;i<=n;i++){
		if(!visited[i] && dfs(i,0)){
			ok = true; 
			break;
		}
	}
	cout<<ok<<endl;
	*/
	bool ok= false;
	for(int i=1;i<=n;i++){
		if(!visited[i] && bfs(i)){
			ok = true; 
			break;
		}
	}
	cout<<ok<<endl;
}