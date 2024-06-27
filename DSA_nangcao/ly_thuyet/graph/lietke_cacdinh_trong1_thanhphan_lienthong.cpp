#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];
int n, m;
vector<int> tplt;

void in(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	tplt.push_back(u);
	visited[u] = true;
	sort(ke[u].begin(),ke[u].end());
	for(auto x: ke[u])
		if(!visited[x])
			dfs(x); 
}

int main(){
	in();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
			for(auto x: tplt)
				cout<<x<<" ";
			tplt.clear();
		}
		else continue;
		cout<<endl;
	}
}