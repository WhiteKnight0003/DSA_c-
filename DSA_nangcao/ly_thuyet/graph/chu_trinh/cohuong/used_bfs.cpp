#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
int indegree[1001];
int parent[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		indegree[y]++;
	}
}

bool bfs(){ 
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(indegree[i]==0)
			q.push(i);
	}

	int cnt=0;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		++cnt;

		for(auto x: adj[v]){
			--indegree[x];
			if(indegree[x]==0) q.push(x);
		}
	}
	if(cnt==n) return 0;
	return 1;
}

int main(){
	inp();
	cout<<bfs()<<endl;
}

