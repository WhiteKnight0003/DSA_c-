#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

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

bool dfs(int u, int par){ // u và cha của nó 
	visited[u]= true;
	for(auto x: adj[u]){
		if(!visited[x]){
			if(dfs(x,u)) return true; // tại đồ thị có nhiều nhánh nên phải check nhiều nhanh
		}
		// nếu x đã được thăm và par k phải cha trực tiếp -> có chu trình 
		else if(x != par)
			return true;
	}
	return false;
}

int main(){
	inp();
	bool ok = false;
	for(int i=1;i<=n;i++)
		if(!visited[i] && dfs(i,0)){ // check đỉnh đó đã đc thăm ch và có chu trình k 
			ok = true;
			break;
		}
	cout<<ok<<endl;
}

