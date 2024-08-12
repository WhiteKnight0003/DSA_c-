// ý tưởng 
/*
0 - chưa thăm
1 - đang thăm
2 - đã thăm 
có chu trình khi nó sẽ thăm lại 1 đỉnh đang thăm 
*/

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
int color[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(color,0, sizeof(color));
}

/*
0 - chưa thăm - trắng 
1 - đang thăm - xám 
2 - đã thăm - đen
*/

bool dfs(int u, int par){ // u và cha của nó 
	color[u]=1;
	for(auto x: adj[u]){
		if(color[x]==0){ // chưa thăm
			if(dfs(x,u)) return true; // tại đồ thị có nhiều nhánh nên phải check nhiều nhanh
		}
		// đã có màu chỉ có thể là xám or đen
		else if(color[x]==1) // có màu => cạnh x u là cạnh ngược 
			return true;
	}
	color[u]=2; // kết thúc duyệt 
	return false;
}

int main(){
	inp();
	bool ok = false;
	for(int i=1;i<=n;i++)
		if(!color[i] && dfs(i,0)){ // check đỉnh đó đã đc thăm ch và có chu trình k 
			ok = true;
			break;
		}
	cout<<ok<<endl;
}

