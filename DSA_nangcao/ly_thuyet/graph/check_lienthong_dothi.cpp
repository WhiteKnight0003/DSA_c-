// Breadth First Search

// Tư tưởng BFS : tìm kiếm theo chiều rộng - tìm kiếm xugn quanh trước khi đì xuống sâu hơn

#include<bits/stdc++.h>
using namespace std;

#define ll long long;

vector<int> ke[1001];
bool visited[1001];
int n, m, s;

void in(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int x, y; cin >> x>>y ;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void bfs(int u){
	// tao hang doi rong
	queue<int> list; 
	list.push(u);
	visited[u] = true;

	while(!list.empty()){
		int v = list.front();
		list.pop();
		cout<<v<<" ";
		for(auto x: ke[v])
			if(!visited[x]){
			    list.push(x);
			    visited[x] = true;
		}
	}
}

bool check_lienthong(){
	for(int i=1;i<=n;i++)
		if(!visited[i])
			return false;
	return true; 
}
int main(){
	in();
	bfs(s);
	if(check_lienthong()) 
		cout<<"yes";
	else cout<<"no";
}