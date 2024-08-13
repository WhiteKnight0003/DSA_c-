// nếu như graph có chu trình thì sẽ k phải là cây 
// và đồ thị phải liên thông

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool visited[1001];

void nhap(){
	cin>>n>>m;
	for(i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

bool dfs(int u, int par){
	visited[u] = true;
	for(auto x: adj[u]){
		if(!visited[x]){
			if(dfs(x,u)) return true;
		}
		else if(x != par) return true;
	}
	return false;
}

int main(){
	nhap();
	if(dfs(1,0)) // nếu là true thì k thể là cây
		cout<<0<<endl;
	else{
		for(int i=1;i<=n;i++){
			if(!visited[i]){ // k đủ n-1 cạnh -> k thể là cây
				cout<<0<<endl;
				return 0;
			}
		}
		cout<<1<<endl;
	}
}