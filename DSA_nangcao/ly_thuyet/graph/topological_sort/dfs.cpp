#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
vector<int> topo;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	visited[u]= true;
	for(auto x: adj[u]){
		if(!visited[x])
			dfs(x);
	}
	topo.push_back(u); // đã thăm xong tất cả các đỉnh  kề với u cho vào vector
}

int main(){
	inp();
	for(int i=1;i<=n;i++)
		if(!visited[i])
			dfs(i);
	reverse(topo.begin(), topo.end());
	for(auto x: topo)
		cout<<x<<" ";
}

/*  in
6 5 
1 2 
2 3
2 4
3 5
1 6
*/

/* out 
1 6 2 4 3 5 
*/