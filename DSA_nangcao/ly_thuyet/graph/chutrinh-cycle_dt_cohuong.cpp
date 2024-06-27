// đối với đồ thị có hướng 
// phải xét xem là đỉnh đó đã thăm xong chưa nếu chưa thăm xong thì sẽ chu trình 
// nếu nó đã thăm xong chắc chắn là k có chu trình

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
int color[1001]; // 0 là chưa thăm - trắng , 1 là đang thăm - xám , 2 là đã thăm - đen
int indegree[1001];

void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		indegree[y]++;
	}
	memset(color, 0 , sizeof(color));
}

bool dfs(int u, int parent){
	color[u] = 1;
	for(int v : adj[u]){
		if(color[v] ==0 ){
			if(dfs(v,u)) return true;
		}
		else if(color[v]==1) // 
			return true;
	}

	color[u] = 2; // đã duyệt xong
	return false;
}

bool kahn(){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(indegree[i] ==0)
			q.push(i);
	}

	int cnt=0;
	while(!q.empty()){
		int v = q.front(); q.pop();
		++cnt;
		for(int x: adj[v]){
			--indegree[x];
			if(indegree[x] ==0)
				q.push(x);
		}
	}

	if(cnt ==n) return 0;
	return 1;
}
int main(){
	input();

	/* dfs
	bool ok= false;
	for(int i=1;i<=n;i++){
		if(!color[i] && dfs(i,0)){
			ok = true; 
			break;
		}
	}
	cout<<ok<<endl;
	*/
	if(kahn()) cout<<"1";
	else cout<<"0";
}