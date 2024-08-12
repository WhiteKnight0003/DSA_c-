// xét 2 đỉnh u v => dfs(u) if(!visited[v]) => k cos path 
// test trên đồ thị vô hướng
#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];
int V,E,s,t;
int parent[1001]; 

void input(){
	cin>>V>>E>>s>>t;
	for(int i=0;i<E;i++){
		int m,n;
		cin>>m>>n;
		ke[m].push_back(n);
		ke[n].push_back(m);
	}
	for(int i=1;i<=V;i++) sort(ke[i].begin(), ke[i].end());
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	visited[u] = true;
	for(auto x: ke[u])
		if(!visited[x]){
			parent[x] = u; // đặt cha để truy vết
			dfs(x);
		}
}

int main(){
	input();
	dfs(s);
	if(!visited[t])
		cout<<"-1"<<endl;
	else {
		vector<int> path;
		while(t != s){
			path.push_back(t);
			t = parent[t]; // truy vết đường đi
		} 
		path.push_back(s);
		reverse(path.begin(), path.end()); // lật ngược
		for(auto x: path)
			cout<<x<<" ";
	}
}