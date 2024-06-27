// với dfs và bfs sẽ cho 2 đường đi khác nhau

#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];
int n, m,s,t;
int parent[1001];

void input(){
	cin>>n>>m>>s>>t;
	 for(int i=0;i<m;i++){
	 	int x, y;
	 	cin >> x>> y;
	 	ke[x].push_back(y);
	 	ke[y].push_back(x);
	 }

	 memset(visited, false, sizeof(visited));
	 memset(parent,0, sizeof(parent));
}

void dfs(int u){
	visited[u] = true;

	for(auto x: ke[u])
		if(!visited[x]){
			parent[x] = u;
			dfs(x);
	    }

}

int main(){
	input();
	dfs(s); // cho chay
	
	if(!visited[t]) // kiem tra diem cuoi
		cout<<"-1"<<endl;
	else{
		vector<int> path; 
		while(t != s){
			path.push_back(t);
			t = parent[t]; // gan con = cha de kiem tra
		}
		path.push_back(s);
		reverse(path.begin(), path.end());

		for(auto x: path) 
			cout<< x<< " ";
	}

}