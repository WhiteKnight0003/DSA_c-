// Depth First Search - tìm kiếm theo chiều rộng
#include<bits/stdc++.h>
using namespace std;

#define ll long long ;

// danh sach ke
vector<int> ke[1001];
bool visited[1001];
int n,m,s;

void input(){
	cin>>n>>m>>s;
	for(int i =0; i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void DFS(int u){
	cout <<u<<" ";
	visited[u] = true; // tham dinh
	sort(ke[u].begin(), ke[u].end());
	for(auto v: ke[u]) // duyet tap dinh cua u
		if(!visited[v])
			DFS(v);
}
int main(){
	input();
	DFS(s);
}

/*
test 
5 5 3
5 2
3 2 
5 4
5 3
5 1


-> result :  3 2 5 4 1 
*/