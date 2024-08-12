// có n đỉnh vs n-1 cạnh

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int high[1001];

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

void dfs(int u){ // u và cha của nó 
	visited[u]= true;
	for(auto x: adj[u]){
		high[x] = high[u]+1;
		if(!visited[x])
			dfs(x);
	}
}

int main(){
	inp();
	high[1]=0;
	dfs(1);
	for(int i=1;i<=m;i++)
		cout<<i<<" "<<high[i]<<endl;
}

